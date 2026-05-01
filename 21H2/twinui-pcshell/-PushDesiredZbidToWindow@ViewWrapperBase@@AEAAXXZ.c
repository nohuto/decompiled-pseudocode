/*
 * XREFs of ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x1803401A0
 * Callers:
 *     ?SetWindowBand@ViewWrapperBase@@UEAAJK@Z @ 0x180341760 (-SetWindowBand@ViewWrapperBase@@UEAAJK@Z.c)
 *     ?SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x1803417E0 (-SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180342980 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredZbidToWindow(ViewWrapperBase *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 34);
  if ( v1 )
  {
    if ( *((_DWORD *)this + 54) )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 448LL) + 32LL))(
        *(_QWORD *)(*((_QWORD *)this + 21) + 448LL),
        v1,
        0LL);
  }
}
