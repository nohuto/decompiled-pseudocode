/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180031D34
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180031CB0 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800339A0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180085D38 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800AB4E0 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180007384 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18000A584 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BDB4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180018414 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002CDC4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180035CA0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180036584 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B5D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180042998 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1800852C8 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18008EEA0 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800AB76C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  int v2; // eax
  __int64 v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  struct CVisual *v9; // rdx
  CBaseObject *v10; // rcx
  __int64 v11; // rdi
  CBaseObject ***v12; // rdi
  CBaseObject **v13; // rax
  struct CTopLevelWindow *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CAnimationEngine *v17; // rax
  __int64 v18; // rcx
  CAnimationEngine *v19; // rdi
  _QWORD *v20; // rdi
  unsigned int v21; // ebp
  __int64 v22; // rsi
  CBaseObject *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  struct CVisual *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rdx
  struct CWindowData *v35; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v17 = CDesktopManager::AcquireAnimationEngine();
    v19 = v17;
    if ( v17 )
    {
      CAnimationEngine::ScheduleStopAnimation(v17, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v19);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v18, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
  }
  v2 = *((_DWORD *)this + 44);
  if ( v2 )
  {
    v20 = (_QWORD *)((char *)this + 152);
    do
    {
      v21 = v2 - 1;
      v22 = 56LL * (unsigned int)(v2 - 1);
      v23 = *(CBaseObject **)(v22 + *v20 + 48);
      if ( v23 )
      {
        CBaseObject::Release(v23);
        *(_QWORD *)(v22 + *v20 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v21);
      v2 = *((_DWORD *)this + 44);
    }
    while ( v2 );
  }
  while ( *((_DWORD *)this + 20) )
    CTransitionVisualController::DiscardStoredSnapshot(this, **((HWND **)this + 7));
  if ( *((_DWORD *)this + 12) )
  {
    v12 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v13 = *v12;
      v14 = **v12;
      if ( v14 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v14, 0);
        v13 = *v12;
        v15 = **v12;
        if ( v15 )
        {
          CBaseObject::Release(v15);
          v13 = *v12;
        }
      }
      v16 = v13[1];
      if ( v16 )
        CBaseObject::Release(v16);
      DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, 0LL);
    }
    while ( *((_DWORD *)this + 12) );
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    v9 = (struct CVisual *)*((_QWORD *)this + 2);
    if ( v9 )
    {
      if ( *((_DWORD *)this + 34) )
      {
        do
        {
          v24 = *((_QWORD *)this + 14);
          v25 = *((_DWORD *)this + 34) - 1;
          v35 = 0LL;
          v26 = *(_QWORD *)(v24 + 8LL * v25);
          if ( (int)CWindowList::GetSyncedWindowDataByHwnd(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(HWND *)(v26 + 16),
                      &v35) >= 0
            && v35 )
          {
            CTransitionVisualController::RestoreWindow(this, v35, 1);
          }
          v27 = *(struct CVisual **)(v26 + 32);
          if ( v27 )
          {
            v28 = *((_QWORD *)v27 + 3);
            if ( v28 )
              VisualCollection::Remove((VisualCollection *)(v28 + 32), v27);
          }
          v29 = *(_QWORD *)(v26 + 40);
          if ( v29 )
            VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), (struct CVisual *)(v29 + 8));
          CBaseObject::Release((CBaseObject *)v26);
          v30 = *((_DWORD *)this + 34);
          v31 = v30 - 1;
          if ( (unsigned int)v31 < v30 )
          {
            v32 = *((_QWORD *)this + 14);
            while ( (unsigned int)v31 < v30 - 1 )
            {
              *(_QWORD *)(v32 + 8 * v31) = *(_QWORD *)(v32 + 8LL * (unsigned int)(v31 + 1));
              v31 = (unsigned int)(v31 + 1);
              v30 = *((_DWORD *)this + 34);
            }
            *((_DWORD *)this + 34) = v30 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
          }
        }
        while ( *((_DWORD *)this + 34) );
        v9 = (struct CVisual *)*((_QWORD *)this + 2);
        v3 = *((_QWORD *)this + 1);
      }
      VisualCollection::Remove((VisualCollection *)(v3 + 32), v9);
      v10 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v10 )
      {
        CBaseObject::Release(v10);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v11 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v11 >= 0 )
    {
      v33 = 24LL * (int)v11;
      do
      {
        v34 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v34 + v33 + 16) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(
            this,
            (struct CTransitionVisualController::TlwPair *)(v34 + 24 * v11));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, (unsigned int)v11);
        }
        v33 -= 24LL;
        v11 = (unsigned int)(v11 - 1);
      }
      while ( (int)v11 >= 0 );
    }
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    VisualCollection::Remove(
      (VisualCollection *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 32LL),
      *((struct CVisual **)this + 1));
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 18) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
