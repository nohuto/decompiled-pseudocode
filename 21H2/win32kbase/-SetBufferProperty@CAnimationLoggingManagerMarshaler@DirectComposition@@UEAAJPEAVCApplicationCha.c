/*
 * XREFs of ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C022A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C000AC6C (-ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000B2B0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C000B5A0 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0016048 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0075F50 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DirectComposition::Memory::Allocate @ 0x1C0085484 (DirectComposition--Memory--Allocate.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C009BA0C (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

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
  int v12; // r8d
  int v13; // ecx
  unsigned __int64 v14; // rdx
  struct DirectComposition::CResourceMarshaler *v15; // rdx
  struct DirectComposition::CWeakReferenceBase **v16; // rdx
  size_t v17; // r8
  __int64 v18; // rcx
  void *v19; // rcx
  struct DirectComposition::CWeakReferenceBase *v20; // r14
  struct DirectComposition::CWeakReferenceBase *v21; // rdx
  int v22; // eax
  __int64 v23; // r15
  char *v24; // rax
  char *v25; // r13
  int v26; // eax
  __int64 v27; // r11
  __int64 v28; // r15
  unsigned __int64 v29; // rdx
  struct DirectComposition::CResourceMarshaler *v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  struct DirectComposition::CResourceMarshaler *v33; // rdx
  __int32 v34; // r12d
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  struct DirectComposition::CResourceMarshaler *v37; // r12
  struct DirectComposition::CWeakReferenceBase *v38; // r15
  int v39; // eax
  size_t v40; // r8
  __int64 v41; // rcx
  void *v42; // rcx
  struct DirectComposition::CWeakReferenceBase *v44; // [rsp+28h] [rbp-59h] BYREF
  struct DirectComposition::CWeakReferenceBase *v45; // [rsp+30h] [rbp-51h] BYREF
  struct DirectComposition::CWeakReferenceBase *v46; // [rsp+38h] [rbp-49h] BYREF
  struct DirectComposition::CWeakReferenceBase *v47; // [rsp+40h] [rbp-41h] BYREF
  __m128i v48; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-21h] BYREF
  struct DirectComposition::CWeakReferenceBase *v51; // [rsp+68h] [rbp-19h] BYREF
  __int32 v52; // [rsp+70h] [rbp-11h]
  __int32 v53; // [rsp+74h] [rbp-Dh]
  struct DirectComposition::CWeakReferenceBase *v54; // [rsp+78h] [rbp-9h] BYREF
  __int32 v55; // [rsp+80h] [rbp-1h]
  int v56; // [rsp+84h] [rbp+3h]
  _QWORD Src[2]; // [rsp+88h] [rbp+7h] BYREF
  __int32 v58; // [rsp+98h] [rbp+17h]
  int v59; // [rsp+9Ch] [rbp+1Bh]

  WeakReferenceBase = 0;
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        if ( a5 <= 4 )
          return (unsigned int)-1073741811;
        v50 = 0LL;
        v25 = &a4->m128i_i8[4];
        v26 = StringCchLengthW(&a4->m128i_u16[2], (a5 - 4) >> 1, &v50);
        v28 = v50 + 1;
        if ( v26 < 0 || v27 != 2 * v28 + 4 )
          return (unsigned int)-1073741811;
        v29 = (unsigned int)(a4->m128i_i32[0] - 1);
        if ( !a4->m128i_i32[0] )
          return (unsigned int)WeakReferenceBase;
        if ( v29 >= *((_QWORD *)a2 + 10) )
          return (unsigned int)WeakReferenceBase;
        v30 = *(struct DirectComposition::CResourceMarshaler **)(v29 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
        if ( !v30 )
          return (unsigned int)WeakReferenceBase;
        WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                              (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 208),
                              1LL,
                              0x6D6C4344u);
        if ( WeakReferenceBase < 0 )
          return (unsigned int)WeakReferenceBase;
        v45 = 0LL;
        WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v30, &v45);
        if ( WeakReferenceBase >= 0 )
        {
          v31 = DirectComposition::Memory::Allocate((NSInstrumentation::CLeakTrackingAllocator *)(2 * v28 + 16));
          v48.m128i_i64[0] = v31;
          if ( v31 )
          {
            *(_QWORD *)v31 = v45;
            *(_QWORD *)(v31 + 8) = v28;
            if ( (int)StringCchCopyW((char *)(v31 + 16), v28, v25) >= 0 )
            {
              memmove(
                (void *)(*((_QWORD *)this + 26) + *((_QWORD *)this + 30) * (*((_QWORD *)this + 29) - 1LL)),
                &v48,
                *((_QWORD *)this + 30));
              *a6 = 1;
              return (unsigned int)WeakReferenceBase;
            }
            return (unsigned int)-1073741811;
          }
          WeakReferenceBase = -1073741801;
        }
        v21 = v45;
        if ( v45 )
          goto LABEL_60;
        return (unsigned int)WeakReferenceBase;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        if ( a5 )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          v49 = 0LL;
          v22 = StringCchLengthW((const unsigned __int16 *)a4, a5 >> 1, &v49);
          v23 = v49 + 1;
          if ( v22 < 0 || a5 != 2 * v23 )
            return (unsigned int)-1073741811;
          DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
          v24 = (char *)DirectComposition::Memory::Allocate((NSInstrumentation::CLeakTrackingAllocator *)a5);
          *((_QWORD *)this + 32) = v24;
          if ( !v24 )
            return (unsigned int)-1073741801;
          if ( (int)StringCchCopyW(v24, v23, a4->m128i_i8) < 0 )
            return (unsigned int)-1073741811;
        }
        else
        {
          if ( a4 )
            return (unsigned int)-1073741811;
          DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
        }
        *a6 = 1;
        *((_BYTE *)this + 264) |= 1u;
        return (unsigned int)WeakReferenceBase;
      }
      if ( v12 == 2 && a5 == 16 )
      {
        v13 = _mm_cvtsi128_si32(*a4);
        v48 = *a4;
        v14 = (unsigned int)(v13 - 1);
        if ( v13 )
        {
          if ( v14 < *((_QWORD *)a2 + 10) )
          {
            v15 = *(struct DirectComposition::CResourceMarshaler **)(v14 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
            if ( v15 )
            {
              v44 = 0LL;
              WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v15, &v44);
              if ( WeakReferenceBase >= 0 )
              {
                WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                                      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 160),
                                      1LL,
                                      0x6D6C4344u);
                if ( WeakReferenceBase >= 0 )
                {
                  v16 = (struct DirectComposition::CWeakReferenceBase **)Src;
                  v17 = *((_QWORD *)this + 24);
                  v18 = *((_QWORD *)this + 23) - 1LL;
                  Src[0] = v44;
                  Src[1] = *(__int64 *)((char *)v48.m128i_i64 + 4);
                  v19 = (void *)(*((_QWORD *)this + 20) + v17 * v18);
                  v59 = 0;
                  v58 = v48.m128i_i32[3];
LABEL_13:
                  v20 = 0LL;
                  memmove(v19, v16, v17);
                  *a6 = 1;
                  goto LABEL_15;
                }
              }
              v20 = v44;
              goto LABEL_15;
            }
          }
        }
      }
    }
    else if ( a5 == 12 )
    {
      v32 = (unsigned int)(a4->m128i_i32[0] - 1);
      if ( !a4->m128i_i32[0] )
        return (unsigned int)WeakReferenceBase;
      if ( v32 >= *((_QWORD *)a2 + 10) )
        return (unsigned int)WeakReferenceBase;
      v33 = *(struct DirectComposition::CResourceMarshaler **)(v32 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      if ( !v33 )
        return (unsigned int)WeakReferenceBase;
      v34 = a4->m128i_i32[2];
      v48.m128i_i64[0] = a4->m128i_i64[0];
      v46 = 0LL;
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v33, &v46);
      if ( WeakReferenceBase >= 0 )
      {
        WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                              (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 112),
                              1LL,
                              0x6D6C4344u);
        if ( WeakReferenceBase >= 0 )
        {
          v16 = &v51;
          v17 = *((_QWORD *)this + 18);
          v35 = v17 * (*((_QWORD *)this + 17) - 1LL);
          v51 = v46;
          v19 = (void *)(*((_QWORD *)this + 14) + v35);
          v53 = v34;
          v52 = v48.m128i_i32[1];
          goto LABEL_13;
        }
      }
      v20 = v46;
LABEL_15:
      if ( v20 )
      {
        v21 = v20;
LABEL_60:
        DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v21);
        return (unsigned int)WeakReferenceBase;
      }
      return (unsigned int)WeakReferenceBase;
    }
    return (unsigned int)-1073741811;
  }
  if ( a5 != 8 )
    return (unsigned int)-1073741811;
  v36 = (unsigned int)(a4->m128i_i32[0] - 1);
  if ( a4->m128i_i32[0] )
  {
    if ( v36 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v37 = *(struct DirectComposition::CResourceMarshaler **)(v36 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      if ( v37 )
      {
        v47 = 0LL;
        WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v37, &v47);
        if ( WeakReferenceBase < 0
          || (WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                                    (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 64),
                                    1LL,
                                    0x6D6C4344u),
              WeakReferenceBase < 0) )
        {
          v38 = v47;
        }
        else
        {
          v54 = v47;
          v38 = 0LL;
          v39 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v37 + 8LL))(v37);
          v40 = *((_QWORD *)this + 12);
          v41 = v40 * (*((_QWORD *)this + 11) - 1LL);
          v56 = v39;
          v42 = (void *)(*((_QWORD *)this + 8) + v41);
          v55 = a4->m128i_i32[1];
          memmove(v42, &v54, v40);
          *a6 = 1;
        }
        if ( v38 )
        {
          v21 = v38;
          goto LABEL_60;
        }
      }
    }
  }
  return (unsigned int)WeakReferenceBase;
}
