/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8
 * Callers:
 *     GreCopyVisRgn @ 0x1C003CF00 (GreCopyVisRgn.c)
 *     GreIsRendering @ 0x1C003E610 (GreIsRendering.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreSetDCOrg @ 0x1C005ACD0 (GreSetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00C2510 (GreGetDCOrgEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0197440 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 *     GreSelectVisRgnShared @ 0x1C0197EE0 (GreSelectVisRgnShared.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
  return this;
}
