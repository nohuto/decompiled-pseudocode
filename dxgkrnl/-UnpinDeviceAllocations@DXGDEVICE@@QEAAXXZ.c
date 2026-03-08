/*
 * XREFs of ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01E0F04
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C01E0DD0 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02E8CB8 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceAllocations(struct _KTHREAD **this)
{
  unsigned int v2; // r8d
  struct _KTHREAD *v3; // rbx
  struct _KTHREAD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edx
  _BYTE v7[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  struct DXGALLOCATION *v10; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v3 = this[6];
  v9 = 2;
  while ( v3 )
  {
    v4 = this[2];
    v10 = v3;
    v5 = *((_QWORD *)v4 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 184)
      && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 168)) )
    {
      WdLogSingleEntry1(1LL, 480LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
        480LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)v3 + 18) & 0x800) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL) + 224LL))(
        *((_QWORD *)this[2] + 96),
        *((_QWORD *)v3 + 3));
      *((_DWORD *)v3 + 18) &= ~0x800u;
    }
    v6 = *(_DWORD *)(*((_QWORD *)v3 + 6) + 4LL);
    if ( (v6 & 0x2000) != 0 )
    {
      if ( *((_QWORD *)v3 + 3) )
        DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, (v6 >> 6) & 0xF, v2, &v10, 0LL);
    }
    v3 = (struct _KTHREAD *)*((_QWORD *)v3 + 8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
