/*
 * XREFs of ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002FC4C
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002FA58 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800B1F80 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x18002FD2C (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002FD9C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002FE8C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B140 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveAnimationComponent(
        CTransitionVisualController *this,
        struct CVisual **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  bool v7; // bp
  struct CVisual *v8; // rdx
  struct CVisual *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v13; // eax
  struct CAnimationComponent *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = (struct CAnimationComponent *)a2;
  v4 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x90Cu);
  }
  else
  {
    v6 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v6,
        0x90Du);
    }
    else
    {
      v7 = (unsigned int)DynArray<CAnimationComponent *,0>::Remove((char *)this + 112, &v14) != 0;
      if ( !*((_DWORD *)this + 34) )
        *((_QWORD *)this + 12) = -1LL;
      v8 = a2[4];
      if ( v8
        && (v13 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8), v5 = v13, v13 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v13,
          0x919u);
      }
      else
      {
        v9 = a2[5];
        v10 = *((_QWORD *)v9 + 4);
        if ( v10 )
        {
          v11 = VisualCollection::Remove(
                  (VisualCollection *)(v10 + 32),
                  (struct CVisual *)(((unsigned __int64)v9 + 8) & -(__int64)(v9 != 0LL)));
          v5 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v11,
              0x91Fu);
        }
      }
      if ( v7 )
        CBaseObject::Release((CBaseObject *)a2);
    }
  }
  return v5;
}
