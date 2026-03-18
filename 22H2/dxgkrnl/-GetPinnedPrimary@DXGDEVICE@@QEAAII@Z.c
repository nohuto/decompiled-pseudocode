/*
 * XREFs of ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C000518C
 * Callers:
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0195D58 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C02EDFA8 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGDEVICE::GetPinnedPrimary(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v2 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, (DXGDEVICE *)((char *)this + 336), 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  LODWORD(v2) = (*((_DWORD *)this + v2 + 310) >> 8) & 1;
  v7 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return (unsigned int)v2;
}
