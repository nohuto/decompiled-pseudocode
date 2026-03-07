__int64 __fastcall CD3DBatchExecutionContext::AppendGeometry(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 v8; // r13
  unsigned int v9; // ebx
  unsigned int v11; // edi
  bool v12; // zf
  CD3DDynamicAppendBuffer *v13; // r8
  unsigned int *v14; // rsi
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // r14d
  unsigned int v18; // eax
  unsigned int v19; // ebp
  __int64 v20; // r14
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // r13
  int v25; // ebp
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  int v34; // edx
  unsigned int v35; // r14d
  int v36; // r14d
  int v37; // eax
  unsigned int v38; // r13d
  unsigned int v39; // eax
  bool v40; // cf
  __int64 v41; // rax
  int v42; // ebp
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // r10
  __int64 v46; // r10
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ebp
  __int64 v50; // rdx
  unsigned int *v51; // r9
  unsigned int v52; // r10d
  unsigned __int64 v53; // r8
  __int16 v54; // r11
  unsigned __int64 v55; // rdx
  __m128i v56; // xmm1
  __m128i v57; // xmm1
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  _WORD *v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rcx
  unsigned int v65; // r12d
  _QWORD *v66; // rax
  __int64 v67; // rcx
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rcx
  unsigned int v78; // ecx
  unsigned int v79; // r14d
  int v80; // r9d
  int v81; // eax
  unsigned int v82; // ecx
  int v83; // ebp
  unsigned int v84; // ecx
  int v85; // eax
  CD2DContext *v86; // rcx
  char IsHardwareProtectionDisabled; // al
  __int64 v88; // r8
  char v89; // dl
  unsigned int v90; // ecx
  int v91; // eax
  CD2DContext *v92; // rcx
  char v93; // al
  unsigned int v94; // edx
  char v95; // r9
  CD3DDynamicAppendBuffer *v96; // r14
  int v97; // eax
  unsigned int v98; // ecx
  __int64 v99; // rdx
  unsigned int v100; // [rsp+20h] [rbp-A8h]
  unsigned int v101; // [rsp+40h] [rbp-88h]
  __int64 v102; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v103; // [rsp+50h] [rbp-78h] BYREF
  int v104; // [rsp+54h] [rbp-74h]
  CD3DDynamicAppendBuffer *v105; // [rsp+58h] [rbp-70h]
  unsigned int v106; // [rsp+60h] [rbp-68h]
  unsigned int v107; // [rsp+64h] [rbp-64h]
  _QWORD v108[12]; // [rsp+68h] [rbp-60h] BYREF
  int v109; // [rsp+D0h] [rbp+8h] BYREF
  bool v110; // [rsp+D8h] [rbp+10h]
  unsigned int v111; // [rsp+E0h] [rbp+18h]
  unsigned int *v112; // [rsp+E8h] [rbp+20h]

  v112 = a4;
  v111 = a3;
  v6 = *(_QWORD *)(a1 + 32);
  v8 = *a4;
  v9 = 0;
  v109 = 0;
  v11 = 16;
  v12 = *(_BYTE *)(a1 + 72) == 0;
  v13 = (CD3DDynamicAppendBuffer *)(v6 + 112);
  v14 = (unsigned int *)(v6 + 16);
  v105 = (CD3DDynamicAppendBuffer *)(v6 + 112);
  v15 = *(_DWORD *)(a1 + 76);
  v16 = 48;
  if ( v12 )
    v16 = 16;
  v17 = v16 + 8 * v15;
  v18 = 0;
  if ( *(_BYTE *)(a1 + 73) )
    v18 = 48;
  v101 = v17;
  v106 = v18;
  v110 = (_DWORD)v8 != 0;
  if ( a2 * v17 > v14[10] )
  {
    CD3DBatchExecutionContext::Flush(a1, 8LL);
    v109 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v14, a2 * v17, 0);
    v79 = v109;
    if ( v109 < 0 )
    {
      v100 = 592;
LABEL_95:
      v80 = v79;
LABEL_99:
      MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v80, v100, 0LL);
      return v79;
    }
    v17 = v101;
    v18 = v106;
    v13 = v105;
    *(_BYTE *)(a1 + 81) = 1;
  }
  v19 = v111 * v18;
  if ( v111 * v18 <= *((_DWORD *)v13 + 10) )
    goto LABEL_7;
  CD3DBatchExecutionContext::Flush(a1, 1024LL);
  v109 = CD3DDynamicAppendBuffer::EnsureByteSpace(v105, v19, 0);
  v79 = v109;
  if ( v109 < 0 )
  {
    v100 = 602;
    goto LABEL_95;
  }
  v17 = v101;
  v13 = v105;
  *(_BYTE *)(a1 + 81) = 1;
LABEL_7:
  if ( *(_BYTE *)(a1 + 81) )
  {
    v73 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 81) = 0;
    v74 = 8 * *(_DWORD *)(a1 + 76);
    if ( *(_BYTE *)(a1 + 72) )
      v75 = v74 + 48;
    else
      v75 = v74 + 16;
    v103 = v75;
    if ( *(_BYTE *)(a1 + 73) )
      v104 = 48;
    else
      v104 = 0;
    v102 = 0LL;
    v108[0] = *(_QWORD *)(v73 + 24);
    v76 = *(_QWORD *)(v73 + 120);
    v77 = *(_QWORD *)(a1 + 16);
    v108[1] = v76;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, unsigned int *, __int64 *))(*(_QWORD *)v77 + 144LL))(
      v77,
      0LL,
      2LL,
      v108,
      &v103,
      &v102);
    v13 = v105;
  }
  if ( *((_QWORD *)v14 + 3) )
  {
    v69 = v14[10] - v14[9];
    v70 = v14[8] == 32 ? v69 >> 5 : v69 / v14[8];
    if ( a2 > v70 )
    {
      CD3DBatchExecutionContext::Flush(a1, 32LL);
      v13 = v105;
    }
  }
  if ( *((_QWORD *)v13 + 3)
    && v111 > (unsigned int)(*((_DWORD *)v13 + 10) - *((_DWORD *)v13 + 9)) / *((_DWORD *)v13 + 8) )
  {
    CD3DBatchExecutionContext::Flush(a1, 2048LL);
  }
  if ( !v110 )
    goto LABEL_76;
  v20 = *(_QWORD *)(a1 + 32);
  v109 = 0;
  if ( 2 * v8 > (unsigned __int64)*(unsigned int *)(v20 + 104) )
  {
    CD3DBatchExecutionContext::Flush(a1, 16LL);
    v81 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v20 + 64), 2 * (int)v8, 0);
    v109 = v81;
    v83 = v81;
    if ( v81 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0xD5u, 0LL);
      v79 = v83;
LABEL_123:
      MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v83, 0x27Au, 0LL);
      return v79;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 152LL))(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(v20 + 72),
      57LL);
  }
  if ( *(_QWORD *)(v20 + 88) )
  {
    v71 = *(_DWORD *)(v20 + 104) - *(_DWORD *)(v20 + 100);
    if ( *(_DWORD *)(v20 + 96) == 2 )
      v72 = v71 >> 1;
    else
      v72 = v71 / *(_DWORD *)(v20 + 96);
    if ( (unsigned int)v8 > v72 )
      CD3DBatchExecutionContext::Flush(a1, 64LL);
    if ( *(_QWORD *)(v20 + 88) )
    {
      v17 = v101;
LABEL_76:
      v28 = v109;
      goto LABEL_31;
    }
  }
  v21 = *(_DWORD *)(v20 + 100);
  if ( (unsigned int)v8 < 0x12C )
    LODWORD(v8) = 300;
  LODWORD(v102) = *(_DWORD *)(v20 + 104) - *(_DWORD *)(v20 + 100);
  v22 = -v21 & 1;
  v103 = v22;
  v23 = v22 + 2 * v8;
  v24 = *(_QWORD *)(v20 + 64);
  v107 = v23;
  v25 = *(_DWORD *)(v24 + 1088);
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v25, 0x9F9u, 0LL);
  }
  else
  {
    v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v24 + 560) + 112LL))(
            *(_QWORD *)(v24 + 560),
            *(_QWORD *)(v20 + 72),
            0LL,
            5 - (unsigned int)((unsigned int)v102 < v23),
            0,
            v108);
    v25 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x9FFu, 0LL);
  }
  if ( *(_DWORD *)(v24 + 1088)
    || v25 != -2005532292 && v25 != -2147024882 && v25 != -2005270523
    || !*(_DWORD *)(v24 + 448) )
  {
LABEL_22:
    if ( v25 >= 0 )
      goto LABEL_23;
    goto LABEL_113;
  }
  if ( v25 != -2005270523
    || (v85 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 552) + 312LL))(*(_QWORD *)(v24 + 552)),
        *(_DWORD *)(v24 + 1088) = -2003304307,
        (v27 = v85 == -2005270480) != 0) )
  {
    CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v24 + 16));
    *((_BYTE *)v86 + 436) = 1;
    IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v86);
    if ( v89 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0q_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
        v88);
    goto LABEL_22;
  }
LABEL_113:
  if ( *(int *)(v24 + 1088) < 0 )
  {
    v25 = *(_DWORD *)(v24 + 1088);
    v79 = v25;
LABEL_122:
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v25, 0x6Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v25, 0xE1u, 0LL);
    v83 = v79;
    goto LABEL_123;
  }
LABEL_23:
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v25, 0LL, &v109) )
  {
    v25 = v109;
    if ( v109 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v109, 0xB38u, 0LL);
  }
  v109 = v25;
  v28 = v25;
  if ( v25 == -2003304307 )
  {
    *(_DWORD *)(v24 + 1088) = -2003304307;
    goto LABEL_121;
  }
  if ( v25 < 0 )
  {
LABEL_121:
    v79 = v25;
    goto LABEL_122;
  }
  *(_QWORD *)(v20 + 88) = v108[0];
  v29 = v107;
  *(_DWORD *)(v20 + 96) = 2;
  if ( (unsigned int)v102 < v29 )
    *(_DWORD *)(v20 + 100) = 0;
  else
    *(_DWORD *)(v20 + 100) += v103;
  v30 = *(_DWORD *)(v20 + 100);
  if ( *(_DWORD *)(v20 + 96) == 2 )
    v31 = v30 >> 1;
  else
    v31 = v30 / *(_DWORD *)(v20 + 96);
  v17 = v101;
  *(_DWORD *)(a1 + 88) = v31;
LABEL_31:
  v32 = 100;
  if ( *((_QWORD *)v14 + 3) )
    goto LABEL_54;
  v33 = v14[9];
  if ( v17 == 32 )
    v34 = v14[9] & 0x1F;
  else
    v34 = v33 % v17;
  v35 = v17 - v34;
  if ( v101 == 32 )
    v36 = v35 & 0x1F;
  else
    v36 = v35 % v101;
  v37 = 100;
  v38 = v14[10] - v33;
  if ( a2 >= 0x64 )
    v37 = a2;
  v39 = v36 + v101 * v37;
  v40 = v38 < v39;
  v103 = v39;
  v41 = *(_QWORD *)v14;
  v102 = v41;
  v42 = *(_DWORD *)(v41 + 1088);
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v42, 0x9F9u, 0LL);
  }
  else
  {
    v43 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v41 + 560) + 112LL))(
            *(_QWORD *)(v41 + 560),
            *((_QWORD *)v14 + 1),
            0LL,
            5 - (unsigned int)v40,
            0,
            v108);
    v42 = v43;
    if ( v43 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x9FFu, 0LL);
  }
  v45 = v102;
  if ( *(_DWORD *)(v102 + 1088)
    || v42 != -2005532292 && v42 != -2147024882 && v42 != -2005270523
    || !*(_DWORD *)(v102 + 448) )
  {
LABEL_45:
    if ( v42 >= 0 )
      goto LABEL_46;
    goto LABEL_128;
  }
  if ( v42 != -2005270523
    || (v91 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v102 + 552) + 312LL))(*(_QWORD *)(v102 + 552)),
        v45 = v102,
        v44 = v91 == -2005270480,
        *(_DWORD *)(v102 + 1088) = -2003304307,
        v91 == -2005270480) )
  {
    CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v45 + 16));
    *((_BYTE *)v92 + 436) = 1;
    v93 = CD2DContext::IsHardwareProtectionDisabled(v92);
    if ( v95 != v93 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      McTemplateU0q_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
        v94);
      v45 = v102;
    }
    goto LABEL_45;
  }
LABEL_128:
  if ( *(int *)(v45 + 1088) < 0 )
  {
    v42 = *(_DWORD *)(v45 + 1088);
    v79 = v42;
    goto LABEL_98;
  }
LABEL_46:
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v42, 0LL, &v109) )
  {
    v42 = v109;
    if ( v109 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v109, 0xB38u, 0LL);
      v46 = v102;
    }
  }
  v109 = v42;
  v28 = v42;
  if ( v42 == -2003304307 )
  {
    *(_DWORD *)(v46 + 1088) = -2003304307;
    goto LABEL_97;
  }
  if ( v42 < 0 )
  {
LABEL_97:
    v79 = v42;
LABEL_98:
    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v42, 0x6Cu, 0LL);
    v80 = v42;
    v100 = 641;
    goto LABEL_99;
  }
  v14[8] = v101;
  *((_QWORD *)v14 + 3) = v108[0];
  if ( v38 < v103 )
    v14[9] = 0;
  else
    v14[9] += v36;
  v47 = v14[9];
  if ( v14[8] == 32 )
    v48 = v47 >> 5;
  else
    v48 = v47 / v14[8];
  *(_DWORD *)(a1 + 84) = v48;
  v32 = 100;
LABEL_54:
  v49 = v111;
  if ( v111 )
  {
    v96 = v105;
    if ( !*((_QWORD *)v105 + 3) )
    {
      if ( v111 >= 0x64 )
        v32 = v111;
      v97 = CD3DDynamicAppendBuffer::BeginAppend(v105, v106, v32);
      v109 = v97;
      v28 = v97;
      if ( v97 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v98, 0LL, 0, v97, 0x28Cu, 0LL);
        return (unsigned int)v109;
      }
      *(_DWORD *)(a1 + 92) = *((_DWORD *)v96 + 9) / *((_DWORD *)v96 + 8);
    }
    v99 = *((_QWORD *)v96 + 3) + *((unsigned int *)v96 + 9);
    *((_DWORD *)v96 + 9) += *((_DWORD *)v96 + 8) * v49;
    *a6 = v99;
    *(_DWORD *)(a1 + 104) += v49;
  }
  if ( v110 )
  {
    v50 = *(_QWORD *)(a1 + 32);
    v51 = v112;
    v52 = *v112;
    v53 = *(_QWORD *)(v50 + 88) + *(unsigned int *)(v50 + 100);
    *(_DWORD *)(v50 + 100) += *(_DWORD *)(v50 + 96) * *v112;
    v54 = *(_WORD *)(a1 + 96) + *(_WORD *)(a1 + 84);
    v55 = *((_QWORD *)v51 + 1);
    v56 = _mm_cvtsi32_si128(v54);
    v57 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v56, v56), 0);
    if ( v52 )
    {
      if ( v52 < 0x20 )
        goto LABEL_62;
      v58 = v52 - 1;
      if ( v53 <= v55 + 2 * v58 && v53 + 2 * v58 >= v55 )
        goto LABEL_62;
      do
      {
        v59 = v9;
        v9 += 32;
        *(__m128i *)(v53 + 2 * v59) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v55 + 2 * v59)), v57);
        *(__m128i *)(v53 + 2LL * (v11 - 8)) = _mm_add_epi16(
                                                _mm_loadu_si128((const __m128i *)(v55 + 2LL * (v11 - 8))),
                                                v57);
        *(__m128i *)(v53 + 2LL * v11) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v55 + 2LL * v11)), v57);
        v60 = v11 + 8;
        v11 += 32;
        *(__m128i *)(v53 + 2 * v60) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v55 + 2 * v60)), v57);
      }
      while ( v9 < (v52 & 0xFFFFFFE0) );
      if ( v9 < v52 )
      {
LABEL_62:
        v61 = v55 - v53;
        v62 = (_WORD *)(v53 + 2LL * v9);
        v63 = v52 - v9;
        do
        {
          *v62 = *(_WORD *)((char *)v62 + v61) + v54;
          ++v62;
          --v63;
        }
        while ( v63 );
      }
    }
    *(_DWORD *)(a1 + 100) += v52;
    v28 = v109;
  }
  *(_DWORD *)(a1 + 96) += a2;
  v64 = v14[9];
  v65 = v64 + v14[8] * a2;
  v66 = a5;
  v67 = *((_QWORD *)v14 + 3) + v64;
  v14[9] = v65;
  *v66 = v67;
  return v28;
}
