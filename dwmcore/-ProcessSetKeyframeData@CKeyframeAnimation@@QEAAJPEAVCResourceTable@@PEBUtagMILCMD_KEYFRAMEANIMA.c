/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180055BE4 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800972E4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x180097DFC (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800981C8 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800981F0 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009B288 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x1800BC9C4 (--$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800E0CF8 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800FD5BC (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  CKeyframeAnimation *v5; // rdi
  __int64 v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rbx
  CSharedSectionBase **v9; // r14
  CResource *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  void *v14; // rbp
  bool v15; // bp
  int CacheSizeForType; // eax
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // rax
  int v21; // r9d
  KeyframeSequence *v22; // rsi
  unsigned int v23; // [rsp+20h] [rbp-28h]

  v5 = (CKeyframeAnimation *)this;
  if ( *(_QWORD *)(this + 392) || *(_QWORD *)(this + 448) )
  {
    v23 = 236;
    goto LABEL_40;
  }
  v6 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v6 )
  {
    v23 = 242;
    goto LABEL_40;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*(unsigned int *)(this + 152));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v23 = 249;
LABEL_40:
      v21 = -2003303421;
      goto LABEL_41;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v23 = 255;
    goto LABEL_40;
  }
  this = 48LL * *((unsigned int *)a3 + 2);
  if ( *((unsigned int *)a3 + 5) < this )
  {
    v23 = 261;
    goto LABEL_40;
  }
  Resource = CResourceTable::GetResource(a2, v6, 169LL);
  v8 = Resource;
  if ( !Resource )
  {
    v23 = 268;
    goto LABEL_40;
  }
  v9 = (CSharedSectionBase **)((char *)v5 + 352);
  v10 = (CResource *)*((_QWORD *)v5 + 44);
  if ( v10 )
  {
    CResource::InternalRelease(v10);
    Resource = v8;
  }
  *v9 = (CSharedSectionBase *)Resource;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
  v11 = *((unsigned int *)a3 + 11);
  if ( (_DWORD)v11 )
  {
    v20 = CResourceTable::GetResource(a2, v11, 2LL);
    if ( !v20 || *((_DWORD *)a3 + 8) != 4 )
    {
      v23 = 282;
      goto LABEL_40;
    }
    *((_QWORD *)v5 + 56) = v20;
  }
  *((_DWORD *)v5 + 90) = *((_DWORD *)a3 + 5);
  *((_DWORD *)v5 + 91) = *((_DWORD *)a3 + 4);
  *((_DWORD *)v5 + 92) = *((_DWORD *)a3 + 2);
  v12 = CBaseExpression::SetChannelHandle(v5, *((_DWORD *)a2 + 12));
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( *((_DWORD *)a3 + 13) )
    {
      v18 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 12), 169LL);
      ReplaceInterface<CSharedSection,CSharedSection>((char *)v5 + 376, v18);
      v19 = CSharedSectionBase::ResolveAllocation(
              *((CSharedSectionBase **)v5 + 47),
              *((unsigned int *)a3 + 14),
              *((unsigned int *)a3 + 13));
      *((_QWORD *)v5 + 48) = v19;
      if ( !v19 )
      {
        v21 = -2147024882;
        v23 = 302;
        goto LABEL_41;
      }
      if ( *((_DWORD *)a3 + 15) )
        memset_0(v19, 0, *((unsigned int *)a3 + 13));
    }
    v14 = CSharedSectionBase::ResolveAllocation(*v9, *((unsigned int *)v5 + 91), *((unsigned int *)v5 + 90));
    if ( v14 )
    {
      v12 = CKeyframeAnimation::SetIterationInfo(
              (__int64)v5,
              *((float *)a3 + 7),
              *((_DWORD *)a3 + 8),
              *((float *)a3 + 6),
              *((_DWORD *)a3 + 9));
      v13 = v12;
      if ( v12 < 0 )
      {
        v23 = 318;
      }
      else
      {
        v15 = (int)CKeyframeAnimation::SetKeyFrameData(
                     (__int64)v5,
                     *((_DWORD *)a3 + 16),
                     *((_DWORD *)a3 + 10),
                     (__int64)v14) >= 0;
        *((_BYTE *)v5 + 581) ^= (*((_BYTE *)v5 + 581) ^ (16 * *((_BYTE *)a3 + 68))) & 0x10;
        if ( (*((_BYTE *)v5 + 232) & 0x10) != 0
          || !v15
          || (v12 = CBaseExpression::TryRegisterWithExpressionManager(v5), v13 = v12, v12 >= 0) )
        {
          v13 = 0;
          if ( v15 )
            return v13;
          goto LABEL_43;
        }
        v23 = 329;
      }
      goto LABEL_37;
    }
    v21 = -2147024882;
    v23 = 311;
LABEL_41:
    v13 = v21;
    goto LABEL_42;
  }
  v23 = 291;
LABEL_37:
  v21 = v12;
LABEL_42:
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v21, v23, 0LL);
LABEL_43:
  v22 = (KeyframeSequence *)*((_QWORD *)v5 + 49);
  *((_QWORD *)v5 + 49) = 0LL;
  if ( v22 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v22);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)v22 + 64);
    operator delete(v22);
  }
  ReleaseInterface<CSharedSection>((char *)v5 + 352);
  return v13;
}
