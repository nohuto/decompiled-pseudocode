/*
 * XREFs of Debugger @ 0x1C004E9A4
 * Callers:
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _stricmp_0 @ 0x1C0001AF7 (_stricmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     RtlStringCchCopyA @ 0x1C000B07C (RtlStringCchCopyA.c)
 *     RtlStringCchCatA @ 0x1C003BD94 (RtlStringCchCatA.c)
 *     DbgExecuteCmd @ 0x1C004E878 (DbgExecuteCmd.c)
 */

__int64 Debugger()
{
  char *v0; // rsi
  unsigned int v1; // ebx
  const char **v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  char *Context; // [rsp+38h] [rbp-D0h] BYREF
  CHAR Name[8]; // [rsp+40h] [rbp-C8h] BYREF
  CHAR Command[272]; // [rsp+48h] [rbp-C0h] BYREF
  CHAR Response[256]; // [rsp+158h] [rbp+50h] BYREF
  char pszDest[256]; // [rsp+258h] [rbp+150h] BYREF

  Context = 0LL;
  do
  {
    do
    {
LABEL_2:
      if ( (gDebugger & 0xFFFDFFFF) != 0 && KeGetCurrentIrql() < 2u )
      {
        _InterlockedOr(&gDebugger, 0x20000u);
        DbgSetDebugFilterState(0x19u, 0xFFFFFFFF, 1u);
      }
      if ( qword_1C006F928 )
        ((void (__fastcall *)(const CHAR *, CHAR *, __int64, __int64))qword_1C006F928)(
          "\nAMLI(? for help)-> ",
          Response,
          256LL,
          qword_1C006F930);
      else
        DbgPrompt("\nAMLI(? for help)-> ", Response, 0x100u);
      RtlStringCchCopyA(pszDest, 0x100uLL, Response);
      v0 = strtok_s(Response, " \t\n", &Context);
    }
    while ( !v0 );
    v1 = 0;
    v2 = (const char **)off_1C0062240;
    do
    {
      if ( !stricmp_0(*v2, v0) )
      {
        memset(Command, 0, 0x109uLL);
        strcpy(Name, "ACPI");
        RtlStringCchCopyA(Command, 0x109uLL, "!AMLI ");
        RtlStringCchCatA(Command, 0x109uLL, pszDest);
        RtlStringCchCatA(Command, 0x109uLL, " ; g");
        DbgCommandString(Name, Command);
        goto LABEL_2;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < 0x11 );
    result = DbgExecuteCmd(v3, v0, &Context);
  }
  while ( (_DWORD)result != -1 );
  return result;
}
