/*
 * XREFs of BmlFunctionalizePath @ 0x1C016DA58
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C016D684 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     BmlPinNextBestTargetMode @ 0x1C016DC64 (BmlPinNextBestTargetMode.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1C0170690 (BmlIsSecondaryHardwareClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01832FC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlUnPinSourceMode @ 0x1C03B9310 (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  struct DMMVIDPNTARGETMODESET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DMMVIDPNTARGETMODESET *v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rdi
  int NextBestSourceMode; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // ebx
  __int64 BestTargetMode; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  VIDPN_MGR *v40; // [rsp+80h] [rbp+8h]
  struct DMMVIDPNTARGETMODESET *v41; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+90h] [rbp+18h] BYREF
  __int64 v43; // [rsp+98h] [rbp+20h]

  v43 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v10 = (unsigned int)v5;
  v40 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v40 )
    WdLogSingleEntry0(1LL);
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v41 = v11;
  v16 = v11;
  if ( !v11 )
  {
    LODWORD(v18) = -1071774968;
    goto LABEL_39;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v11 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v11 + 48) )
  {
    LODWORD(v18) = -1071774970;
    goto LABEL_39;
  }
  LODWORD(v17) = -1;
  v42 = -1;
  if ( *(_WORD *)(a1 + v9 + 64) )
  {
    if ( !*((_QWORD *)v11 + 18) )
      WdLogSingleEntry0((unsigned int)v12);
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v34, v35) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(a1 + v9 + 66) && !(unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
      {
        LODWORD(v17) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
        v42 = v17;
        goto LABEL_10;
      }
      WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
      *(_WORD *)(a1 + v9 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_24:
    LODWORD(v18) = BestTargetMode;
LABEL_17:
    v25 = v18;
LABEL_18:
    LODWORD(v18) = v25;
    goto LABEL_19;
  }
  if ( !*(_WORD *)(a1 + v9 + 66) || (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    if ( !*((_QWORD *)v16 + 18) )
      WdLogSingleEntry0(1LL);
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(a1 + v9 + 64);
    goto LABEL_24;
  }
  if ( *((_QWORD *)v16 + 18) )
    WdLogSingleEntry0(1LL);
LABEL_10:
  LODWORD(v18) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(a1 + v9 + 64) >= *(_WORD *)(a1 + v9 + 66) )
    {
      v10 = v5;
      goto LABEL_39;
    }
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, (unsigned __int16)v5, (_DWORD)v16, v17, (__int64)&v42);
    LODWORD(v18) = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v17 = v42;
    if ( v42 == -1 )
      WdLogSingleEntry0(1LL);
    ++*(_WORD *)(a1 + v9 + 64);
    v18 = VIDPN_MGR::PinVidPnSourceMode(v40, v16, v17, 1);
    v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
    *(_QWORD *)(v24 + 24) = v17;
    *(_QWORD *)(v24 + 32) = v18;
    if ( (int)v18 >= 0 )
    {
      LODWORD(v18) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v43);
      if ( (int)v18 >= 0 )
        goto LABEL_17;
    }
    *(_DWORD *)(a1 + v9 + 88) = v18;
    ++*(_DWORD *)(a1 + v9 + 72);
    if ( (_DWORD)v18 != -1071774970 )
    {
      v10 = v5;
      WdLogSingleEntry4(3LL, (int)v18, a1, a2, v5);
      goto LABEL_39;
    }
  }
  v10 = v5;
  if ( NextBestSourceMode != -1071774970 )
    WdLogSingleEntry4(3LL, NextBestSourceMode, a1, v5, a2);
LABEL_39:
  if ( *(_WORD *)(a1 + v9 + 66)
    && !(unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL)
    && *(_WORD *)(a1 + v9 + 64) )
  {
    v25 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v25 >= 0 )
    {
      *(_WORD *)(a1 + v9 + 64) = 0;
      goto LABEL_19;
    }
    WdLogSingleEntry3(3LL, a1, a2, v10);
    goto LABEL_18;
  }
LABEL_19:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v41, 0LL);
  return (unsigned int)v18;
}
