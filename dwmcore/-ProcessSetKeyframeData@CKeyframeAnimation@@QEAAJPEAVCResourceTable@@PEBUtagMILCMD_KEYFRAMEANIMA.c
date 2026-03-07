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
