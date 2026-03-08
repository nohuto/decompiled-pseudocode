/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1C03B98CC
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x1C03B9730 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0021000 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C00687FC (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     BmlAreRawModesEnabled @ 0x1C016E6D4 (BmlAreRawModesEnabled.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1C0170690 (BmlIsSecondaryHardwareClonePath.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0170C60 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetModeCategoryForRegion @ 0x1C017104C (BmlGetModeCategoryForRegion.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01832FC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlUnPinSourceMode @ 0x1C03B9310 (BmlUnPinSourceMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03B9BCC (_BmlGetPathModeListForPathTargetModes.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(_BYTE *a1, __int64 a2, __int64 a3, CCD_MODE_RESULT_SET *a4)
{
  struct DMMVIDPNSOURCEMODE *NextMode; // r15
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  struct DMMVIDPNTARGETMODESET *v12; // rax
  struct DMMVIDPNTARGETMODESET *v13; // rbx
  int PathModeListForPathTargetModes; // ebp
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 BitsPerPixel; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 v26; // di
  __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // edi
  VIDPN_MGR *v36; // [rsp+30h] [rbp-68h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+38h] [rbp-60h]
  struct DMMVIDPNTARGETMODESET *v38; // [rsp+40h] [rbp-58h] BYREF
  struct DMMVIDPNSOURCEMODE *v39; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v40; // [rsp+B0h] [rbp+18h]

  v40 = a3;
  NextMode = 0LL;
  v5 = (unsigned __int16)a3;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  v10 = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v36 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v36 )
    WdLogSingleEntry0(1LL);
  v11 = *(_QWORD *)&a1[v9 + 16];
  *(_WORD *)&a1[v9 + 64] = 0;
  *(_WORD *)&a1[v9 + 68] = 0;
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), *(_DWORD *)(v11 + 24), *(_DWORD *)(v11 + 28));
  v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
  v38 = v12;
  v13 = v12;
  if ( v12 )
  {
    v15 = (_QWORD *)((char *)v12 + 48);
    if ( (_QWORD *)*v15 == v15 )
    {
      PathModeListForPathTargetModes = 0;
      goto LABEL_34;
    }
    if ( BmlIsSecondaryHardwareClonePath((__int64)a1, v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      if ( !*((_QWORD *)v13 + 18) )
        WdLogSingleEntry0(1LL);
    }
    *(_QWORD *)&a1[v9 + 92] = 0LL;
    PathModeListForPathTargetModes = 0;
    *(_QWORD *)&a1[v9 + 100] = 0LL;
    v20 = (_QWORD *)*v15;
    v39 = (struct DMMVIDPNSOURCEMODE *)*((_QWORD *)v13 + 18);
    if ( (_QWORD *)*v15 != v15 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v20 - 1);
    if ( !NextMode )
      goto LABEL_34;
    while ( 1 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v16, v18, v19);
      v21[3] = *((unsigned int *)NextMode + 6);
      v21[4] = *((unsigned int *)NextMode + 19);
      v21[5] = *((unsigned int *)NextMode + 20);
      BitsPerPixel = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(NextMode);
      v21[6] = BitsPerPixel;
      v21[7] = *((int *)NextMode + 24);
      ++*(_DWORD *)&a1[v9 + 92];
      if ( (!v39 || v39 == NextMode)
        && (BmlAreRawModesEnabled((__int64)a1, v10)
         || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v9 + 36]) != 1)
        && (v26 = v40, BmlDoesSourceModeObeyConstraint((__int64)a1, v40, NextMode)) )
      {
        ++*(_DWORD *)&a1[v9 + 96];
        v27 = *((unsigned int *)NextMode + 6);
        if ( !v39 )
        {
          v28 = (int)VIDPN_MGR::PinVidPnSourceMode(v36, v13, v27, 1);
          v33 = WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
          *(_QWORD *)(v33 + 24) = v27;
          *(_QWORD *)(v33 + 32) = v28;
          if ( (int)v28 < 0 )
          {
            PathModeListForPathTargetModes = 0;
            goto LABEL_30;
          }
          v26 = v40;
        }
        PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes((int)a1, a2, v26, (int)Path, a4);
        if ( !v39 )
        {
          v34 = BmlUnPinSourceMode(a1, a2, v26);
          if ( v34 < 0 )
          {
            WdLogSingleEntry3(3LL, a1, a2, v10);
            goto LABEL_35;
          }
        }
        if ( PathModeListForPathTargetModes < 0 )
        {
          WdLogSingleEntry3(2LL, a1, a2, v10);
          goto LABEL_34;
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(BitsPerPixel, v22, v24, v25);
      }
LABEL_30:
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(v13, NextMode);
      if ( !NextMode )
        goto LABEL_34;
    }
  }
  PathModeListForPathTargetModes = -1071774968;
LABEL_34:
  v34 = PathModeListForPathTargetModes;
LABEL_35:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v38, 0LL);
  return (unsigned int)v34;
}
