/*
 * XREFs of ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800355D0
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180035350 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800354A0 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180035CA0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1801EDBD0 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1801F2920 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1801F2F04 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SdL @ 0x1801F3A28 (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x1801F3C10 (WPP_SF_Sdq.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
        CImmersiveApp::CImmersiveWindowCollection *this,
        int a2,
        int a3)
{
  char v4; // di
  char v6; // al
  int v7; // r8d

  v4 = 1;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      *(_QWORD *)(*((_QWORD *)this + 20) + 592LL),
      *(_DWORD *)(*((_QWORD *)this + 20) + 600LL),
      *((_DWORD *)this + 53));
    if ( *((_QWORD *)this + 22) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 240LL))(**((_QWORD **)this + 21))
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 32LL))(**((_QWORD **)this + 21));
        WPP_SF_Sdq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          29,
          v7,
          *(_QWORD *)(*((_QWORD *)this + 20) + 592LL),
          *(_DWORD *)(*((_QWORD *)this + 20) + 600LL),
          v6);
      }
    }
  }
  if ( *((_DWORD *)this + 53)
    || !*((_QWORD *)this + 22)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 240LL))(**((_QWORD **)this + 21))
    || *(_DWORD *)(*((_QWORD *)this + 31) + 152LL) == 1 )
  {
    return 0;
  }
  return v4;
}
