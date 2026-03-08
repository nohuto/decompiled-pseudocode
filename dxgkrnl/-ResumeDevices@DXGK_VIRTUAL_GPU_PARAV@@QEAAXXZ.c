/*
 * XREFs of ?ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1C036AE58
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C036B3C0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::ResumeDevices(DXGK_VIRTUAL_GPU_PARAV *this)
{
  volatile signed __int32 *v1; // rdi
  __int64 **v2; // rsi
  __int64 *i; // rbx
  __int64 v4; // r8

  v1 = (volatile signed __int32 *)((char *)this + 288);
  v2 = (__int64 **)((char *)this + 320);
  DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 39));
    if ( *((_DWORD *)i + 122) == 1 && !*((_BYTE *)i - 48) )
    {
      LOBYTE(v4) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(i - 13) + 760) + 8LL) + 1112LL))(
        i[84],
        0LL,
        v4);
    }
    i[40] = 0LL;
    ExReleasePushLockExclusiveEx(i + 39, 0LL);
    KeLeaveCriticalRegion();
  }
  _InterlockedDecrement(v1 + 4);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
