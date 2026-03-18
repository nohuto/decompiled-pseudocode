/*
 * XREFs of Win32kBaseVideoPortCallout @ 0x1C00CD350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     VideoPortCallout @ 0x1C00CD3B0 (VideoPortCallout.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 __fastcall Win32kBaseVideoPortCallout(__int64 a1)
{
  _BYTE v3[208]; // [rsp+20h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  VideoPortCallout(a1);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  return 0LL;
}
