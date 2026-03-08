/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C016DC64
 * Callers:
 *     BmlFunctionalizePath @ 0x1C016DA58 (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C016D024 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x1C016DEBC (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C016E010 (BmlPinPathContentRotation.c)
 *     BmlGetNextBestTargetMode @ 0x1C016E26C (BmlGetNextBestTargetMode.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C03B9114 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  unsigned int v7; // r14d
  __int64 v10; // rdx
  struct DMMVIDPNTARGETMODESET *v11; // rdi
  struct DMMVIDPNTARGETMODESET *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // esi
  int NextBestTargetMode; // eax
  unsigned int v25; // esi
  VIDPN_MGR *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // [rsp+50h] [rbp-19h]
  __int64 v42; // [rsp+58h] [rbp-11h] BYREF
  VIDPN_MGR *v43; // [rsp+60h] [rbp-9h]
  struct DMMVIDPNTARGETMODESET *v44; // [rsp+68h] [rbp-1h] BYREF
  struct DMMVIDPNTARGETMODESET *v45; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v46; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+6Fh]
  unsigned __int16 v48; // [rsp+E0h] [rbp+77h]
  int v49; // [rsp+E8h] [rbp+7Fh] BYREF

  v48 = a3;
  v47 = a2;
  v4 = a2;
  v6 = 120LL * a3;
  v7 = 0;
  v43 = *(VIDPN_MGR **)(a2 + 48);
  v41 = a3;
  if ( !v43 )
    WdLogSingleEntry0(1LL);
  v45 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v11 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry1(2LL, v10);
    v7 = -1071774968;
    goto LABEL_18;
  }
  v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 96));
  v44 = v12;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v17[3] = v12;
  v17[4] = *(unsigned __int16 *)(v6 + a1 + 68);
  v21 = *(unsigned __int16 *)(v6 + a1 + 70);
  v17[5] = v21;
  if ( !v12 )
  {
    v23 = -1071774967;
    goto LABEL_43;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v12 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v12 + 48) )
  {
    v23 = -1071774970;
LABEL_42:
    v4 = v47;
LABEL_43:
    v39 = v41;
LABEL_44:
    v40 = WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    *(_QWORD *)(v40 + 24) = *(unsigned __int16 *)(v6 + a1 + 68);
    *(_QWORD *)(v40 + 32) = *(unsigned __int16 *)(v6 + a1 + 70);
    if ( *(_WORD *)(v6 + a1 + 70) && *(_WORD *)(v6 + a1 + 68) )
    {
      if ( (int)BmlUnPinPartialPathModalityOnPath(a1, v4, v48) < 0 )
        WdLogSingleEntry3(3LL, a1, v39, v4);
      *(_WORD *)(v6 + a1 + 68) = 0;
    }
    v7 = v23;
    goto LABEL_17;
  }
  v22 = -1;
  v46 = -1;
  if ( *(_WORD *)(v6 + a1 + 68) )
  {
    if ( !*((_QWORD *)v12 + 18) )
      WdLogSingleEntry0(1LL);
    v21 = *(unsigned __int16 *)(v6 + a1 + 70);
    if ( (_WORD)v21 )
    {
      v22 = *(_DWORD *)(*((_QWORD *)v12 + 18) + 24LL);
      v46 = v22;
      goto LABEL_10;
    }
    WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    *(_WORD *)(v6 + a1 + 68) = 0;
    goto LABEL_32;
  }
  v21 = *(unsigned __int16 *)(v6 + a1 + 70);
  if ( (_WORD)v21 )
  {
    if ( *((_QWORD *)v12 + 18) )
    {
      WdLogSingleEntry0(1LL);
      v21 = *(unsigned __int16 *)(v6 + a1 + 70);
      v22 = v46;
    }
LABEL_10:
    v23 = -1071774970;
    if ( *(_WORD *)(v6 + a1 + 68) < (unsigned __int16)v21 )
    {
      while ( 1 )
      {
        v42 = 0LL;
        v49 = 1;
        NextBestTargetMode = BmlGetNextBestTargetMode(a1, v47, v48, v12, v11, v22, &v46, &v42, &v49);
        v23 = NextBestTargetMode;
        if ( NextBestTargetMode < 0 )
          break;
        v25 = v46;
        if ( v46 == -1 )
          WdLogSingleEntry0(1LL);
        v26 = v43;
        ++*(_WORD *)(v6 + a1 + 68);
        v23 = VIDPN_MGR::PinVidPnTargetMode(v26, v12, v25, 1);
        if ( v23 >= 0 )
        {
          v27 = v46;
          v28 = WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
          v29 = v48;
          *(_QWORD *)(v28 + 24) = v27;
          v30 = *((_QWORD *)v12 + 18);
          v31 = v47;
          v32 = v47;
          *(_QWORD *)(v30 + 152) = v42;
          *(_DWORD *)(v30 + 160) = v49;
          if ( (int)BmlPinPathContentScaling(a1, v32, v29) >= 0 && (int)BmlPinPathContentRotation(a1, v31, v48) >= 0 )
            goto LABEL_17;
          v23 = -1071774970;
        }
        *(_DWORD *)(v6 + a1 + 88) = v23;
        ++*(_DWORD *)(v6 + a1 + 76);
        if ( v23 != -1071774970 )
        {
          v38 = v23;
LABEL_40:
          v39 = v41;
          v4 = v47;
          WdLogSingleEntry4(3LL, v38, a1, v41, v47);
          goto LABEL_44;
        }
        if ( *(_WORD *)(v6 + a1 + 68) >= *(_WORD *)(v6 + a1 + 70) )
          goto LABEL_42;
        v22 = v46;
      }
      if ( NextBestTargetMode != -1071774970 )
      {
        v38 = NextBestTargetMode;
        goto LABEL_40;
      }
    }
    goto LABEL_42;
  }
  if ( !*((_QWORD *)v12 + 18) )
    WdLogSingleEntry0(1LL);
  if ( (int)BmlPinPathContentScaling(a1, v4, a3) < 0 || (int)BmlPinPathContentRotation(a1, v4, a3) < 0 )
  {
    WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
LABEL_32:
    v7 = -1071774970;
    goto LABEL_17;
  }
  ++*(_WORD *)(v6 + a1 + 68);
LABEL_17:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
LABEL_18:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v45, 0LL);
  return v7;
}
