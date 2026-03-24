/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0142C78
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C0142488 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02ECC08 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlFunctionalizePath @ 0x1C0142E64 (BmlFunctionalizePath.c)
 *     BmlIsSecondaryClonePath @ 0x1C0146F70 (BmlIsSecondaryClonePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02EC318 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(const struct BML_VIDPN_PATH_ORDER *a1, struct DMMVIDPN *a2)
{
  __int64 v4; // r13
  unsigned __int16 v5; // si
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int16 v20; // si
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DMMVIDPNPRESENTPATH *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r14d
  unsigned __int16 v29; // si
  __int64 v30; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct DMMVIDPNPRESENTPATH *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v32 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !a2 )
  {
    v33 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v33);
  }
  v4 = *((_QWORD *)a2 + 6);
  if ( !v4 )
  {
    v34 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v34);
  }
  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a2;
  LOBYTE(v7) = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v8 = 104LL * v5;
      v9 = *(_QWORD *)((char *)a1 + v8 + 16);
      *(_WORD *)((char *)a1 + v8 + 64) = 0;
      *(_WORD *)((char *)a1 + v8 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v9 + 24),
               *(_DWORD *)(v9 + 28));
      if ( !Path )
        break;
      if ( (unsigned __int8)BmlIsSecondaryClonePath(a1, v5, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v8 + 66) )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v6, v15);
          v35[4] = a2;
          v35[3] = v5;
          v35[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 24LL);
          v36 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 28LL);
          v35[7] = a1;
LABEL_33:
          v35[6] = v36;
          WdLogEvent5_WdWarning(v35);
          return 3223192345LL;
        }
      }
      else
      {
        v16 = *((_QWORD *)Path + 11);
        v17 = *(_QWORD *)(v16 + 104);
        if ( v17 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
          v18 = *(_QWORD *)(v16 + 104);
        }
        else
        {
          v18 = 0LL;
        }
        v19 = *(_QWORD *)(v18 + 144);
        v51 = v18;
        if ( v19 )
        {
          if ( *(_WORD *)((char *)a1 + v8 + 66) )
            goto LABEL_31;
        }
        else if ( !*(_WORD *)((char *)a1 + v8 + 66) )
        {
LABEL_31:
          v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v6, v15);
          v37[4] = a2;
          v37[3] = v5;
          v37[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 24LL);
          v37[6] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 28LL);
          v37[7] = a1;
          WdLogEvent5_WdWarning(v37);
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v51, 0LL);
          return 3223192328LL;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v51, 0LL);
      }
      v7 = *(unsigned __int8 *)a1;
      if ( ++v5 >= v7 )
        goto LABEL_16;
    }
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v35[3] = a1;
    v35[4] = v5;
    v35[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 24LL);
    v36 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 28LL);
    v35[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v20 = 0;
  if ( (_BYTE)v7 )
  {
    do
    {
      v21 = v20;
      v22 = *((_QWORD *)a1 + 13 * v20 + 2);
      v25 = DMMVIDPNTOPOLOGY::FindPath(
              (struct DMMVIDPN *)((char *)a2 + 96),
              *(_DWORD *)(v22 + 24),
              *(_DWORD *)(v22 + 28));
      if ( !v25 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v24, v23);
        WdLogEvent5_WdAssertion(v38);
      }
      v28 = BmlFunctionalizePath(a1, a2, v20, v25);
      if ( v28 < 0 )
      {
        if ( v28 != -1071774970 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
          v43[3] = a2;
          v43[4] = a1;
          v43[5] = v20;
          return (unsigned int)v28;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26) + 24) = v20;
        v41 = *(_QWORD *)(v4 + 8);
        if ( !v41 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v42);
          v41 = *(_QWORD *)(v4 + 8);
        }
        DxgkLogCodePointPacket(0x11u, v20, 0, 0, *(_QWORD *)(*(_QWORD *)(v41 + 16) + 316LL));
        if ( !v20 )
          return 3223192326LL;
        --v20;
      }
      else
      {
        ++v20;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26) + 24) = v21;
      }
      v7 = *(unsigned __int8 *)a1;
    }
    while ( v20 < v7 );
  }
  v29 = 0;
  if ( (_BYTE)v7 )
  {
    do
    {
      v30 = *((_QWORD *)a1 + 13 * v29 + 2);
      if ( (*(_QWORD *)v30 & 0x20000000000000LL) != 0 )
      {
        if ( (*(_QWORD *)v30 & 0x20200LL) != 0x20200 )
        {
          v44 = WdLogNewEntry5_WdAssertion(0x20000000000000LL, v6);
          WdLogEvent5_WdAssertion(v44);
        }
        v47 = DMMVIDPNTOPOLOGY::FindPath(
                (struct DMMVIDPN *)((char *)a2 + 96),
                *(_DWORD *)(v30 + 24),
                *(_DWORD *)(v30 + 28));
        if ( !v47 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v46, v45);
          WdLogEvent5_WdAssertion(v48);
        }
        if ( (int)BmlGetRecommendedContentSizeForPath(a1, v29, v47, v30) < 0 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v49, v6);
          WdLogEvent5_WdAssertion(v50);
        }
      }
      ++v29;
    }
    while ( v29 < *(unsigned __int8 *)a1 );
  }
  return 0LL;
}
