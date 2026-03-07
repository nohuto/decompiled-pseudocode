__int64 __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int WeakReferenceBase; // ebx
  int v10; // r8d
  int v11; // r8d
  const unsigned __int16 *v12; // r13
  int v13; // eax
  __int64 v14; // r11
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdx
  struct DirectComposition::CResourceMarshaler *v17; // r12
  NSInstrumentation::CLeakTrackingAllocator *v18; // rcx
  void *v19; // rax
  int v21; // r8d
  int v22; // eax
  unsigned __int64 v23; // r15
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  unsigned __int16 *Quota; // rax
  int v26; // ecx
  unsigned __int64 v27; // rdx
  struct DirectComposition::CResourceMarshaler *v28; // rdx
  struct DirectComposition::CWeakReferenceBase **v29; // rdx
  struct DirectComposition::CWeakReferenceBase *v30; // r14
  size_t v31; // r8
  __int64 v32; // rcx
  void *v33; // rcx
  __int64 v34; // rcx
  struct DirectComposition::CWeakReferenceBase *v35; // rdx
  unsigned __int64 v36; // rdx
  struct DirectComposition::CResourceMarshaler *v37; // rdx
  __int64 v38; // xmm0_8
  __int32 v39; // r12d
  unsigned __int64 v40; // rdx
  struct DirectComposition::CResourceMarshaler *v41; // r13
  struct DirectComposition::CWeakReferenceBase *v42; // r15
  size_t v43; // r8
  __int64 v44; // rcx
  void *v45; // rcx
  struct DirectComposition::CWeakReferenceBase *v46; // [rsp+28h] [rbp-59h] BYREF
  struct DirectComposition::CWeakReferenceBase *v47; // [rsp+30h] [rbp-51h] BYREF
  struct DirectComposition::CWeakReferenceBase *v48; // [rsp+38h] [rbp-49h] BYREF
  struct DirectComposition::CWeakReferenceBase *v49; // [rsp+40h] [rbp-41h] BYREF
  __m128i Src; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-21h] BYREF
  struct DirectComposition::CWeakReferenceBase *v53; // [rsp+68h] [rbp-19h] BYREF
  __int32 v54; // [rsp+70h] [rbp-11h]
  __int32 v55; // [rsp+74h] [rbp-Dh]
  struct DirectComposition::CWeakReferenceBase *v56; // [rsp+78h] [rbp-9h] BYREF
  __int32 v57; // [rsp+80h] [rbp-1h]
  int v58; // [rsp+84h] [rbp+3h]
  _QWORD v59[2]; // [rsp+88h] [rbp+7h] BYREF
  __int32 v60; // [rsp+98h] [rbp+17h]
  int v61; // [rsp+9Ch] [rbp+1Bh]

  WeakReferenceBase = 0;
  if ( !a3 )
  {
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    v40 = (unsigned int)(a4->m128i_i32[0] - 1);
    if ( a4->m128i_i32[0] )
    {
      if ( v40 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v41 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)a2 + 11) * v40 + *((_QWORD *)a2 + 7));
        if ( v41 )
        {
          v49 = 0LL;
          WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v41, &v49);
          if ( WeakReferenceBase < 0
            || (WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                                      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 56),
                                      1uLL,
                                      0x6D6C4344u),
                WeakReferenceBase < 0) )
          {
            v42 = v49;
          }
          else
          {
            v42 = 0LL;
            v43 = *((_QWORD *)this + 11);
            v44 = *((_QWORD *)this + 10) - 1LL;
            v56 = v49;
            v58 = *((_DWORD *)v41 + 9);
            v45 = (void *)(*((_QWORD *)this + 7) + v43 * v44);
            v57 = a4->m128i_i32[1];
            memmove(v45, &v56, v43);
            *a6 = 1;
          }
          if ( v42 )
          {
            v35 = v42;
            goto LABEL_61;
          }
        }
      }
    }
    return (unsigned int)WeakReferenceBase;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    if ( a5 != 12 )
      return (unsigned int)-1073741811;
    v36 = (unsigned int)(a4->m128i_i32[0] - 1);
    if ( !a4->m128i_i32[0] )
      return (unsigned int)WeakReferenceBase;
    if ( v36 >= *((_QWORD *)a2 + 10) )
      return (unsigned int)WeakReferenceBase;
    v37 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)a2 + 11) * v36 + *((_QWORD *)a2 + 7));
    if ( !v37 )
      return (unsigned int)WeakReferenceBase;
    v38 = a4->m128i_i64[0];
    v39 = a4->m128i_i32[2];
    v48 = 0LL;
    Src.m128i_i64[0] = v38;
    WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v37, &v48);
    if ( WeakReferenceBase < 0
      || (WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                                (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 104),
                                1uLL,
                                0x6D6C4344u),
          WeakReferenceBase < 0) )
    {
      v30 = v48;
      goto LABEL_36;
    }
    v29 = &v53;
    v30 = 0LL;
    v31 = *((_QWORD *)this + 17);
    v34 = v31 * (*((_QWORD *)this + 16) - 1LL);
    v53 = v48;
    v33 = (void *)(*((_QWORD *)this + 13) + v34);
    v55 = v39;
    v54 = Src.m128i_i32[1];
    goto LABEL_33;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v21 = v11 - 1;
    if ( !v21 )
    {
      if ( a5 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        v51 = 0LL;
        v22 = StringCchLengthW((const unsigned __int16 *)a4, a5 >> 1, &v51);
        v23 = v51 + 1;
        if ( v22 < 0 || a5 != 2 * v23 )
          return (unsigned int)-1073741811;
        DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
        Quota = (unsigned __int16 *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                      v24,
                                      0x104uLL,
                                      a5,
                                      0x6D6C4344u);
        *((_QWORD *)this + 31) = Quota;
        if ( !Quota )
          return (unsigned int)-1073741801;
        if ( StringCchCopyW(Quota, v23, (const unsigned __int16 *)a4) < 0 )
          return (unsigned int)-1073741811;
      }
      else
      {
        if ( a4 )
          return (unsigned int)-1073741811;
        DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
      }
      *a6 = 1;
      *((_BYTE *)this + 256) |= 1u;
      return (unsigned int)WeakReferenceBase;
    }
    if ( v21 != 2 )
      return (unsigned int)-1073741811;
    if ( a5 != 16 )
      return (unsigned int)-1073741811;
    v26 = _mm_cvtsi128_si32(*a4);
    Src = *a4;
    v27 = (unsigned int)(v26 - 1);
    if ( !v26 )
      return (unsigned int)-1073741811;
    if ( v27 >= *((_QWORD *)a2 + 10) )
      return (unsigned int)-1073741811;
    v28 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)a2 + 11) * v27 + *((_QWORD *)a2 + 7));
    if ( !v28 )
      return (unsigned int)-1073741811;
    v46 = 0LL;
    WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v28, &v46);
    if ( WeakReferenceBase < 0
      || (WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                                (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 152),
                                1uLL,
                                0x6D6C4344u),
          WeakReferenceBase < 0) )
    {
      v30 = v46;
      goto LABEL_36;
    }
    v29 = (struct DirectComposition::CWeakReferenceBase **)v59;
    v30 = 0LL;
    v31 = *((_QWORD *)this + 23);
    v32 = *((_QWORD *)this + 22) - 1LL;
    v59[0] = v46;
    v59[1] = *(__int64 *)((char *)Src.m128i_i64 + 4);
    v33 = (void *)(*((_QWORD *)this + 19) + v31 * v32);
    v61 = 0;
    v60 = Src.m128i_i32[3];
LABEL_33:
    memmove(v33, v29, v31);
    *a6 = 1;
LABEL_36:
    if ( !v30 )
      return (unsigned int)WeakReferenceBase;
    v35 = v30;
    goto LABEL_61;
  }
  if ( a5 <= 4 )
    return (unsigned int)-1073741811;
  v12 = &a4->m128i_u16[2];
  v52 = 0LL;
  v13 = StringCchLengthW(&a4->m128i_u16[2], (a5 - 4) >> 1, &v52);
  v15 = v52 + 1;
  if ( v13 < 0 || v14 != 2 * v15 + 4 )
    return (unsigned int)-1073741811;
  v16 = (unsigned int)(a4->m128i_i32[0] - 1);
  if ( a4->m128i_i32[0] )
  {
    if ( v16 < *((_QWORD *)a2 + 10) )
    {
      v17 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)a2 + 11) * v16 + *((_QWORD *)a2 + 7));
      if ( v17 )
      {
        WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                              (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 200),
                              1uLL,
                              0x6D6C4344u);
        if ( WeakReferenceBase >= 0 )
        {
          v47 = 0LL;
          WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v17, &v47);
          if ( WeakReferenceBase >= 0 )
          {
            v19 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v18, 0x104uLL, 2 * v15 + 16, 0x6D6C4344u);
            Src.m128i_i64[0] = (__int64)v19;
            if ( v19 )
            {
              *(_QWORD *)v19 = v47;
              *((_QWORD *)v19 + 1) = v15;
              if ( StringCchCopyW((unsigned __int16 *)v19 + 8, v15, v12) >= 0 )
              {
                memmove(
                  (void *)(*((_QWORD *)this + 25) + *((_QWORD *)this + 29) * (*((_QWORD *)this + 28) - 1LL)),
                  &Src,
                  *((_QWORD *)this + 29));
                *a6 = 1;
                return (unsigned int)WeakReferenceBase;
              }
              return (unsigned int)-1073741811;
            }
            WeakReferenceBase = -1073741801;
          }
          v35 = v47;
          if ( !v47 )
            return (unsigned int)WeakReferenceBase;
LABEL_61:
          DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v35);
        }
      }
    }
  }
  return (unsigned int)WeakReferenceBase;
}
