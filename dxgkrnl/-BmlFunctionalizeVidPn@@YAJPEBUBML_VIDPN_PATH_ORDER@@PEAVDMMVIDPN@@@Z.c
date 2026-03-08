/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C016D684
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C016D3D0 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C03B9730 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlFunctionalizePath @ 0x1C016DA58 (BmlFunctionalizePath.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1C0170690 (BmlIsSecondaryHardwareClonePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C03B8D90 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rax
  DMMVIDPNTOPOLOGY *v8; // rcx
  unsigned __int16 v9; // si
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  struct DMMVIDPNTARGETMODESET *v14; // rax
  __int16 v15; // cx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // si
  DMMVIDPNTOPOLOGY *v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rcx
  struct DMMVIDPNPRESENTPATH *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r14d
  unsigned __int16 v27; // di
  __int64 v28; // rsi
  _QWORD *v30; // rax
  struct DMMVIDPNPRESENTPATH *v31; // rbp
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+70h] [rbp+8h] BYREF
  DMMVIDPNTOPOLOGY *v33; // [rsp+78h] [rbp+10h]

  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v6 = *((_QWORD *)a2 + 6);
  if ( !v6 )
    WdLogSingleEntry0(1LL);
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8 = (struct DMMVIDPN *)((char *)a2 + 96);
  v9 = 0;
  v33 = (struct DMMVIDPN *)((char *)a2 + 96);
  *(_QWORD *)(v7 + 24) = a2;
  if ( !*(_BYTE *)a1 )
    return 0LL;
  while ( 1 )
  {
    v10 = 120LL * v9;
    v11 = *(_QWORD *)((char *)a1 + v10 + 16);
    *(_WORD *)((char *)a1 + v10 + 64) = 0;
    *(_WORD *)((char *)a1 + v10 + 68) = 0;
    v12 = *(unsigned int *)(v11 + 28);
    v13 = *(unsigned int *)(v11 + 24);
    Path = DMMVIDPNTOPOLOGY::FindPath(v8, *(_DWORD *)(v11 + 24), *(_DWORD *)(v11 + 28));
    if ( !Path )
    {
      WdLogSingleEntry5(3LL, a1, v9, v13, v12, a2);
      return 3223192345LL;
    }
    if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, v9, 0LL) )
      break;
    v14 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v15 = *(_WORD *)((char *)a1 + v10 + 66);
    Path = v14;
    if ( *((_QWORD *)v14 + 18) )
    {
      if ( v15 )
      {
LABEL_30:
        WdLogSingleEntry5(
          3LL,
          v9,
          a2,
          *(unsigned int *)(*(_QWORD *)((char *)a1 + v10 + 16) + 24LL),
          *(unsigned int *)(*(_QWORD *)((char *)a1 + v10 + 16) + 28LL),
          a1);
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&Path, 0LL);
        return 3223192328LL;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_30;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&Path, 0LL);
LABEL_13:
    v16 = *(unsigned __int8 *)a1;
    if ( ++v9 >= v16 )
    {
      v17 = 0;
      if ( (_BYTE)v16 )
      {
        v18 = (struct DMMVIDPN *)((char *)a2 + 96);
        while ( 1 )
        {
          v19 = v17;
          v20 = *((_QWORD *)a1 + 15 * v17 + 2);
          v21 = DMMVIDPNTOPOLOGY::FindPath(
                  (struct DMMVIDPN *)((char *)a2 + 96),
                  *(_DWORD *)(v20 + 24),
                  *(_DWORD *)(v20 + 28));
          if ( !v21 )
            WdLogSingleEntry0(1LL);
          v26 = BmlFunctionalizePath(a1, a2, v17, v21);
          if ( v26 < 0 )
          {
            if ( v26 != -1071774970 )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
              v30[3] = a2;
              v30[4] = a1;
              v30[5] = v17;
              return (unsigned int)v26;
            }
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = v17;
            if ( !*(_QWORD *)(v6 + 8) )
              WdLogSingleEntry0(1LL);
            DxgkLogCodePointPacket(0x11u, v17, 0, 0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) + 404LL));
            if ( !v17 )
              return 3223192326LL;
            --v17;
          }
          else
          {
            ++v17;
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = v19;
          }
          v16 = *(unsigned __int8 *)a1;
          if ( v17 >= v16 )
            goto LABEL_21;
        }
      }
      v18 = v33;
LABEL_21:
      v27 = 0;
      if ( (_BYTE)v16 )
      {
        do
        {
          v28 = *((_QWORD *)a1 + 15 * v27 + 2);
          if ( (*(_QWORD *)v28 & 0x20000000000000LL) != 0 )
          {
            if ( (*(_QWORD *)v28 & 0x20200LL) != 0x20200 )
              WdLogSingleEntry0(1LL);
            v31 = DMMVIDPNTOPOLOGY::FindPath(v18, *(_DWORD *)(v28 + 24), *(_DWORD *)(v28 + 28));
            if ( !v31 )
              WdLogSingleEntry0(1LL);
            if ( (int)BmlGetRecommendedContentSizeForPath(a1, v27, v31, v28) < 0 )
              WdLogSingleEntry0(1LL);
          }
          ++v27;
        }
        while ( v27 < *(unsigned __int8 *)a1 );
      }
      return 0LL;
    }
    v8 = (struct DMMVIDPN *)((char *)a2 + 96);
  }
  if ( !*(_WORD *)((char *)a1 + v10 + 66) )
    goto LABEL_13;
  WdLogSingleEntry5(
    3LL,
    v9,
    a2,
    *(unsigned int *)(*(_QWORD *)((char *)a1 + v10 + 16) + 24LL),
    *(unsigned int *)(*(_QWORD *)((char *)a1 + v10 + 16) + 28LL),
    a1);
  return 3223192345LL;
}
