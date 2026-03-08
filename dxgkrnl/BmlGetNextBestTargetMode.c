/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C016E26C
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C016DC64 (BmlPinNextBestTargetMode.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00027F0 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0015A90 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C016E0C8 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C016E538 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1C016E704 (BmlCompareTargetModes.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01713B0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03B9548 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DMMVIDPNTARGETMODESET *a4,
        _QWORD *a5,
        unsigned int a6,
        _DWORD *a7,
        struct _D3DDDI_RATIONAL *a8,
        int *a9)
{
  __int64 v10; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r12
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rbx
  _QWORD *v22; // rbp
  struct DMMVIDPNTARGETMODE *NextMode; // rbp
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _D3DDDI_RATIONAL v32; // rax
  int Numerator; // ecx
  __int64 v34; // rdi
  __int64 v35; // rbx
  struct _D3DDDI_RATIONAL v37; // rax
  unsigned int v38; // ebx
  bool refreshed; // al
  const struct _D3DDDI_RATIONAL *v40; // rcx
  const struct _D3DDDI_RATIONAL *v41; // rdx
  struct _D3DDDI_RATIONAL v42; // rax
  struct _D3DDDI_RATIONAL v43; // [rsp+30h] [rbp-48h]
  unsigned __int16 v45; // [rsp+90h] [rbp+18h]
  void *v46; // [rsp+A0h] [rbp+28h]
  void *v47; // [rsp+A0h] [rbp+28h]
  void *v48; // [rsp+A0h] [rbp+28h]

  v45 = a3;
  v10 = (unsigned __int16)a3;
  v13 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v16 = 0;
  *(_QWORD *)(v13 + 24) = a4;
  *(_QWORD *)(v13 + 32) = a6;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v17 = a5;
  if ( !a5[18] )
  {
    WdLogSingleEntry2(1LL, a5, v10);
    return 3223192328LL;
  }
  v18 = 0xFFFFFFFFLL;
  v19 = 0LL;
  *a7 = -1;
  if ( a6 != -1 )
  {
    v19 = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)a4 + 24, a6);
    if ( !v19 )
    {
      v38 = -1071774959;
      goto LABEL_34;
    }
  }
  v20 = 120 * v10;
  v21 = 0LL;
  *(_QWORD *)(v20 + a1 + 100) = 0LL;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    WdLogNewEntry5_WdTrace(v18, v17, v14, v15);
    v16 = 1;
  }
  v22 = (_QWORD *)*((_QWORD *)a4 + 6);
  if ( v22 == (_QWORD *)((char *)a4 + 48) )
    goto LABEL_33;
  NextMode = (struct DMMVIDPNTARGETMODE *)(v22 - 1);
  if ( !NextMode )
    goto LABEL_33;
  do
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v14, v15);
    v24[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
    v24[4] = *((unsigned int *)NextMode + 21);
    v24[5] = *((unsigned int *)NextMode + 22);
    v27 = *((unsigned int *)NextMode + 23);
    v24[6] = v27;
    v24[7] = *((unsigned int *)NextMode + 24);
    ++*(_DWORD *)(v20 + a1 + 100);
    if ( NextMode == (struct DMMVIDPNTARGETMODE *)v19
      || (LOBYTE(v26) = v16, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, v45, NextMode, v26)) )
    {
      WdLogNewEntry5_WdTrace(v27, v24, v25, v26);
    }
    else
    {
      ++*(_DWORD *)(v20 + a1 + 104);
      if ( (unsigned int)BmlCompareTargetModes(a1, a2, v45, (_DWORD)NextMode, v21, v16) == 1
        && (!v19 || (unsigned int)BmlCompareTargetModes(a1, a2, v45, (_DWORD)NextMode, v19, v16) == -1) )
      {
        WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v21 = (__int64)NextMode;
      }
    }
    NextMode = DMMVIDPNTARGETMODESET::GetNextMode(a4, NextMode);
  }
  while ( NextMode );
  if ( !v21 )
  {
LABEL_33:
    v38 = -1071774970;
LABEL_34:
    WdLogNewEntry5_WdTrace(v18, v17, v14, v15);
    return v38;
  }
  *a7 = *(_DWORD *)(v21 + 24);
  if ( (**(_DWORD **)(v20 + a1 + 16) & 0x1000000) != 0 )
  {
    if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v21) )
    {
      refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                    (DMMVIDPNTARGETMODE *)v21,
                    (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v20 + a1 + 16) + 224LL),
                    *(_DWORD *)(*(_QWORD *)(v20 + a1 + 16) + 240LL));
      v40 = *(const struct _D3DDDI_RATIONAL **)(v20 + a1 + 16);
      v41 = v40 + 28;
      if ( refreshed )
      {
        Numerator = v40[30].Numerator;
        v32 = *v41;
        goto LABEL_21;
      }
      if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v21, v41, 1) )
      {
        v32 = *(struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v20 + a1 + 16) + 224LL);
      }
      else
      {
        v32 = *(struct _D3DDDI_RATIONAL *)(v21 + 92);
        if ( ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) != 0 )
        {
          LODWORD(v47) = *(_QWORD *)(v21 + 92);
          HIDWORD(v47) = ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) * v32.Denominator;
          v32 = (struct _D3DDDI_RATIONAL)v47;
        }
      }
    }
    else
    {
      v32 = *(struct _D3DDDI_RATIONAL *)(v21 + 92);
      if ( ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) != 0 )
      {
        LODWORD(v46) = *(_QWORD *)(v21 + 92);
        HIDWORD(v46) = ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) * v32.Denominator;
        v32 = (struct _D3DDDI_RATIONAL)v46;
      }
    }
    Numerator = 1;
LABEL_21:
    *a8 = v32;
    *a9 = Numerator;
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v20 + a1 + 128) & 1) != 0 )
  {
    v34 = v21;
    BmlBuildVirtualRefreshRateListFromTargetModeSet(a4);
    v42 = *(struct _D3DDDI_RATIONAL *)(v21 + 92);
    if ( ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) != 0 )
    {
      v43.Numerator = *(_QWORD *)(v21 + 92);
      v43.Denominator = ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) * v42.Denominator;
      v42 = v43;
    }
    *a8 = v42;
    *a9 = 1;
    operator delete(0LL);
    goto LABEL_23;
  }
  v37 = *(struct _D3DDDI_RATIONAL *)(v21 + 92);
  if ( ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) != 0 )
  {
    LODWORD(v48) = *(_QWORD *)(v21 + 92);
    HIDWORD(v48) = ((*(_DWORD *)(v21 + 120) >> 3) & 0x3F) * v37.Denominator;
    v37 = (struct _D3DDDI_RATIONAL)v48;
  }
  *a9 = 1;
  *a8 = v37;
LABEL_22:
  v34 = v21;
LABEL_23:
  v35 = *(_QWORD *)(a2 + 48);
  if ( !*(_QWORD *)(v35 + 8) )
    WdLogSingleEntry0(1LL);
  DxgkLogCodePointPacket(
    0x21u,
    v45,
    *(_DWORD *)(v34 + 84),
    *(_DWORD *)(v34 + 88),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL) + 404LL));
  return 0LL;
}
