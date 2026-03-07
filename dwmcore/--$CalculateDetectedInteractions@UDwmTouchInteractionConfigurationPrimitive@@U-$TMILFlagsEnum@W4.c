__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // ebx
  unsigned int *v8; // r15
  __int64 v10; // r12
  char *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  bool v16; // r14
  __int64 *v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // r14
  int v22; // eax
  bool v23; // r15
  int v24; // ecx
  int v25; // r8d
  int *v26; // r9
  __int64 v28; // rax
  unsigned int v29; // edx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  int *v35; // rax
  bool v36; // cl
  int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // r13d
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // r12
  bool v47; // cc
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // edx
  int v53; // eax
  __int64 v54; // rcx
  char v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h]
  unsigned int v58; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v59; // [rsp+8Ch] [rbp-74h] BYREF
  int v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h]
  __int128 v62; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B8h] [rbp-48h]
  __int128 v65; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v66; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v67[16]; // [rsp+E0h] [rbp-20h] BYREF
  float v68; // [rsp+F0h] [rbp-10h]
  int v69; // [rsp+F4h] [rbp-Ch]
  int v70; // [rsp+120h] [rbp+20h] BYREF
  char v71; // [rsp+124h] [rbp+24h]

  v7 = 0;
  v8 = a5;
  v61 = a6;
  v10 = a4;
  v12 = a2;
  *a5 = 0;
  v63 = a4;
  *a7 = 0;
  v13 = *(_QWORD *)a2;
  v57 = a3;
  *(_QWORD *)&v66 = a2;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v67);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v70);
  v14 = 3LL;
  if ( (unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 && (v67[4] & 1) == 0 && (v71 & 1) == 0
    || (v15 = v70 == 2, *(_DWORD *)(a1 + 784) = 3, v15) )
  {
    if ( (v12[16] & 0x40) != 0 )
      *(_BYTE *)v10 = 1;
  }
  if ( ((unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 || v70 == 4) && v12[16] < 0 )
    *(_BYTE *)(v10 + 1) = 1;
  v16 = 0;
  v55 = 0;
  v17 = (__int64 *)(v10 + 8);
  if ( (v12[16] & 3) == 0 )
    goto LABEL_19;
  DWORD2(v62) = 0;
  *(_QWORD *)&v62 = 1065353216LL;
  anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v65);
  HIDWORD(v65) = *(_DWORD *)(a1 + 1344);
  v19 = *(_DWORD *)(v10 + 32);
  v20 = v19 + 1;
  if ( v19 + 1 >= v19 )
  {
    if ( v20 > *(_DWORD *)(v10 + 28) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 8, 16, 1, &v65);
      v7 = v22;
      if ( v22 < 0 )
        goto LABEL_28;
    }
    else
    {
      v14 = 2LL * *(unsigned int *)(v10 + 32);
      *(_OWORD *)(*v17 + 16LL * *(unsigned int *)(v10 + 32)) = v65;
      *(_DWORD *)(v10 + 32) = v20;
    }
    ++*a5;
    v16 = 1;
LABEL_19:
    v15 = (v12[16] & 4) == 0;
    v56 = v7;
    if ( v15 && (v12[16] & 8) == 0 )
    {
      v23 = 0;
      if ( v7 < 0 )
      {
LABEL_22:
        v21 = v57;
        goto LABEL_23;
      }
      goto LABEL_34;
    }
    LODWORD(v62) = 0;
    *(_QWORD *)((char *)&v62 + 4) = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v65);
    HIDWORD(v65) = *(_DWORD *)(a1 + 1344);
    v28 = *(unsigned int *)(v10 + 32);
    v29 = v28 + 1;
    if ( (int)v28 + 1 < (unsigned int)v28 )
      goto LABEL_13;
    v7 = 0;
    v56 = 0;
    if ( v29 <= *(_DWORD *)(v10 + 28) )
    {
      v14 = 2 * v28;
      *(_OWORD *)(*v17 + 16 * v28) = v65;
      *(_DWORD *)(v10 + 32) = v29;
LABEL_33:
      ++*a5;
      v23 = 1;
LABEL_34:
      if ( (v12[16] & 0x10) != 0 || (v12[16] & 0x20) != 0 )
      {
        v30 = *(_DWORD *)(a1 + 1344);
        *(_QWORD *)&v62 = 0LL;
        HIDWORD(v62) = v30;
        v31 = *(unsigned int *)(v10 + 32);
        DWORD2(v62) = 1065353216;
        v32 = v31 + 1;
        if ( (int)v31 + 1 < (unsigned int)v31 )
        {
          v7 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0xB5u, 0LL);
          goto LABEL_22;
        }
        v7 = 0;
        v56 = 0;
        if ( v32 > *(_DWORD *)(v10 + 28) )
        {
          v33 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 8, 16, 1, &v62);
          v56 = v33;
          v7 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xC0u, 0LL);
            goto LABEL_22;
          }
        }
        else
        {
          *(_OWORD *)(*v17 + 16 * v31) = v62;
          *(_DWORD *)(v10 + 32) = v32;
        }
        v35 = (int *)a5;
        v36 = 1;
        v55 = 1;
        ++*a5;
      }
      else
      {
        v36 = 0;
        v35 = (int *)a5;
      }
      if ( *v35 <= 0 )
        goto LABEL_69;
      v37 = *(_DWORD *)(v10 + 32) - *v35;
      v38 = v37 + 1;
      if ( !v16 )
        v38 = v37;
      v58 = v38;
      v39 = v38 + 1;
      if ( !v23 )
        v39 = v38;
      *(_DWORD *)(a1 + 812) = 0;
      *(_DWORD *)(a1 + 816) = 0;
      *(_DWORD *)(a1 + 820) = 0;
      v59 = v39;
      if ( v37 <= 3 )
      {
LABEL_69:
        v21 = v57;
        if ( *(_BYTE *)v10 || *(_BYTE *)(v10 + 1) || v57 == *(_QWORD *)v12 )
          goto LABEL_23;
        if ( (*(_BYTE *)(a1 + 808) & 4) == 0 && v68 == 1.0 )
        {
          v48 = v61;
        }
        else
        {
          v48 = v61;
          if ( (v12[16] & 0x30) != 0 )
            *(_BYTE *)(v61 + 2) = 1;
        }
        if ( *(_BYTE *)(v48 + 2) )
          goto LABEL_23;
        if ( v69 == 1 )
        {
          if ( (v12[16] & 1) == 0 && (v12[16] & 2) == 0 )
            goto LABEL_23;
          v63 = 1065353216LL;
        }
        else
        {
          if ( v69 != 2 || (v12[16] & 4) == 0 && (v12[16] & 8) == 0 )
            goto LABEL_23;
          v63 = 0x3F80000000000000LL;
        }
        v64 = 0;
        v49 = v48 + 8;
        anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v66);
        HIDWORD(v66) = *(_DWORD *)(a1 + 1344);
        v51 = *(_DWORD *)(v49 + 24);
        v52 = v51 + 1;
        if ( v51 + 1 >= v51 )
        {
          v7 = 0;
          if ( v52 <= *(_DWORD *)(v49 + 20) )
          {
            *(_OWORD *)(*(_QWORD *)v49 + 16LL * *(unsigned int *)(v49 + 24)) = v66;
            *(_DWORD *)(v49 + 24) = v52;
          }
          else
          {
            v53 = DynArrayImpl<0>::AddMultipleAndSet(v49, 16, 1, &v66);
            v7 = v53;
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0xC0u, 0LL);
              goto LABEL_23;
            }
          }
          v8 = a5;
          ++*a7;
          goto LABEL_24;
        }
        v7 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_23:
        v8 = a5;
        goto LABEL_24;
      }
      v40 = 3;
      *(_QWORD *)&v65 = 48LL;
      *(_QWORD *)&v62 = 3LL;
      v41 = v37;
      while ( v16 )
      {
        v44 = *v17;
        v43 = v40;
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                *v17 + 16LL * (unsigned int)v41,
                                *v17 + 16LL * v40) )
          *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v65 + v44 + 12);
        v16 = *(_DWORD *)(a1 + 812) != 7;
        if ( v23 )
        {
          v38 = v58;
LABEL_59:
          v45 = *v17;
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(*v17 + 16LL * v38, *v17 + 16 * v43) )
            *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v65 + v45 + 12);
          v23 = *(_DWORD *)(a1 + 816) != 7;
        }
        v36 = v55;
        v42 = v43;
        if ( v55 )
        {
          v39 = v59;
LABEL_64:
          v46 = *v17;
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(*v17 + 16LL * v39, *v17 + 16 * v42) )
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v65 + v46 + 12);
          v36 = *(_DWORD *)(a1 + 820) != 7;
          v55 = v36;
        }
        ++v40;
        *(_QWORD *)&v65 = v65 + 16;
        v39 = v59;
        v47 = (__int64)v62 + 1 < v41;
        *(_QWORD *)&v62 = v62 + 1;
        v38 = v58;
        if ( !v47 )
        {
LABEL_68:
          v7 = v56;
          v12 = (char *)v66;
          v10 = v63;
          goto LABEL_69;
        }
      }
      if ( !v23 )
      {
        if ( !v36 )
          goto LABEL_68;
        v42 = v40;
        goto LABEL_64;
      }
      v43 = v40;
      goto LABEL_59;
    }
    v22 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 8, 16, 1, &v65);
    v56 = v22;
    v7 = v22;
    if ( v22 >= 0 )
      goto LABEL_33;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v22, 0xC0u, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  v7 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_14:
  v21 = v57;
LABEL_24:
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v60 = *v26;
    v59 = *v8;
    v58 = *(_DWORD *)(a1 + 784);
    v56 = *(_DWORD *)(a1 + 788);
    *(_QWORD *)&v66 = *(_QWORD *)v12;
    v63 = v21;
    *(_QWORD *)&v62 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v24,
      (unsigned int)&unk_18037B13B,
      v25,
      (_DWORD)v26,
      (__int64)&v62,
      (__int64)&v66,
      (__int64)&v63,
      (__int64)&v56,
      (__int64)&v58,
      (__int64)&v59,
      (__int64)&v60);
  }
  return (unsigned int)v7;
}
