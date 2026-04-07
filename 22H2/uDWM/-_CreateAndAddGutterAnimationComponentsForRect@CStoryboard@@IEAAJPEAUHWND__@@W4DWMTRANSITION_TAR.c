/*
 * XREFs of ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800B12FC
 * Callers:
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800B149C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18002F7CC (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800AAC6C (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
        CStoryboard *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int *a5,
        int *a6,
        CBaseObject *a7,
        CBaseObject *a8)
{
  CBaseObject *v8; // rbx
  CBaseObject *v10; // r14
  int GutterAnimationComponentsForRect; // eax
  unsigned int v12; // esi
  volatile signed __int32 *v13; // rdi
  int v14; // eax
  volatile signed __int32 *v15; // rbx
  int v16; // eax

  v8 = a7;
  if ( a7 )
    *(_QWORD *)a7 = 0LL;
  v10 = a8;
  if ( a8 )
    *(_QWORD *)a8 = 0LL;
  a7 = 0LL;
  a8 = 0LL;
  GutterAnimationComponentsForRect = CTransitionVisualController::CreateGutterAnimationComponentsForRect(
                                       *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                                       a2,
                                       a3,
                                       a4,
                                       a5,
                                       a6,
                                       (__int64)a1,
                                       (CBaseObject **)((unsigned __int64)&a7 & -(__int64)(v8 != 0LL)),
                                       (volatile signed __int32 **)((unsigned __int64)&a8 & -(__int64)(v10 != 0LL)));
  v12 = GutterAnimationComponentsForRect;
  if ( GutterAnimationComponentsForRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      GutterAnimationComponentsForRect,
      0x1594u);
LABEL_15:
    v13 = (volatile signed __int32 *)a7;
    goto LABEL_16;
  }
  v13 = (volatile signed __int32 *)a7;
  if ( !a7 )
  {
LABEL_11:
    v15 = (volatile signed __int32 *)a8;
    if ( !a8 )
      goto LABEL_17;
    v16 = CStoryboard::_AddAnimationComponent(a1, a8);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x159Eu);
      goto LABEL_17;
    }
    *(_QWORD *)v10 = v15;
    _InterlockedIncrement(v15 + 2);
    goto LABEL_15;
  }
  v14 = CStoryboard::_AddAnimationComponent(a1, a7);
  v12 = v14;
  if ( v14 >= 0 )
  {
    *(_QWORD *)v8 = v13;
    _InterlockedIncrement(v13 + 2);
    v13 = (volatile signed __int32 *)a7;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x1598u);
LABEL_16:
  v15 = (volatile signed __int32 *)a8;
LABEL_17:
  if ( v13 )
    CBaseObject::Release((CBaseObject *)v13);
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return v12;
}
