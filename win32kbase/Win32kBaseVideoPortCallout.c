/*
 * XREFs of Win32kBaseVideoPortCallout @ 0x1C00D9A00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     VideoPortCallout @ 0x1C00D9A60 (VideoPortCallout.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall Win32kBaseVideoPortCallout(__int64 a1)
{
  _BYTE v3[208]; // [rsp+20h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  VideoPortCallout(a1);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  return 0LL;
}
