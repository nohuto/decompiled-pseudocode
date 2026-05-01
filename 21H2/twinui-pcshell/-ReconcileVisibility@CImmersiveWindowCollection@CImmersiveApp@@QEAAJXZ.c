/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800354A0
 * Callers:
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180035830 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180036660 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x1801EB050 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1801EDC34 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::Invoke @ 0x1801EE6C0 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--Invoke.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801F137C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801F1658 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1801F27D8 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180031474 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180034928 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800355D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180035650 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800365E4 (-IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0001@@W4GHOST_STATUS@@@Z @ 0x18009919C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1801EFCE0 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char *v2; // rax
  char *v3; // rdx
  char *v4; // rcx
  unsigned int v5; // edi
  unsigned __int64 i; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( !*((_QWORD *)this + 22) )
    return 0LL;
  v2 = (char *)this + 216;
  v3 = (char *)this + 248;
  v4 = v2;
  if ( v2 != v3 )
  {
    while ( !*v4 )
    {
      v4 += 8;
      if ( v4 == v3 )
        goto LABEL_5;
    }
    v5 = 2;
    do
    {
      if ( *v2 )
      {
        if ( !*((_DWORD *)v2 + 1) )
          goto LABEL_13;
        if ( *((_DWORD *)v2 + 1) == 1 )
          v5 = 1;
      }
      v2 += 8;
    }
    while ( v2 != v3 );
LABEL_14:
    if ( v5 != 2 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19)) )
        CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)this, 16);
      else
        CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(this, 0LL, 16LL);
      if ( CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
        return 0LL;
      }
    }
    goto LABEL_7;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 200) )
  {
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  v5 = 2;
LABEL_7:
  (*(void (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)this + 21) + 224LL))(**((_QWORD **)this + 21), v5);
  for ( i = 1LL; i < *((_QWORD *)this + 22); ++i )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 216LL))(v8);
    v10 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 224LL))(v10, v9 != 0 ? v5 : 0);
  }
  if ( v5 == 2 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19)) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(this, 16LL);
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
    }
  }
  return 0LL;
}
