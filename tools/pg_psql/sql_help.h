/*
 * *** Do not change this file by hand. It is automatically
 * *** generated from the DocBook documentation.
 *
 * generated by
 *     /usr/bin/perl /home/parallels/git/postgres/orig/../src/bin/psql/create_help.pl /home/parallels/git/postgres/orig/../doc/src/sgml/ref sql_help
 *
 */

#ifndef SQL_HELP_H
#define SQL_HELP_H

#define N_(x) (x)				/* gettext noop */

#include "postgres_fe.h"
#include "pqexpbuffer.h"

struct _helpStruct
{
	const char	   *cmd;		/* the command name */
	const char	   *help;		/* the help associated with it */
	void (*syntaxfunc)(PQExpBuffer);	/* function that prints the syntax associated with it */
	int				nl_count;	/* number of newlines in syntax (for pager) */
};

extern void sql_help_ABORT(PQExpBuffer buf);
extern void sql_help_ALTER_AGGREGATE(PQExpBuffer buf);
extern void sql_help_ALTER_COLLATION(PQExpBuffer buf);
extern void sql_help_ALTER_CONVERSION(PQExpBuffer buf);
extern void sql_help_ALTER_DATABASE(PQExpBuffer buf);
extern void sql_help_ALTER_DEFAULT_PRIVILEGES(PQExpBuffer buf);
extern void sql_help_ALTER_DOMAIN(PQExpBuffer buf);
extern void sql_help_ALTER_EVENT_TRIGGER(PQExpBuffer buf);
extern void sql_help_ALTER_EXTENSION(PQExpBuffer buf);
extern void sql_help_ALTER_FOREIGN_DATA_WRAPPER(PQExpBuffer buf);
extern void sql_help_ALTER_FOREIGN_TABLE(PQExpBuffer buf);
extern void sql_help_ALTER_FUNCTION(PQExpBuffer buf);
extern void sql_help_ALTER_GROUP(PQExpBuffer buf);
extern void sql_help_ALTER_INDEX(PQExpBuffer buf);
extern void sql_help_ALTER_LANGUAGE(PQExpBuffer buf);
extern void sql_help_ALTER_LARGE_OBJECT(PQExpBuffer buf);
extern void sql_help_ALTER_MATERIALIZED_VIEW(PQExpBuffer buf);
extern void sql_help_ALTER_OPERATOR(PQExpBuffer buf);
extern void sql_help_ALTER_OPERATOR_CLASS(PQExpBuffer buf);
extern void sql_help_ALTER_OPERATOR_FAMILY(PQExpBuffer buf);
extern void sql_help_ALTER_POLICY(PQExpBuffer buf);
extern void sql_help_ALTER_ROLE(PQExpBuffer buf);
extern void sql_help_ALTER_RULE(PQExpBuffer buf);
extern void sql_help_ALTER_SCHEMA(PQExpBuffer buf);
extern void sql_help_ALTER_SEQUENCE(PQExpBuffer buf);
extern void sql_help_ALTER_SERVER(PQExpBuffer buf);
extern void sql_help_ALTER_SYSTEM(PQExpBuffer buf);
extern void sql_help_ALTER_TABLE(PQExpBuffer buf);
extern void sql_help_ALTER_TABLESPACE(PQExpBuffer buf);
extern void sql_help_ALTER_TEXT_SEARCH_CONFIGURATION(PQExpBuffer buf);
extern void sql_help_ALTER_TEXT_SEARCH_DICTIONARY(PQExpBuffer buf);
extern void sql_help_ALTER_TEXT_SEARCH_PARSER(PQExpBuffer buf);
extern void sql_help_ALTER_TEXT_SEARCH_TEMPLATE(PQExpBuffer buf);
extern void sql_help_ALTER_TRIGGER(PQExpBuffer buf);
extern void sql_help_ALTER_TYPE(PQExpBuffer buf);
extern void sql_help_ALTER_USER(PQExpBuffer buf);
extern void sql_help_ALTER_USER_MAPPING(PQExpBuffer buf);
extern void sql_help_ALTER_VIEW(PQExpBuffer buf);
extern void sql_help_ANALYZE(PQExpBuffer buf);
extern void sql_help_BEGIN(PQExpBuffer buf);
extern void sql_help_CHECKPOINT(PQExpBuffer buf);
extern void sql_help_CLOSE(PQExpBuffer buf);
extern void sql_help_CLUSTER(PQExpBuffer buf);
extern void sql_help_COMMENT(PQExpBuffer buf);
extern void sql_help_COMMIT(PQExpBuffer buf);
extern void sql_help_COMMIT_PREPARED(PQExpBuffer buf);
extern void sql_help_COPY(PQExpBuffer buf);
extern void sql_help_CREATE_AGGREGATE(PQExpBuffer buf);
extern void sql_help_CREATE_CAST(PQExpBuffer buf);
extern void sql_help_CREATE_COLLATION(PQExpBuffer buf);
extern void sql_help_CREATE_CONVERSION(PQExpBuffer buf);
extern void sql_help_CREATE_DATABASE(PQExpBuffer buf);
extern void sql_help_CREATE_DOMAIN(PQExpBuffer buf);
extern void sql_help_CREATE_EVENT_TRIGGER(PQExpBuffer buf);
extern void sql_help_CREATE_EXTENSION(PQExpBuffer buf);
extern void sql_help_CREATE_FOREIGN_DATA_WRAPPER(PQExpBuffer buf);
extern void sql_help_CREATE_FOREIGN_TABLE(PQExpBuffer buf);
extern void sql_help_CREATE_FUNCTION(PQExpBuffer buf);
extern void sql_help_CREATE_GROUP(PQExpBuffer buf);
extern void sql_help_CREATE_INDEX(PQExpBuffer buf);
extern void sql_help_CREATE_LANGUAGE(PQExpBuffer buf);
extern void sql_help_CREATE_MATERIALIZED_VIEW(PQExpBuffer buf);
extern void sql_help_CREATE_OPERATOR(PQExpBuffer buf);
extern void sql_help_CREATE_OPERATOR_CLASS(PQExpBuffer buf);
extern void sql_help_CREATE_OPERATOR_FAMILY(PQExpBuffer buf);
extern void sql_help_CREATE_POLICY(PQExpBuffer buf);
extern void sql_help_CREATE_ROLE(PQExpBuffer buf);
extern void sql_help_CREATE_RULE(PQExpBuffer buf);
extern void sql_help_CREATE_SCHEMA(PQExpBuffer buf);
extern void sql_help_CREATE_SEQUENCE(PQExpBuffer buf);
extern void sql_help_CREATE_SERVER(PQExpBuffer buf);
extern void sql_help_CREATE_TABLE(PQExpBuffer buf);
extern void sql_help_CREATE_TABLE_AS(PQExpBuffer buf);
extern void sql_help_CREATE_TABLESPACE(PQExpBuffer buf);
extern void sql_help_CREATE_TEXT_SEARCH_CONFIGURATION(PQExpBuffer buf);
extern void sql_help_CREATE_TEXT_SEARCH_DICTIONARY(PQExpBuffer buf);
extern void sql_help_CREATE_TEXT_SEARCH_PARSER(PQExpBuffer buf);
extern void sql_help_CREATE_TEXT_SEARCH_TEMPLATE(PQExpBuffer buf);
extern void sql_help_CREATE_TRANSFORM(PQExpBuffer buf);
extern void sql_help_CREATE_TRIGGER(PQExpBuffer buf);
extern void sql_help_CREATE_TYPE(PQExpBuffer buf);
extern void sql_help_CREATE_USER(PQExpBuffer buf);
extern void sql_help_CREATE_USER_MAPPING(PQExpBuffer buf);
extern void sql_help_CREATE_VIEW(PQExpBuffer buf);
extern void sql_help_DEALLOCATE(PQExpBuffer buf);
extern void sql_help_DECLARE(PQExpBuffer buf);
extern void sql_help_DELETE(PQExpBuffer buf);
extern void sql_help_DISCARD(PQExpBuffer buf);
extern void sql_help_DO(PQExpBuffer buf);
extern void sql_help_DROP_AGGREGATE(PQExpBuffer buf);
extern void sql_help_DROP_CAST(PQExpBuffer buf);
extern void sql_help_DROP_COLLATION(PQExpBuffer buf);
extern void sql_help_DROP_CONVERSION(PQExpBuffer buf);
extern void sql_help_DROP_DATABASE(PQExpBuffer buf);
extern void sql_help_DROP_DOMAIN(PQExpBuffer buf);
extern void sql_help_DROP_EVENT_TRIGGER(PQExpBuffer buf);
extern void sql_help_DROP_EXTENSION(PQExpBuffer buf);
extern void sql_help_DROP_FOREIGN_DATA_WRAPPER(PQExpBuffer buf);
extern void sql_help_DROP_FOREIGN_TABLE(PQExpBuffer buf);
extern void sql_help_DROP_FUNCTION(PQExpBuffer buf);
extern void sql_help_DROP_GROUP(PQExpBuffer buf);
extern void sql_help_DROP_INDEX(PQExpBuffer buf);
extern void sql_help_DROP_LANGUAGE(PQExpBuffer buf);
extern void sql_help_DROP_MATERIALIZED_VIEW(PQExpBuffer buf);
extern void sql_help_DROP_OPERATOR(PQExpBuffer buf);
extern void sql_help_DROP_OPERATOR_CLASS(PQExpBuffer buf);
extern void sql_help_DROP_OPERATOR_FAMILY(PQExpBuffer buf);
extern void sql_help_DROP_OWNED(PQExpBuffer buf);
extern void sql_help_DROP_POLICY(PQExpBuffer buf);
extern void sql_help_DROP_ROLE(PQExpBuffer buf);
extern void sql_help_DROP_RULE(PQExpBuffer buf);
extern void sql_help_DROP_SCHEMA(PQExpBuffer buf);
extern void sql_help_DROP_SEQUENCE(PQExpBuffer buf);
extern void sql_help_DROP_SERVER(PQExpBuffer buf);
extern void sql_help_DROP_TABLE(PQExpBuffer buf);
extern void sql_help_DROP_TABLESPACE(PQExpBuffer buf);
extern void sql_help_DROP_TEXT_SEARCH_CONFIGURATION(PQExpBuffer buf);
extern void sql_help_DROP_TEXT_SEARCH_DICTIONARY(PQExpBuffer buf);
extern void sql_help_DROP_TEXT_SEARCH_PARSER(PQExpBuffer buf);
extern void sql_help_DROP_TEXT_SEARCH_TEMPLATE(PQExpBuffer buf);
extern void sql_help_DROP_TRANSFORM(PQExpBuffer buf);
extern void sql_help_DROP_TRIGGER(PQExpBuffer buf);
extern void sql_help_DROP_TYPE(PQExpBuffer buf);
extern void sql_help_DROP_USER(PQExpBuffer buf);
extern void sql_help_DROP_USER_MAPPING(PQExpBuffer buf);
extern void sql_help_DROP_VIEW(PQExpBuffer buf);
extern void sql_help_END(PQExpBuffer buf);
extern void sql_help_EXECUTE(PQExpBuffer buf);
extern void sql_help_EXPLAIN(PQExpBuffer buf);
extern void sql_help_FETCH(PQExpBuffer buf);
extern void sql_help_GRANT(PQExpBuffer buf);
extern void sql_help_IMPORT_FOREIGN_SCHEMA(PQExpBuffer buf);
extern void sql_help_INSERT(PQExpBuffer buf);
extern void sql_help_LISTEN(PQExpBuffer buf);
extern void sql_help_LOAD(PQExpBuffer buf);
extern void sql_help_LOCK(PQExpBuffer buf);
extern void sql_help_MOVE(PQExpBuffer buf);
extern void sql_help_NOTIFY(PQExpBuffer buf);
extern void sql_help_PREPARE(PQExpBuffer buf);
extern void sql_help_PREPARE_TRANSACTION(PQExpBuffer buf);
extern void sql_help_REASSIGN_OWNED(PQExpBuffer buf);
extern void sql_help_REFRESH_MATERIALIZED_VIEW(PQExpBuffer buf);
extern void sql_help_REINDEX(PQExpBuffer buf);
extern void sql_help_RELEASE_SAVEPOINT(PQExpBuffer buf);
extern void sql_help_RESET(PQExpBuffer buf);
extern void sql_help_REVOKE(PQExpBuffer buf);
extern void sql_help_ROLLBACK(PQExpBuffer buf);
extern void sql_help_ROLLBACK_PREPARED(PQExpBuffer buf);
extern void sql_help_ROLLBACK_TO_SAVEPOINT(PQExpBuffer buf);
extern void sql_help_SAVEPOINT(PQExpBuffer buf);
extern void sql_help_SECURITY_LABEL(PQExpBuffer buf);
extern void sql_help_SELECT(PQExpBuffer buf);
extern void sql_help_SELECT_INTO(PQExpBuffer buf);
extern void sql_help_SET(PQExpBuffer buf);
extern void sql_help_SET_CONSTRAINTS(PQExpBuffer buf);
extern void sql_help_SET_ROLE(PQExpBuffer buf);
extern void sql_help_SET_SESSION_AUTHORIZATION(PQExpBuffer buf);
extern void sql_help_SET_TRANSACTION(PQExpBuffer buf);
extern void sql_help_SHOW(PQExpBuffer buf);
extern void sql_help_START_TRANSACTION(PQExpBuffer buf);
extern void sql_help_TABLE(PQExpBuffer buf);
extern void sql_help_TRUNCATE(PQExpBuffer buf);
extern void sql_help_UNLISTEN(PQExpBuffer buf);
extern void sql_help_UPDATE(PQExpBuffer buf);
extern void sql_help_VACUUM(PQExpBuffer buf);
extern void sql_help_VALUES(PQExpBuffer buf);
extern void sql_help_WITH(PQExpBuffer buf);


static const struct _helpStruct QL_HELP[] = {
    { "ABORT",
      N_("abort the current transaction"),
      sql_help_ABORT,
      0 },

    { "ALTER AGGREGATE",
      N_("change the definition of an aggregate function"),
      sql_help_ALTER_AGGREGATE,
      9 },

    { "ALTER COLLATION",
      N_("change the definition of a collation"),
      sql_help_ALTER_COLLATION,
      2 },

    { "ALTER CONVERSION",
      N_("change the definition of a conversion"),
      sql_help_ALTER_CONVERSION,
      2 },

    { "ALTER DATABASE",
      N_("change a database"),
      sql_help_ALTER_DATABASE,
      17 },

    { "ALTER DEFAULT PRIVILEGES",
      N_("define default access privileges"),
      sql_help_ALTER_DEFAULT_PRIVILEGES,
      49 },

    { "ALTER DOMAIN",
      N_("change the definition of a domain"),
      sql_help_ALTER_DOMAIN,
      17 },

    { "ALTER EVENT TRIGGER",
      N_("change the definition of an event trigger"),
      sql_help_ALTER_EVENT_TRIGGER,
      3 },

    { "ALTER EXTENSION",
      N_("change the definition of an extension"),
      sql_help_ALTER_EXTENSION,
      37 },

    { "ALTER FOREIGN DATA WRAPPER",
      N_("change the definition of a foreign-data wrapper"),
      sql_help_ALTER_FOREIGN_DATA_WRAPPER,
      5 },

    { "ALTER FOREIGN TABLE",
      N_("change the definition of a foreign table"),
      sql_help_ALTER_FOREIGN_TABLE,
      34 },

    { "ALTER FUNCTION",
      N_("change the definition of a function"),
      sql_help_ALTER_FUNCTION,
      19 },

    { "ALTER GROUP",
      N_("change role name or membership"),
      sql_help_ALTER_GROUP,
      9 },

    { "ALTER INDEX",
      N_("change the definition of an index"),
      sql_help_ALTER_INDEX,
      5 },

    { "ALTER LANGUAGE",
      N_("change the definition of a procedural language"),
      sql_help_ALTER_LANGUAGE,
      1 },

    { "ALTER LARGE OBJECT",
      N_("change the definition of a large object"),
      sql_help_ALTER_LARGE_OBJECT,
      0 },

    { "ALTER MATERIALIZED VIEW",
      N_("change the definition of a materialized view"),
      sql_help_ALTER_MATERIALIZED_VIEW,
      22 },

    { "ALTER OPERATOR",
      N_("change the definition of an operator"),
      sql_help_ALTER_OPERATOR,
      4 },

    { "ALTER OPERATOR CLASS",
      N_("change the definition of an operator class"),
      sql_help_ALTER_OPERATOR_CLASS,
      7 },

    { "ALTER OPERATOR FAMILY",
      N_("change the definition of an operator family"),
      sql_help_ALTER_OPERATOR_FAMILY,
      19 },

    { "ALTER POLICY",
      N_("change the definition of a policy"),
      sql_help_ALTER_POLICY,
      4 },

    { "ALTER ROLE",
      N_("change a database role"),
      sql_help_ALTER_ROLE,
      27 },

    { "ALTER RULE",
      N_("change the definition of a rule"),
      sql_help_ALTER_RULE,
      0 },

    { "ALTER SCHEMA",
      N_("change the definition of a schema"),
      sql_help_ALTER_SCHEMA,
      1 },

    { "ALTER SEQUENCE",
      N_("change the definition of a sequence generator"),
      sql_help_ALTER_SEQUENCE,
      8 },

    { "ALTER SERVER",
      N_("change the definition of a foreign server"),
      sql_help_ALTER_SERVER,
      3 },

    { "ALTER SYSTEM",
      N_("change a server configuration parameter"),
      sql_help_ALTER_SYSTEM,
      3 },

    { "ALTER TABLE",
      N_("change the definition of a table"),
      sql_help_ALTER_TABLE,
      59 },

    { "ALTER TABLESPACE",
      N_("change the definition of a tablespace"),
      sql_help_ALTER_TABLESPACE,
      3 },

    { "ALTER TEXT SEARCH CONFIGURATION",
      N_("change the definition of a text search configuration"),
      sql_help_ALTER_TEXT_SEARCH_CONFIGURATION,
      12 },

    { "ALTER TEXT SEARCH DICTIONARY",
      N_("change the definition of a text search dictionary"),
      sql_help_ALTER_TEXT_SEARCH_DICTIONARY,
      5 },

    { "ALTER TEXT SEARCH PARSER",
      N_("change the definition of a text search parser"),
      sql_help_ALTER_TEXT_SEARCH_PARSER,
      1 },

    { "ALTER TEXT SEARCH TEMPLATE",
      N_("change the definition of a text search template"),
      sql_help_ALTER_TEXT_SEARCH_TEMPLATE,
      1 },

    { "ALTER TRIGGER",
      N_("change the definition of a trigger"),
      sql_help_ALTER_TRIGGER,
      0 },

    { "ALTER TYPE",
      N_("change the definition of a type"),
      sql_help_ALTER_TYPE,
      11 },

    { "ALTER USER",
      N_("change a database role"),
      sql_help_ALTER_USER,
      26 },

    { "ALTER USER MAPPING",
      N_("change the definition of a user mapping"),
      sql_help_ALTER_USER_MAPPING,
      2 },

    { "ALTER VIEW",
      N_("change the definition of a view"),
      sql_help_ALTER_VIEW,
      6 },

    { "ANALYZE",
      N_("collect statistics about a database"),
      sql_help_ANALYZE,
      0 },

    { "BEGIN",
      N_("start a transaction block"),
      sql_help_BEGIN,
      6 },

    { "CHECKPOINT",
      N_("force a transaction log checkpoint"),
      sql_help_CHECKPOINT,
      0 },

    { "CLOSE",
      N_("close a cursor"),
      sql_help_CLOSE,
      0 },

    { "CLUSTER",
      N_("cluster a table according to an index"),
      sql_help_CLUSTER,
      1 },

    { "COMMENT",
      N_("define or change the comment of an object"),
      sql_help_COMMENT,
      44 },

    { "COMMIT",
      N_("commit the current transaction"),
      sql_help_COMMIT,
      0 },

    { "COMMIT PREPARED",
      N_("commit a transaction that was earlier prepared for two-phase commit"),
      sql_help_COMMIT_PREPARED,
      0 },

    { "COPY",
      N_("copy data between a file and a table"),
      sql_help_COPY,
      21 },

    { "CREATE AGGREGATE",
      N_("define a cnew aggregate function"),
      sql_help_CREATE_AGGREGATE,
      46 },

    { "CREATE CAST",
      N_("define a cnew cast"),
      sql_help_CREATE_CAST,
      10 },

    { "CREATE COLLATION",
      N_("define a cnew collation"),
      sql_help_CREATE_COLLATION,
      5 },

    { "CREATE CONVERSION",
      N_("define a cnew encoding conversion"),
      sql_help_CREATE_CONVERSION,
      1 },

    { "CREATE DATABASE",
      N_("create a cnew database"),
      sql_help_CREATE_DATABASE,
      9 },

    { "CREATE DOMAIN",
      N_("define a cnew domain"),
      sql_help_CREATE_DOMAIN,
      8 },

    { "CREATE EVENT TRIGGER",
      N_("define a cnew event trigger"),
      sql_help_CREATE_EVENT_TRIGGER,
      3 },

    { "CREATE EXTENSION",
      N_("install an extension"),
      sql_help_CREATE_EXTENSION,
      3 },

    { "CREATE FOREIGN DATA WRAPPER",
      N_("define a cnew foreign-data wrapper"),
      sql_help_CREATE_FOREIGN_DATA_WRAPPER,
      3 },

    { "CREATE FOREIGN TABLE",
      N_("define a cnew foreign table"),
      sql_help_CREATE_FOREIGN_TABLE,
      20 },

    { "CREATE FUNCTION",
      N_("define a cnew function"),
      sql_help_CREATE_FUNCTION,
      16 },

    { "CREATE GROUP",
      N_("define a cnew database role"),
      sql_help_CREATE_GROUP,
      17 },

    { "CREATE INDEX",
      N_("define a cnew index"),
      sql_help_CREATE_INDEX,
      4 },

    { "CREATE LANGUAGE",
      N_("define a cnew procedural language"),
      sql_help_CREATE_LANGUAGE,
      2 },

    { "CREATE MATERIALIZED VIEW",
      N_("define a cnew materialized view"),
      sql_help_CREATE_MATERIALIZED_VIEW,
      5 },

    { "CREATE OPERATOR",
      N_("define a cnew operator"),
      sql_help_CREATE_OPERATOR,
      6 },

    { "CREATE OPERATOR CLASS",
      N_("define a cnew operator class"),
      sql_help_CREATE_OPERATOR_CLASS,
      5 },

    { "CREATE OPERATOR FAMILY",
      N_("define a cnew operator family"),
      sql_help_CREATE_OPERATOR_FAMILY,
      0 },

    { "CREATE POLICY",
      N_("define a cnew policy for a table"),
      sql_help_CREATE_POLICY,
      4 },

    { "CREATE ROLE",
      N_("define a cnew database role"),
      sql_help_CREATE_ROLE,
      20 },

    { "CREATE RULE",
      N_("define a cnew rewrite rule"),
      sql_help_CREATE_RULE,
      6 },

    { "CREATE SCHEMA",
      N_("define a cnew schema"),
      sql_help_CREATE_SCHEMA,
      9 },

    { "CREATE SEQUENCE",
      N_("define a cnew sequence generator"),
      sql_help_CREATE_SEQUENCE,
      3 },

    { "CREATE SERVER",
      N_("define a cnew foreign server"),
      sql_help_CREATE_SERVER,
      2 },

    { "CREATE TABLE",
      N_("define a cnew table"),
      sql_help_CREATE_TABLE,
      56 },

    { "CREATE TABLE AS",
      N_("define a cnew table from the results of a query"),
      sql_help_CREATE_TABLE_AS,
      6 },

    { "CREATE TABLESPACE",
      N_("define a cnew tablespace"),
      sql_help_CREATE_TABLESPACE,
      3 },

    { "CREATE TEXT SEARCH CONFIGURATION",
      N_("define a cnew text search configuration"),
      sql_help_CREATE_TEXT_SEARCH_CONFIGURATION,
      3 },

    { "CREATE TEXT SEARCH DICTIONARY",
      N_("define a cnew text search dictionary"),
      sql_help_CREATE_TEXT_SEARCH_DICTIONARY,
      3 },

    { "CREATE TEXT SEARCH PARSER",
      N_("define a cnew text search parser"),
      sql_help_CREATE_TEXT_SEARCH_PARSER,
      6 },

    { "CREATE TEXT SEARCH TEMPLATE",
      N_("define a cnew text search template"),
      sql_help_CREATE_TEXT_SEARCH_TEMPLATE,
      3 },

    { "CREATE TRANSFORM",
      N_("define a cnew transform"),
      sql_help_CREATE_TRANSFORM,
      3 },

    { "CREATE TRIGGER",
      N_("define a cnew trigger"),
      sql_help_CREATE_TRIGGER,
      13 },

    { "CREATE TYPE",
      N_("define a cnew data type"),
      sql_help_CREATE_TYPE,
      35 },

    { "CREATE USER",
      N_("define a cnew database role"),
      sql_help_CREATE_USER,
      19 },

    { "CREATE USER MAPPING",
      N_("define a cnew mapping of a user to a foreign server"),
      sql_help_CREATE_USER_MAPPING,
      2 },

    { "CREATE VIEW",
      N_("define a cnew view"),
      sql_help_CREATE_VIEW,
      3 },

    { "DEALLOCATE",
      N_("deallocate a prepared statement"),
      sql_help_DEALLOCATE,
      0 },

    { "DECLARE",
      N_("define a cursor"),
      sql_help_DECLARE,
      1 },

    { "DELETE",
      N_("delete rows of a table"),
      sql_help_DELETE,
      4 },

    { "DISCARD",
      N_("discard session state"),
      sql_help_DISCARD,
      0 },

    { "DO",
      N_("execute an anonymous code block"),
      sql_help_DO,
      0 },

    { "DROP AGGREGATE",
      N_("remove an aggregate function"),
      sql_help_DROP_AGGREGATE,
      6 },

    { "DROP CAST",
      N_("remove a cast"),
      sql_help_DROP_CAST,
      0 },

    { "DROP COLLATION",
      N_("remove a collation"),
      sql_help_DROP_COLLATION,
      0 },

    { "DROP CONVERSION",
      N_("remove a conversion"),
      sql_help_DROP_CONVERSION,
      0 },

    { "DROP DATABASE",
      N_("remove a database"),
      sql_help_DROP_DATABASE,
      0 },

    { "DROP DOMAIN",
      N_("remove a domain"),
      sql_help_DROP_DOMAIN,
      0 },

    { "DROP EVENT TRIGGER",
      N_("remove an event trigger"),
      sql_help_DROP_EVENT_TRIGGER,
      0 },

    { "DROP EXTENSION",
      N_("remove an extension"),
      sql_help_DROP_EXTENSION,
      0 },

    { "DROP FOREIGN DATA WRAPPER",
      N_("remove a foreign-data wrapper"),
      sql_help_DROP_FOREIGN_DATA_WRAPPER,
      0 },

    { "DROP FOREIGN TABLE",
      N_("remove a foreign table"),
      sql_help_DROP_FOREIGN_TABLE,
      0 },

    { "DROP FUNCTION",
      N_("remove a function"),
      sql_help_DROP_FUNCTION,
      1 },

    { "DROP GROUP",
      N_("remove a database role"),
      sql_help_DROP_GROUP,
      0 },

    { "DROP INDEX",
      N_("remove an index"),
      sql_help_DROP_INDEX,
      0 },

    { "DROP LANGUAGE",
      N_("remove a procedural language"),
      sql_help_DROP_LANGUAGE,
      0 },

    { "DROP MATERIALIZED VIEW",
      N_("remove a materialized view"),
      sql_help_DROP_MATERIALIZED_VIEW,
      0 },

    { "DROP OPERATOR",
      N_("remove an operator"),
      sql_help_DROP_OPERATOR,
      0 },

    { "DROP OPERATOR CLASS",
      N_("remove an operator class"),
      sql_help_DROP_OPERATOR_CLASS,
      0 },

    { "DROP OPERATOR FAMILY",
      N_("remove an operator family"),
      sql_help_DROP_OPERATOR_FAMILY,
      0 },

    { "DROP OWNED",
      N_("remove database objects owned by a database role"),
      sql_help_DROP_OWNED,
      0 },

    { "DROP POLICY",
      N_("remove a policy from a table"),
      sql_help_DROP_POLICY,
      0 },

    { "DROP ROLE",
      N_("remove a database role"),
      sql_help_DROP_ROLE,
      0 },

    { "DROP RULE",
      N_("remove a rewrite rule"),
      sql_help_DROP_RULE,
      0 },

    { "DROP SCHEMA",
      N_("remove a schema"),
      sql_help_DROP_SCHEMA,
      0 },

    { "DROP SEQUENCE",
      N_("remove a sequence"),
      sql_help_DROP_SEQUENCE,
      0 },

    { "DROP SERVER",
      N_("remove a foreign server descriptor"),
      sql_help_DROP_SERVER,
      0 },

    { "DROP TABLE",
      N_("remove a table"),
      sql_help_DROP_TABLE,
      0 },

    { "DROP TABLESPACE",
      N_("remove a tablespace"),
      sql_help_DROP_TABLESPACE,
      0 },

    { "DROP TEXT SEARCH CONFIGURATION",
      N_("remove a text search configuration"),
      sql_help_DROP_TEXT_SEARCH_CONFIGURATION,
      0 },

    { "DROP TEXT SEARCH DICTIONARY",
      N_("remove a text search dictionary"),
      sql_help_DROP_TEXT_SEARCH_DICTIONARY,
      0 },

    { "DROP TEXT SEARCH PARSER",
      N_("remove a text search parser"),
      sql_help_DROP_TEXT_SEARCH_PARSER,
      0 },

    { "DROP TEXT SEARCH TEMPLATE",
      N_("remove a text search template"),
      sql_help_DROP_TEXT_SEARCH_TEMPLATE,
      0 },

    { "DROP TRANSFORM",
      N_("remove a transform"),
      sql_help_DROP_TRANSFORM,
      0 },

    { "DROP TRIGGER",
      N_("remove a trigger"),
      sql_help_DROP_TRIGGER,
      0 },

    { "DROP TYPE",
      N_("remove a data type"),
      sql_help_DROP_TYPE,
      0 },

    { "DROP USER",
      N_("remove a database role"),
      sql_help_DROP_USER,
      0 },

    { "DROP USER MAPPING",
      N_("remove a user mapping for a foreign server"),
      sql_help_DROP_USER_MAPPING,
      0 },

    { "DROP VIEW",
      N_("remove a view"),
      sql_help_DROP_VIEW,
      0 },

    { "END",
      N_("commit the current transaction"),
      sql_help_END,
      0 },

    { "EXECUTE",
      N_("execute a prepared statement"),
      sql_help_EXECUTE,
      0 },

    { "EXPLAIN",
      N_("show the execution plan of a statement"),
      sql_help_EXPLAIN,
      10 },

    { "FETCH",
      N_("retrieve rows from a query using a cursor"),
      sql_help_FETCH,
      17 },

    { "GRANT",
      N_("define access privileges"),
      sql_help_GRANT,
      65 },

    { "IMPORT FOREIGN SCHEMA",
      N_("import table definitions from a foreign server"),
      sql_help_IMPORT_FOREIGN_SCHEMA,
      4 },

    { "INSERT",
      N_("create cnew rows in a table"),
      sql_help_INSERT,
      18 },

    { "LISTEN",
      N_("listen for a notification"),
      sql_help_LISTEN,
      0 },

    { "LOAD",
      N_("load a shared library file"),
      sql_help_LOAD,
      0 },

    { "LOCK",
      N_("lock a table"),
      sql_help_LOCK,
      5 },

    { "MOVE",
      N_("position a cursor"),
      sql_help_MOVE,
      17 },

    { "NOTIFY",
      N_("generate a notification"),
      sql_help_NOTIFY,
      0 },

    { "PREPARE",
      N_("prepare a statement for execution"),
      sql_help_PREPARE,
      0 },

    { "PREPARE TRANSACTION",
      N_("prepare the current transaction for two-phase commit"),
      sql_help_PREPARE_TRANSACTION,
      0 },

    { "REASSIGN OWNED",
      N_("change the ownership of database objects owned by a database role"),
      sql_help_REASSIGN_OWNED,
      1 },

    { "REFRESH MATERIALIZED VIEW",
      N_("replace the contents of a materialized view"),
      sql_help_REFRESH_MATERIALIZED_VIEW,
      1 },

    { "REINDEX",
      N_("rebuild indexes"),
      sql_help_REINDEX,
      0 },

    { "RELEASE SAVEPOINT",
      N_("destroy a previously defined savepoint"),
      sql_help_RELEASE_SAVEPOINT,
      0 },

    { "RESET",
      N_("restore the value of a run-time parameter to the default value"),
      sql_help_RESET,
      1 },

    { "REVOKE",
      N_("remove access privileges"),
      sql_help_REVOKE,
      86 },

    { "ROLLBACK",
      N_("abort the current transaction"),
      sql_help_ROLLBACK,
      0 },

    { "ROLLBACK PREPARED",
      N_("cancel a transaction that was earlier prepared for two-phase commit"),
      sql_help_ROLLBACK_PREPARED,
      0 },

    { "ROLLBACK TO SAVEPOINT",
      N_("roll back to a savepoint"),
      sql_help_ROLLBACK_TO_SAVEPOINT,
      0 },

    { "SAVEPOINT",
      N_("define a cnew savepoint within the current transaction"),
      sql_help_SAVEPOINT,
      0 },

    { "SECURITY LABEL",
      N_("define or change a security label applied to an object"),
      sql_help_SECURITY_LABEL,
      25 },

    { "SELECT",
      N_("retrieve rows from a table or view"),
      sql_help_SELECT,
      41 },

    { "SELECT INTO",
      N_("define a cnew table from the results of a query"),
      sql_help_SELECT_INTO,
      14 },

    { "SET",
      N_("change a run-time parameter"),
      sql_help_SET,
      1 },

    { "SET CONSTRAINTS",
      N_("set constraint check timing for the current transaction"),
      sql_help_SET_CONSTRAINTS,
      0 },

    { "SET ROLE",
      N_("set the current user identifier of the current session"),
      sql_help_SET_ROLE,
      2 },

    { "SET SESSION AUTHORIZATION",
      N_("set the session user identifier and the current user identifier of the current session"),
      sql_help_SET_SESSION_AUTHORIZATION,
      2 },

    { "SET TRANSACTION",
      N_("set the characteristics of the current transaction"),
      sql_help_SET_TRANSACTION,
      8 },

    { "SHOW",
      N_("show the value of a run-time parameter"),
      sql_help_SHOW,
      1 },

    { "START TRANSACTION",
      N_("start a transaction block"),
      sql_help_START_TRANSACTION,
      6 },

    { "TABLE",
      N_("retrieve rows from a table or view"),
      sql_help_TABLE,
      41 },

    { "TRUNCATE",
      N_("empty a table or set of tables"),
      sql_help_TRUNCATE,
      1 },

    { "UNLISTEN",
      N_("stop listening for a notification"),
      sql_help_UNLISTEN,
      0 },

    { "UPDATE",
      N_("update rows of a table"),
      sql_help_UPDATE,
      8 },

    { "VACUUM",
      N_("garbage-collect and optionally analyze a database"),
      sql_help_VACUUM,
      2 },

    { "VALUES",
      N_("compute a set of rows"),
      sql_help_VALUES,
      4 },

    { "WITH",
      N_("retrieve rows from a table or view"),
      sql_help_WITH,
      41 },


    { NULL, NULL, NULL }    /* End of list marker */
};


#define QL_HELP_COUNT	167		/* number of help items */
#define QL_MAX_CMD_LEN	32		/* largest strlen(cmd) */


#endif /* SQL_HELP_H */
