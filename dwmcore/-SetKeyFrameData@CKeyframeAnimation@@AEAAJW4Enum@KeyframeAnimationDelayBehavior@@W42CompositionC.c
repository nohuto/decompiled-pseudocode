/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180055BE4
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x180236828 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x180044A88 (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800972E4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800E9F84 (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KeyframeSequence *v7; // rax
  KeyframeSequence *v8; // rdi
  KeyframeSequence **v9; // rax
  KeyframeSequence *v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // edi
  __int64 v15; // rsi
  float v16; // xmm6_4
  int v17; // ebp
  __int64 v18; // rcx
  KeyframeSequence *v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-48h]
  char v22; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v24; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003303421, 0x247u, 0LL);
    return v14;
  }
  *(_DWORD *)(a1 + 568) = a2;
  v7 = (KeyframeSequence *)DefaultHeap::AllocClear(0x90uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v8 = KeyframeSequence::KeyframeSequence(v7, *(_DWORD *)(a1 + 368));
  v9 = (KeyframeSequence **)(a1 + 392);
  if ( (char *)(a1 + 392) == &v22 )
  {
    if ( !v8 )
      goto LABEL_5;
    KeyframeSequence::RemoveAllKeyFrames(v8);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)v8 + 64);
    v20 = v8;
LABEL_19:
    operator delete(v20);
    goto LABEL_5;
  }
  v10 = *v9;
  *v9 = v8;
  if ( v10 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v10);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)v10 + 64);
    v20 = v10;
    goto LABEL_19;
  }
LABEL_5:
  v11 = CKeyframeAnimation::DetermineCoordinateSpace(*(unsigned int *)(a1 + 152), a3, &v24);
  v14 = v11;
  if ( v11 < 0 )
  {
    v21 = 596;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v21, 0LL);
    return v14;
  }
  v15 = 0LL;
  v16 = 0.0;
  if ( *(_DWORD *)(a1 + 368) )
  {
    v17 = v24;
    while ( 1 )
    {
      if ( (_DWORD)v15 )
      {
        v18 = (unsigned int)v15;
        v16 = fmaxf(v16 + 0.001, *(float *)(a4 + 48 * v15));
      }
      else
      {
        v16 = 0.0;
        v18 = 0LL;
      }
      v11 = CKeyframeAnimation::AddKeyframeData(a1, (unsigned int)v15, v13, a4 + 48 * v18, v17);
      v14 = v11;
      if ( v11 < 0 )
        break;
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 368) )
        goto LABEL_12;
    }
    v21 = 621;
    goto LABEL_22;
  }
LABEL_12:
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 532) = 0;
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 564) = 0;
  return v14;
}
