/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C02E8164
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02E82CC (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02E7F58 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rbx
  BOOL v3; // r14d
  struct DXGALLOCATION *v4; // rsi
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v2 = this[7];
  v7 = 2;
  while ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) & 2) == 0;
    v4 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 3);
    while ( v4 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v4, v3);
      v4 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
      if ( (*((_DWORD *)v2 + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) |= 2u;
    }
    v2 = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
