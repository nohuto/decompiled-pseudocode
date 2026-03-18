/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00A7304
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C00A6E9C (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00A70D8 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall ValidateChangeMessageFilter(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( *((_DWORD *)a1 + 220) <= 0x1000u )
  {
    UserSetLastError(5LL, a2);
    EtwTraceUIPISystemError(a1, 0LL, 3LL);
  }
  else
  {
    v3 = WORD1(a2);
    if ( !(_WORD)v3 )
      return 1LL;
    UserSetLastError(87LL, v3);
  }
  return 0LL;
}
