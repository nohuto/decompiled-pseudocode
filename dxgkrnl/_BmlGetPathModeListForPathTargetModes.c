__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v8; // r12
  int refreshed; // r14d
  __int64 v11; // rdi
  struct DMMVIDPNTARGETMODESET *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // r12
  struct DMMVIDPNTARGETMODE *NextMode; // r15
  struct DMMVIDPNTARGETMODE *v24; // rax
  _QWORD *v25; // rcx
  bool v26; // zf
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int16 v32; // r12
  __int64 v33; // rdi
  DMMVIDPNSOURCEMODE *v34; // rdi
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  unsigned __int64 v41; // r8
  _QWORD *v42; // rax
  struct _D3DDDI_RATIONAL v43; // rcx
  int v44; // edx
  unsigned int v45; // r12d
  __int64 v46; // rdi
  int v47; // edi
  void *v48; // rcx
  unsigned __int64 v50; // [rsp+20h] [rbp-A1h] BYREF
  struct _D3DDDI_RATIONAL v51; // [rsp+28h] [rbp-99h] BYREF
  struct DMMVIDPNTARGETMODE *v52; // [rsp+30h] [rbp-91h]
  __int64 v53; // [rsp+38h] [rbp-89h]
  VIDPN_MGR *v54; // [rsp+40h] [rbp-81h]
  DMMVIDPNSOURCEMODE *v55; // [rsp+48h] [rbp-79h]
  struct DMMVIDPNTARGETMODESET *v56; // [rsp+50h] [rbp-71h] BYREF
  struct DMMVIDPNTARGETMODESET *v57; // [rsp+58h] [rbp-69h] BYREF
  _OWORD v58[11]; // [rsp+60h] [rbp-61h] BYREF
  _QWORD *v61; // [rsp+138h] [rbp+77h] BYREF

  v5 = 0LL;
  v6 = a3;
  v8 = 120LL * a3;
  v54 = *(VIDPN_MGR **)(a2 + 48);
  v53 = v8;
  refreshed = 0;
  if ( !v54 )
    WdLogSingleEntry0(1LL);
  v57 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v11 = (__int64)v57;
  if ( v57 )
  {
    v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 96));
    v56 = v12;
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v17[3] = v12;
    v17[4] = *(unsigned __int16 *)(v8 + a1 + 68);
    v21 = *(unsigned __int16 *)(v8 + a1 + 70);
    v17[5] = v21;
    if ( !v12 )
    {
      refreshed = -1071774967;
      goto LABEL_49;
    }
    v22 = (_QWORD *)((char *)v12 + 48);
    if ( (_QWORD *)*v22 == v22 )
    {
LABEL_49:
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v56, 0LL);
      goto LABEL_50;
    }
    if ( !*(_QWORD *)(v11 + 144) )
    {
      WdLogSingleEntry2(1LL, v11, v6);
      refreshed = -1071774968;
      goto LABEL_49;
    }
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
      WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    NextMode = 0LL;
    v55 = *(DMMVIDPNSOURCEMODE **)(v11 + 144);
    v24 = (struct DMMVIDPNTARGETMODE *)*((_QWORD *)v12 + 18);
    v50 = 0LL;
    v61 = 0LL;
    v25 = (_QWORD *)*v22;
    v26 = *v22 == (_QWORD)v22;
    v52 = v24;
    if ( !v26 )
      NextMode = (struct DMMVIDPNTARGETMODE *)(v25 - 1);
    if ( !NextMode )
    {
LABEL_47:
      v48 = v5;
      goto LABEL_48;
    }
    v27 = v53;
    while ( 1 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v18, v19, v20);
      v28[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
      v31 = *((unsigned int *)NextMode + 21);
      v28[4] = v31;
      v28[5] = *((unsigned int *)NextMode + 22);
      v28[6] = *((unsigned int *)NextMode + 23);
      v28[7] = *((unsigned int *)NextMode + 24);
      ++*(_DWORD *)(v27 + a1 + 100);
      if ( v52 && v52 != NextMode || (v32 = a3, !BmlDoesTargetModeObeyConstraint(a1, a3, (__int64)NextMode)) )
      {
        WdLogNewEntry5_WdTrace(v31, v28, v29, v30);
        goto LABEL_45;
      }
      ++*(_DWORD *)(v27 + a1 + 104);
      v33 = *((unsigned int *)NextMode + 6);
      if ( v52 )
        break;
      refreshed = VIDPN_MGR::PinVidPnTargetMode(v54, v12, v33, 1);
      if ( refreshed >= 0 )
        goto LABEL_24;
      refreshed = 0;
LABEL_42:
      v47 = BmlUnPinPartialPathModalityOnPath(a1, a2, v32);
      if ( v47 < 0 )
      {
        WdLogSingleEntry3(3LL, a1, v32, a2);
        refreshed = v47;
        goto LABEL_53;
      }
      if ( v52 )
        goto LABEL_46;
      v27 = v53;
LABEL_45:
      NextMode = DMMVIDPNTARGETMODESET::GetNextMode(v12, NextMode);
      if ( !NextMode )
      {
LABEL_46:
        v5 = v61;
        goto LABEL_47;
      }
    }
    refreshed = 0;
LABEL_24:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v28, v29, v30) + 24) = v33;
    if ( (int)BmlPinPathContentScaling(a1, a2, a3) >= 0 && (int)BmlPinPathContentRotation(a1, a2, a3) >= 0 )
    {
      memset(v58, 0, 0x70uLL);
      v34 = v55;
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v55);
      v36 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
      v37 = *(_OWORD *)&GraphicsInfo->Stride;
      *((_QWORD *)&v58[5] + 1) = *((_QWORD *)NextMode + 19);
      *(_QWORD *)&v58[6] = *((_QWORD *)NextMode + 18);
      LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
      *(_OWORD *)((char *)&v58[3] + 8) = v36;
      HIDWORD(v58[6]) = (_DWORD)GraphicsInfo;
      v38 = *(_OWORD *)((char *)NextMode + 72);
      LODWORD(GraphicsInfo) = *((_DWORD *)v34 + 18);
      *(_OWORD *)((char *)&v58[4] + 8) = v37;
      v39 = *(_OWORD *)((char *)NextMode + 88);
      v58[0] = v38;
      v40 = *(_OWORD *)((char *)NextMode + 104);
      v58[1] = v39;
      BYTE8(v58[6]) = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
      *(_QWORD *)&v39 = *((_QWORD *)NextMode + 15);
      v58[2] = v40;
      *(_QWORD *)&v58[3] = v39;
      refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v58);
      if ( refreshed < 0 )
        goto LABEL_51;
      if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode) )
      {
        v41 = v50;
        if ( !v50 )
        {
          refreshed = BmlBuildVirtualRefreshRateListFromTargetModeSet(v12, &v50, (void **)&v61);
          if ( refreshed < 0 )
            goto LABEL_51;
          v41 = v50;
        }
        v42 = v61;
        if ( v61 )
        {
          v43 = *(struct _D3DDDI_RATIONAL *)((char *)NextMode + 92);
          v44 = (*((_DWORD *)NextMode + 30) >> 3) & 0x3F;
          if ( v44 )
          {
            v51.Numerator = *(_QWORD *)((char *)NextMode + 92);
            v51.Denominator = v44 * v43.Denominator;
            v43 = v51;
          }
          v51 = v43;
          v45 = 0;
          if ( v41 )
          {
            v46 = 0LL;
            while ( 1 )
            {
              if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v51, (const struct _D3DDDI_RATIONAL *)&v42[v46], 0)
                && DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                     NextMode,
                     (const struct _D3DDDI_RATIONAL *)&v61[v46],
                     1) )
              {
                *((_QWORD *)&v58[5] + 1) = v61[v46];
                refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v58);
                if ( refreshed < 0 )
                  break;
              }
              v46 = ++v45;
              if ( v45 >= v50 )
                goto LABEL_41;
              v42 = v61;
            }
LABEL_51:
            WdLogSingleEntry0(2LL);
LABEL_53:
            v48 = v61;
LABEL_48:
            operator delete(v48);
            goto LABEL_49;
          }
LABEL_41:
          v32 = a3;
        }
      }
    }
    goto LABEL_42;
  }
  WdLogSingleEntry1(2LL, v6);
  refreshed = -1071774968;
LABEL_50:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v57, 0LL);
  return (unsigned int)refreshed;
}
