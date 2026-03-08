/*
 * XREFs of ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x180235070
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180233C0C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x18023434C (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802345E8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::ProcessSetTrackerBindingMode(
        CInteractionTrackerBindingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE *a3)
{
  unsigned int v5; // edx
  _QWORD *Resource; // rsi
  __int64 v8; // rax
  int v9; // ebp
  CInteractionTracker *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || !*((_DWORD *)a3 + 3) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      84LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x88980403LL,
      v14);
  Resource = (_QWORD *)CResourceTable::GetResource((__int64)a2, v5, 0x5Au);
  v8 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x5Au);
  v9 = *((_DWORD *)a3 + 4);
  v10 = (CInteractionTracker *)v8;
  if ( !Resource || !v8 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      59LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x88980403LL,
      v14);
  if ( (CInteractionTrackerBindingManager *)Resource[80] != this )
  {
    if ( this )
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)this + 8LL))(this);
    v11 = Resource[80];
    Resource[80] = this;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( *((CInteractionTrackerBindingManager **)v10 + 80) != this )
  {
    if ( this )
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)this + 8LL))(this);
    v12 = *((_QWORD *)v10 + 80);
    *((_QWORD *)v10 + 80) = this;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  CInteractionTrackerBindingManager::BringBoundTrackersStateInSync((int)this, (__int64)Resource, v10, v9);
  CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
    (int)this,
    (__int64)Resource,
    (int)v10,
    v9);
  CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(this, Resource, v10, v9);
  return 0LL;
}
