__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  unsigned int v9; // edi
  struct CPayloadedAnimationPrimitiveBuffer *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 != a5 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xFCu, 0LL);
    goto LABEL_16;
  }
  v9 = 0;
  if ( a4 && v5 )
  {
    v10 = (struct CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)this + 16);
    if ( !v10 )
    {
      v11 = CPayloadedAnimationPrimitiveBuffer::Create(&v17);
      v9 = v11;
      if ( v11 < 0 )
      {
        v16 = 261;
LABEL_15:
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v16, 0LL);
        goto LABEL_16;
      }
      v10 = v17;
      *((_QWORD *)this + 16) = v17;
    }
    v11 = (*(__int64 (__fastcall **)(struct CPayloadedAnimationPrimitiveBuffer *, unsigned __int64, const void *))(*(_QWORD *)v10 + 48LL))(
            v10,
            (unsigned __int64)*((unsigned int *)a3 + 2) >> 5,
            a4);
    v9 = v11;
    if ( v11 < 0 )
    {
      v16 = 265;
    }
    else
    {
      v13 = *((_QWORD *)this + 18);
      if ( v13 && !*(_QWORD *)(v13 + 96) )
        goto LABEL_16;
      v11 = CBaseAnimation::RegisterAnimateResource(this);
      v9 = v11;
      if ( v11 >= 0 )
        goto LABEL_16;
      v16 = 271;
    }
    goto LABEL_15;
  }
LABEL_16:
  v14 = *((_QWORD *)this + 16);
  if ( v14 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14) )
    ReleaseInterface<CAnimationPrimitiveBuffer>((__int64 *)this + 16);
  return v9;
}
