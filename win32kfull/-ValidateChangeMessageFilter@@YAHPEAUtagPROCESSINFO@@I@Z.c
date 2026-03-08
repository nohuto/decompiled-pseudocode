/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00CBB6C
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C00CB7AC (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CB9E8 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall ValidateChangeMessageFilter(struct tagPROCESSINFO *a1, int a2)
{
  if ( *((_DWORD *)a1 + 216) <= 0x1000u )
  {
    UserSetLastError(5);
    EtwTraceUIPISystemError(a1, 0LL, 3LL);
  }
  else
  {
    if ( !HIWORD(a2) )
      return 1LL;
    UserSetLastError(87);
  }
  return 0LL;
}
