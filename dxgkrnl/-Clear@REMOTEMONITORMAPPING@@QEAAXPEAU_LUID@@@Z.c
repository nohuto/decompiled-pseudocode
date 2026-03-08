/*
 * XREFs of ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C0347C80
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z @ 0x1C0347ED4 (-RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z.c)
 */

void __fastcall REMOTEMONITORMAPPING::Clear(struct _KTHREAD **this, struct _LUID *a2)
{
  REMOTEMONITORMAPPING *v4; // rbx
  REMOTEMONITORMAPPING *v5; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v4 = *this;
  v8 = 2;
  while ( v4 != (REMOTEMONITORMAPPING *)this )
  {
    v5 = v4;
    v4 = *(REMOTEMONITORMAPPING **)v4;
    if ( !a2 || *((_DWORD *)v5 + 7) == a2->LowPart && *((_DWORD *)v5 + 8) == a2->HighPart )
      REMOTEMONITORMAPPING::RemoveMappingEntry((REMOTEMONITORMAPPING *)this, v5);
  }
  *((_BYTE *)this + 48) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
