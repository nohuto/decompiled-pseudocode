/*
 * XREFs of ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0031F10
 * Callers:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0031E80 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D3750 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C015CC04 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0031FA0 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::EnumDevices(
        struct CInpPushLock **this,
        void *a2,
        unsigned __int8 (__fastcall *a3)(__int64, void *))
{
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v7, this[165]);
  for ( i = *(_QWORD *)this[166]; i && a3(i, a2); i = *(_QWORD *)(i + 56) )
    ;
  if ( !v8 )
  {
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
}
