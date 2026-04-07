/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002F86C
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18002F7CC (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18002F9B8 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002FD9C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002FE8C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int inserted; // eax
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  struct CAnimationComponent *v7; // rcx
  struct CVisual *v8; // rdx
  int v10; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v13; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2280;
LABEL_19:
    v11 = inserted;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v11,
      v12);
    return (unsigned int)v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2281;
    goto LABEL_19;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_21;
  }
  if ( v6 <= *((_DWORD *)this + 33) )
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v5) = v13;
    *((_DWORD *)this + 34) = v6;
    goto LABEL_6;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8u, 1, &v13);
  v4 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
  if ( v4 < 0 )
  {
LABEL_21:
    v12 = 2283;
    v11 = v4;
    goto LABEL_22;
  }
LABEL_6:
  _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
  v7 = v13;
  v8 = (struct CVisual *)*((_QWORD *)v13 + 4);
  if ( v8 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8, 0LL, 0, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v12 = 2288;
      goto LABEL_19;
    }
    v7 = v13;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               (struct CVisual *)((*((_QWORD *)v7 + 5) + 8LL) & -(__int64)(*((_QWORD *)v7 + 5) != 0LL)),
               0LL,
               0,
               1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2292;
    goto LABEL_19;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v13 + 16) + 72LL),
              *((_DWORD *)v13 + 7),
              &v14) >= 0 )
    *(float *)(*((_QWORD *)v13 + 5) + 928LL) = v14;
  return (unsigned int)v4;
}
