/*
 * XREFs of ReportExceptionInternal @ 0x1800DC7F8
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCED0 (RtlReportExceptionHelper.c)
 *     RtlWerpReportException @ 0x1800DD340 (RtlWerpReportException.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     SendMessageToWERService @ 0x1800DD34C (SendMessageToWERService.c)
 */

__int64 __fastcall ReportExceptionInternal(
        unsigned int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  _QWORD v11[176]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[176]; // [rsp+5A0h] [rbp+4A0h] BYREF

  v7 = a4;
  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(v12, 0, 0x578uLL);
  v12[6] = __PAIR64__(a1, a5);
  LODWORD(v12[0]) = 91751760;
  LODWORD(v12[5]) = 0x20000000;
  v12[7] = a2;
  if ( a3 && (_DWORD)v7 )
    memmove(&v12[8], a3, 8 * v7);
  memset((char *)v11 + 4, 0, 0x574uLL);
  LODWORD(v11[0]) = 91751760;
  result = SendMessageToWERService(v12, v11);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = v11[6];
      return 0LL;
    }
  }
  return result;
}
