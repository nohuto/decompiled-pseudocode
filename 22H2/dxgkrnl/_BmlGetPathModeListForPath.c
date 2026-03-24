/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1C02ECDC0
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x1C02ECC08 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000B820 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C005C0F4 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E69C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C0144944 (BmlAreRawModesEnabled.c)
 *     BmlIsSecondaryClonePath @ 0x1C0146F70 (BmlIsSecondaryClonePath.c)
 *     BmlGetModeCategoryForRegion @ 0x1C0147138 (BmlGetModeCategoryForRegion.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C01474DC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlUnPinSourceMode @ 0x1C02EC960 (BmlUnPinSourceMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02ED110 (_BmlGetPathModeListForPathTargetModes.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(_BYTE *a1, __int64 a2, unsigned __int16 a3, CCD_MODE_RESULT_SET *a4)
{
  struct DMMVIDPNSOURCEMODE *NextMode; // r15
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rcx
  _QWORD *v19; // r13
  int PathModeListForPathTargetModes; // esi
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // r8
  _QWORD *v40; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // [rsp+30h] [rbp-68h] BYREF
  VIDPN_MGR *v44; // [rsp+38h] [rbp-60h]
  int v45[22]; // [rsp+40h] [rbp-58h]
  struct DMMVIDPNSOURCEMODE *v46; // [rsp+A8h] [rbp+10h]

  NextMode = 0LL;
  v5 = a3;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2);
  v13 = 104 * v5;
  *(_QWORD *)(v10 + 24) = v5;
  v14 = v5;
  *(_QWORD *)(v10 + 32) = a2;
  v44 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v44 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *(_QWORD *)&a1[v13 + 16];
  *(_WORD *)&a1[v13 + 64] = 0;
  *(_WORD *)&a1[v13 + 68] = 0;
  *(_QWORD *)v45 = DMMVIDPNTOPOLOGY::FindPath(
                     (DMMVIDPNTOPOLOGY *)(a2 + 96),
                     *(_DWORD *)(v16 + 24),
                     *(_DWORD *)(v16 + 28));
  v17 = *(_QWORD *)(*(_QWORD *)v45 + 88LL);
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    v43 = 0LL;
LABEL_10:
    PathModeListForPathTargetModes = -1071774968;
    goto LABEL_33;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD **)(v17 + 104);
  v43 = v19;
  if ( !v19 )
    goto LABEL_10;
  v21 = v19 + 6;
  if ( (_QWORD *)*v21 == v21 )
  {
    PathModeListForPathTargetModes = 0;
  }
  else
  {
    if ( BmlIsSecondaryClonePath((__int64)a1, v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v23, v22);
      if ( !v19[18] )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24, v22);
        WdLogEvent5_WdAssertion(v25);
      }
    }
    *(_QWORD *)&a1[v13 + 92] = 0LL;
    PathModeListForPathTargetModes = 0;
    *(_QWORD *)&a1[v13 + 100] = 0LL;
    v26 = (_QWORD *)*v21;
    v46 = (struct DMMVIDPNSOURCEMODE *)v19[18];
    if ( (_QWORD *)*v21 != v21 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v26 - 1);
    for ( ; NextMode; NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v19, NextMode) )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v22);
      v27[3] = *((unsigned int *)NextMode + 6);
      v27[4] = *((unsigned int *)NextMode + 19);
      v27[5] = *((unsigned int *)NextMode + 20);
      v27[6] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(NextMode, v28);
      v30 = *((int *)NextMode + 24);
      v27[7] = v30;
      ++*(_DWORD *)&a1[v13 + 92];
      if ( (!v46 || v46 == NextMode)
        && (BmlAreRawModesEnabled((__int64)a1, v14)
         || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v13 + 36]) != 1)
        && BmlDoesSourceModeObeyConstraint((__int64)a1, a3, (unsigned int *)NextMode) )
      {
        ++*(_DWORD *)&a1[v13 + 96];
        v31 = *((unsigned int *)NextMode + 6);
        if ( v46 )
        {
          LODWORD(v32) = 0;
        }
        else
        {
          v32 = (int)VIDPN_MGR::PinVidPnSourceMode(v44, (struct DMMVIDPNSOURCEMODESET *const)v19, v31, 1);
          v35 = WdLogNewEntry5_WdTrace(v34, v33);
          *(_QWORD *)(v35 + 24) = v31;
          *(_QWORD *)(v35 + 32) = v32;
        }
        if ( (int)v32 < 0 )
        {
          PathModeListForPathTargetModes = 0;
        }
        else
        {
          PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes((int)a1, a2, a3, v45[0], a4);
          if ( !v46 )
          {
            v38 = BmlUnPinSourceMode(a1, a2, a3);
            if ( v38 < 0 )
            {
              v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v39);
              v42[3] = a1;
              v42[4] = a2;
              v42[5] = v14;
              WdLogEvent5_WdWarning(v42);
              goto LABEL_34;
            }
          }
          if ( PathModeListForPathTargetModes < 0 )
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
            v40[3] = a1;
            v40[4] = a2;
            v40[5] = v14;
            WdLogEvent5_WdError(v40);
            break;
          }
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v30, v29);
      }
    }
  }
LABEL_33:
  v38 = PathModeListForPathTargetModes;
LABEL_34:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v43, 0LL);
  return (unsigned int)v38;
}
