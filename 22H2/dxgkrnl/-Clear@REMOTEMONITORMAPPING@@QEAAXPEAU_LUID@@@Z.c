/*
 * XREFs of ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C034C6E8
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BA418 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02F4AB8 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F5670 (DxgkIddHandleSetDisplayConfig2.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0311CA0 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z @ 0x1C034C93C (-RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z.c)
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
