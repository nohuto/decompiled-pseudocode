/*
 * XREFs of NtGdiMirrorWindowOrg @ 0x1C02C66F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C02D179C (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiMirrorWindowOrg(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
  {
    DC::MirrorWindowOrg(v3[0]);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return 1;
  }
  return v1;
}
