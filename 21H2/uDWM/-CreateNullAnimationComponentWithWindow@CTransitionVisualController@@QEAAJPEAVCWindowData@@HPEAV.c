/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180007F30
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x180007E94 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C9DC (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002CDC4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800305DC (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800306CC (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x1800349DC (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  struct CAnimatedTransitionVisual *v6; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rsi
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  struct CAnimatedTransitionVisual *v19; // rcx
  struct CTopLevelWindow *v20; // rcx
  struct CAnimationComponent **v21; // rax
  struct CAnimatedTransitionVisual *v22; // rcx
  struct CAnimatedTransitionVisual *v24; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0LL;
  v24 = 0LL;
  v11 = 4095;
  if ( a2 )
    v11 = *((_DWORD *)a2 + 154) & 0x400000 | 0xFFF;
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v12 )
  {
    if ( a2 )
      v13 = *((_QWORD *)a2 + 5);
    else
      v13 = 0LL;
    v14 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v12, v13, v11, a3, a4);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v15 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v15,
        0x6B1u);
    }
    else
    {
      v17 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v16 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v17,
          0x6B2u);
      }
      else
      {
        v18 = CAnimatedTransitionVisual::Create(&v24);
        v16 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v18,
            0x6B4u);
        }
        else
        {
          v19 = v24;
          *((_DWORD *)v24 + 182) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v19 + 183) = a3;
          if ( a5 )
          {
            if ( a2 )
            {
              v20 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 48);
              if ( v20 )
                CTransitionVisualController::_MoveWindowOffscreen(v20, 1);
            }
          }
          v21 = a6;
          *a6 = (struct CAnimationComponent *)v14;
          _InterlockedIncrement(v14 + 2);
          v22 = v24;
          *((_QWORD *)*v21 + 5) = v24;
          _InterlockedIncrement((volatile signed __int32 *)v22 + 4);
        }
        v6 = v24;
      }
    }
    CBaseObject::Release((CBaseObject *)v14);
    if ( v6 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v6 + 8));
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x6AFu);
  }
  return v16;
}
