/*
 * XREFs of ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180079690
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800787D0 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801A9A10 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1802688E0 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntr.c)
 * Callees:
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18002B850 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180066ECC (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007A274 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x1801AA2EC (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18023CCA0 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::AppendGeometry(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  unsigned int v12; // ebp
  CD3DDynamicAppendBuffer *v13; // r10
  int v14; // edx
  unsigned int *v15; // rsi
  int v16; // eax
  int v17; // r15d
  int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r13d
  UINT v22; // r14d
  UINT v23; // r14d
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // r13d
  char v27; // r14
  __int64 v28; // r14
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int *v33; // r10
  unsigned int v34; // r9d
  unsigned __int64 v35; // rax
  __int16 v36; // r11
  unsigned __int64 v37; // r8
  __m128i v38; // xmm1
  __m128i v39; // xmm1
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int16 v46; // ax
  unsigned int v47; // edx
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned int v52; // edx
  __int64 v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // r12
  int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // r8d
  int v61; // edx
  unsigned int v62; // r12d
  int v63; // r12d
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // eax
  _BOOL8 v67; // rcx
  __int64 v68; // r10
  __int64 v69; // r10
  unsigned int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  CD2DContext *v84; // rcx
  char IsHardwareProtectionDisabled; // al
  __int64 v86; // r8
  char v87; // dl
  int v88; // eax
  CD2DContext *v89; // rcx
  char v90; // al
  unsigned int v91; // edx
  char v92; // r9
  CD3DDynamicAppendBuffer *v93; // r12
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // rcx
  unsigned int v98; // r8d
  bool v99; // [rsp+40h] [rbp-98h]
  unsigned int v100; // [rsp+44h] [rbp-94h] BYREF
  __int64 v101; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v102; // [rsp+50h] [rbp-88h] BYREF
  int v103; // [rsp+54h] [rbp-84h]
  unsigned int v104; // [rsp+58h] [rbp-80h]
  CD3DDynamicAppendBuffer *v105; // [rsp+60h] [rbp-78h]
  unsigned int v106; // [rsp+68h] [rbp-70h]
  unsigned int v107; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v108; // [rsp+70h] [rbp-68h]
  _QWORD v109[12]; // [rsp+78h] [rbp-60h] BYREF
  int v110; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v111; // [rsp+E8h] [rbp+10h]
  unsigned int v112; // [rsp+F0h] [rbp+18h]
  unsigned int *v113; // [rsp+F8h] [rbp+20h]

  v113 = a4;
  v112 = a3;
  v111 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v8 = *a4;
  v12 = 16;
  v13 = (CD3DDynamicAppendBuffer *)(v6 + 112);
  v14 = 48;
  v15 = (unsigned int *)(v6 + 16);
  v16 = *(_DWORD *)(a1 + 76);
  v17 = 0;
  if ( !*(_BYTE *)(a1 + 72) )
    v14 = 16;
  v105 = v13;
  v18 = v14 + 8 * v16;
  v19 = 0;
  if ( *(_BYTE *)(a1 + 73) )
    v19 = 48;
  v106 = v18;
  v107 = v19;
  v20 = 100;
  v21 = 100;
  if ( a2 >= 0x64 )
    v21 = a2;
  LOBYTE(v110) = v8 != 0;
  v99 = a3 != 0;
  if ( v8 )
  {
    if ( v8 < 0x64 )
      v8 = 100;
  }
  else
  {
    v8 = 0;
  }
  if ( a3 )
  {
    if ( a3 >= 0x64 )
      v20 = a3;
  }
  else
  {
    v20 = 0;
  }
  v100 = v20;
  v22 = v18 * v21;
  v104 = v18 * v21;
  if ( v18 * v21 > v15[10] )
  {
    CD3DBatchExecutionContext::Flush(a1, 8);
    v77 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v15, v22, 0);
    v17 = v77;
    if ( v77 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x252u, 0LL);
      return (unsigned int)v17;
    }
    v20 = v100;
    v13 = v105;
    *(_BYTE *)(a1 + 81) = 1;
  }
  v23 = v107 * v20;
  if ( v107 * v20 > *((_DWORD *)v13 + 10) )
  {
    CD3DBatchExecutionContext::Flush(a1, 1024);
    v79 = CD3DDynamicAppendBuffer::EnsureByteSpace(v105, v23, 0);
    v17 = v79;
    if ( v79 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x25Cu, 0LL);
      return (unsigned int)v17;
    }
    v13 = v105;
    *(_BYTE *)(a1 + 81) = 1;
  }
  if ( *(_BYTE *)(a1 + 81) )
  {
    v72 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 81) = 0;
    v73 = 8 * *(_DWORD *)(a1 + 76);
    if ( *(_BYTE *)(a1 + 72) )
      v74 = v73 + 48;
    else
      v74 = v73 + 16;
    v102 = v74;
    if ( *(_BYTE *)(a1 + 73) )
      v103 = 48;
    else
      v103 = 0;
    v101 = 0LL;
    v109[0] = *(_QWORD *)(v72 + 24);
    v75 = *(_QWORD *)(v72 + 120);
    v76 = *(_QWORD *)(a1 + 16);
    v109[1] = v75;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, unsigned int *, __int64 *))(*(_QWORD *)v76 + 144LL))(
      v76,
      0LL,
      2LL,
      v109,
      &v102,
      &v101);
    v13 = v105;
  }
  if ( *((_QWORD *)v15 + 3) )
  {
    v24 = v15[10] - v15[9];
    v25 = v15[8] == 32 ? v24 >> 5 : v24 / v15[8];
    if ( v21 > v25 )
    {
      CD3DBatchExecutionContext::Flush(a1, 32);
      v13 = v105;
    }
  }
  v26 = v100;
  if ( *((_QWORD *)v13 + 3)
    && v100 > (unsigned int)(*((_DWORD *)v13 + 10) - *((_DWORD *)v13 + 9)) / *((_DWORD *)v13 + 8) )
  {
    CD3DBatchExecutionContext::Flush(a1, 2048);
  }
  v27 = v110;
  if ( (_BYTE)v110 )
  {
    v28 = *(_QWORD *)(a1 + 32);
    v17 = 0;
    if ( 2 * (unsigned __int64)v8 > *(unsigned int *)(v28 + 104) )
    {
      CD3DBatchExecutionContext::Flush(a1, 16);
      v81 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v28 + 64), 2 * v8, 0);
      v17 = v81;
      if ( v81 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0xD1u, 0LL);
LABEL_29:
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v17, 0x27Cu, 0LL);
          return (unsigned int)v17;
        }
        v27 = v110;
        goto LABEL_31;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 152LL))(
        *(_QWORD *)(a1 + 16),
        *(_QWORD *)(v28 + 72),
        57LL);
    }
    v29 = *(_QWORD *)(v28 + 88);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v28 + 104) - *(_DWORD *)(v28 + 100);
      if ( *(_DWORD *)(v28 + 96) == 2 )
        v31 = v30 >> 1;
      else
        v31 = v30 / *(_DWORD *)(v28 + 96);
      if ( v8 > v31 )
      {
        CD3DBatchExecutionContext::Flush(a1, 64);
        v29 = *(_QWORD *)(v28 + 88);
      }
      if ( v29 )
        goto LABEL_29;
    }
    v52 = *(_DWORD *)(v28 + 104) - *(_DWORD *)(v28 + 100);
    v53 = -*(_DWORD *)(v28 + 100) & 1;
    v102 = v53;
    LODWORD(v101) = v52;
    v54 = v53 + 2 * v8;
    v55 = *(_QWORD *)(v28 + 64);
    v108 = v54;
    v17 = *(_DWORD *)(v55 + 1128);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v17, 0xBBAu, 0LL);
    }
    else
    {
      v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v55 + 600)
                                                                                        + 112LL))(
              *(_QWORD *)(v55 + 600),
              *(_QWORD *)(v28 + 72),
              0LL,
              5 - (unsigned int)(v52 < v54),
              0,
              v109);
      v17 = v56;
      if ( v56 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v56, 0xBC0u, 0LL);
    }
    if ( !*(_DWORD *)(v55 + 1128)
      && (v17 == -2005532292 || v17 == -2147024882 || v17 == -2005270523)
      && *(_DWORD *)(v55 + 496) )
    {
      if ( v17 == -2005270523 )
      {
        v83 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v55 + 592) + 312LL))(*(_QWORD *)(v55 + 592));
        *(_DWORD *)(v55 + 1128) = -2003304307;
        v29 = v83 == -2005270480;
        if ( v83 != -2005270480 )
        {
LABEL_117:
          if ( *(int *)(v55 + 1128) < 0 )
          {
            v17 = *(_DWORD *)(v55 + 1128);
            goto LABEL_55;
          }
LABEL_53:
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v17, 0LL, &v100) )
          {
            v17 = v100;
            if ( (v100 & 0x80000000) != 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v100, 0xD8Bu, 0LL);
          }
          if ( v17 == -2003304307 )
          {
            *(_DWORD *)(v55 + 1128) = -2003304307;
            goto LABEL_125;
          }
LABEL_55:
          if ( v17 >= 0 )
          {
            *(_QWORD *)(v28 + 88) = v109[0];
            v57 = v108;
            *(_DWORD *)(v28 + 96) = 2;
            if ( (unsigned int)v101 < v57 )
              *(_DWORD *)(v28 + 100) = 0;
            else
              *(_DWORD *)(v28 + 100) += v102;
LABEL_58:
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v17, 0xDCu, 0LL);
            }
            else
            {
              v58 = *(_DWORD *)(v28 + 100);
              if ( *(_DWORD *)(v28 + 96) == 2 )
                v59 = v58 >> 1;
              else
                v59 = v58 / *(_DWORD *)(v28 + 96);
              *(_DWORD *)(a1 + 88) = v59;
            }
            goto LABEL_29;
          }
LABEL_125:
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v17, 0x6Cu, 0LL);
          goto LABEL_58;
        }
      }
      CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v55 + 16));
      *((_BYTE *)v84 + 484) = 1;
      IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v84);
      if ( v87 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0q_EventWriteTransfer(v29, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v86);
    }
    if ( v17 >= 0 )
      goto LABEL_53;
    goto LABEL_117;
  }
LABEL_31:
  if ( !*((_QWORD *)v15 + 3) )
  {
    v60 = v15[9];
    if ( v106 == 32 )
      v61 = v15[9] & 0x1F;
    else
      v61 = v60 % v106;
    v62 = v106 - v61;
    if ( v106 == 32 )
      v63 = v62 & 0x1F;
    else
      v63 = v62 % v106;
    v64 = v15[10] - v60;
    v104 += v63;
    v102 = v64;
    v65 = *(_QWORD *)v15;
    v101 = v65;
    v17 = *(_DWORD *)(v65 + 1128);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v17, 0xBBAu, 0LL);
    }
    else
    {
      v66 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v65 + 600)
                                                                                         + 112LL))(
              *(_QWORD *)(v65 + 600),
              *((_QWORD *)v15 + 1),
              0LL,
              5 - (unsigned int)((unsigned int)v64 < v104),
              0,
              v109);
      v17 = v66;
      if ( v66 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0xBC0u, 0LL);
    }
    v68 = v101;
    if ( !*(_DWORD *)(v101 + 1128)
      && (v17 == -2005532292 || v17 == -2147024882 || v17 == -2005270523)
      && *(_DWORD *)(v101 + 496) )
    {
      if ( v17 == -2005270523 )
      {
        v88 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v101 + 592) + 312LL))(*(_QWORD *)(v101 + 592));
        v68 = v101;
        v67 = v88 == -2005270480;
        *(_DWORD *)(v101 + 1128) = -2003304307;
        if ( v88 != -2005270480 )
        {
LABEL_132:
          if ( *(int *)(v68 + 1128) < 0 )
          {
            v17 = *(_DWORD *)(v68 + 1128);
            goto LABEL_76;
          }
LABEL_74:
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v17, 0LL, &v110) )
          {
            v17 = v110;
            if ( v110 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v110, 0xD8Bu, 0LL);
              v69 = v101;
            }
          }
          if ( v17 == -2003304307 )
          {
            *(_DWORD *)(v69 + 1128) = -2003304307;
            goto LABEL_140;
          }
LABEL_76:
          if ( v17 >= 0 )
          {
            v15[8] = v106;
            *((_QWORD *)v15 + 3) = v109[0];
            if ( v102 < v104 )
              v15[9] = 0;
            else
              v15[9] += v63;
            goto LABEL_79;
          }
LABEL_140:
          MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v17, 0x6Cu, 0LL);
LABEL_79:
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v17, 0x282u, 0LL);
            return (unsigned int)v17;
          }
          v70 = v15[9];
          if ( v15[8] == 32 )
            v71 = v70 >> 5;
          else
            v71 = v70 / v15[8];
          *(_DWORD *)(a1 + 84) = v71;
          goto LABEL_32;
        }
      }
      CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v68 + 16));
      *((_BYTE *)v89 + 484) = 1;
      v90 = CD2DContext::IsHardwareProtectionDisabled(v89);
      if ( v92 != v90 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0q_EventWriteTransfer(v67, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v91);
        v68 = v101;
      }
    }
    if ( v17 >= 0 )
      goto LABEL_74;
    goto LABEL_132;
  }
LABEL_32:
  if ( v99 )
  {
    v93 = v105;
    v94 = *((_QWORD *)v105 + 3);
    if ( !v94 )
    {
      v95 = CD3DDynamicAppendBuffer::BeginAppend(v105, v107, v26);
      v17 = v95;
      if ( v95 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, v95, 0x28Cu, 0LL);
        return (unsigned int)v17;
      }
      *(_DWORD *)(a1 + 92) = *((_DWORD *)v93 + 9) / *((_DWORD *)v93 + 8);
      v94 = *((_QWORD *)v93 + 3);
    }
    v97 = *((unsigned int *)v93 + 9);
    v98 = v112;
    *((_DWORD *)v93 + 9) = v97 + v112 * *((_DWORD *)v93 + 8);
    *a6 = v94 + v97;
    *(_DWORD *)(a1 + 104) += v98;
  }
  if ( v27 )
  {
    v32 = *(_QWORD *)(a1 + 32);
    v33 = v113;
    v34 = *v113;
    v35 = *(_QWORD *)(v32 + 88) + *(unsigned int *)(v32 + 100);
    *(_DWORD *)(v32 + 100) += *v113 * *(_DWORD *)(v32 + 96);
    v36 = *(_WORD *)(a1 + 84) + *(_WORD *)(a1 + 96);
    v37 = *((_QWORD *)v33 + 1);
    v38 = _mm_cvtsi32_si128(v36);
    v39 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v38, v38), 0);
    if ( v34 )
    {
      if ( v34 >= 0x20 )
      {
        v40 = v34 - 1;
        if ( v35 > v37 + 2 * v40 || v35 + 2 * v40 < v37 )
        {
          do
          {
            v41 = v7;
            v7 += 32;
            *(__m128i *)(v35 + 2 * v41) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v37 + 2 * v41)), v39);
            *(__m128i *)(v35 + 2LL * (v12 - 8)) = _mm_add_epi16(
                                                    _mm_loadu_si128((const __m128i *)(v37 + 2LL * (v12 - 8))),
                                                    v39);
            *(__m128i *)(v35 + 2LL * v12) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v37 + 2LL * v12)), v39);
            v42 = v12 + 8;
            v12 += 32;
            *(__m128i *)(v35 + 2 * v42) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v37 + 2 * v42)), v39);
          }
          while ( v7 < (v34 & 0xFFFFFFE0) );
        }
      }
      if ( v7 < v34 )
      {
        v43 = v37 - v35;
        v44 = v35 + 2LL * v7;
        v45 = v34 - v7;
        do
        {
          v46 = *(_WORD *)(v43 + v44);
          v44 += 2LL;
          *(_WORD *)(v44 - 2) = v36 + v46;
          --v45;
        }
        while ( v45 );
      }
    }
    *(_DWORD *)(a1 + 100) += v34;
  }
  v47 = v111;
  *(_DWORD *)(a1 + 96) += v111;
  v48 = v15[9];
  v49 = v48 + v47 * v15[8];
  v50 = *((_QWORD *)v15 + 3) + v48;
  v15[9] = v49;
  *a5 = v50;
  return (unsigned int)v17;
}
