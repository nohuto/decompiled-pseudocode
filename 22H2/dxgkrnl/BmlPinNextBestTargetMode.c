/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C0143070
 * Callers:
 *     BmlFunctionalizePath @ 0x1C0142E64 (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011E08C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x1C0143D30 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C0144404 (BmlPinPathContentRotation.c)
 *     BmlGetNextBestTargetMode @ 0x1C01445E8 (BmlGetNextBestTargetMode.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C02EC6AC (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  struct DMMVIDPNTARGETMODESET *v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int16 v23; // r12
  int NextBestTargetMode; // eax
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int16 v28; // bx
  __int64 v29; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  int v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+40h] [rbp-68h]
  VIDPN_MGR *v48; // [rsp+48h] [rbp-60h]
  struct DMMVIDPNTARGETMODESET *v49; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v52; // [rsp+C0h] [rbp+18h]
  __int64 v53; // [rsp+C8h] [rbp+20h] BYREF

  v52 = a3;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = 0;
  v6 = a3;
  v8 = 104LL * a3;
  v51 = a3;
  v9 = a2;
  v48 = v4;
  v11 = a3;
  if ( !v4 )
  {
    v33 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v33);
  }
  v12 = *(_QWORD *)(a4 + 88);
  v13 = *(_QWORD *)(v12 + 104);
  if ( !v13 )
  {
    v53 = 0LL;
    goto LABEL_29;
  }
  a2 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
  v47 = *(_QWORD *)(v12 + 104);
  v53 = v47;
  if ( !v47 )
  {
LABEL_29:
    v34 = WdLogNewEntry5_WdError(v12, a2);
    *(_QWORD *)(v34 + 24) = v6;
    WdLogEvent5_WdError(v34);
    v5 = -1071774968;
    goto LABEL_21;
  }
  v14 = *(_QWORD *)(a4 + 96);
  v15 = *(_QWORD *)(v14 + 104);
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 96), 1u);
    v16 = *(struct DMMVIDPNTARGETMODESET **)(v14 + 104);
  }
  else
  {
    v16 = 0LL;
  }
  v49 = v16;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, 1LL);
  v17[3] = v16;
  v17[4] = *(unsigned __int16 *)(a1 + v8 + 68);
  v19 = *(unsigned __int16 *)(a1 + v8 + 70);
  v17[5] = v19;
  if ( !v16 )
  {
    LODWORD(v22) = -1071774967;
    goto LABEL_43;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v16 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v22) = -1071774970;
    goto LABEL_43;
  }
  LODWORD(v20) = -1;
  v50 = -1;
  if ( *(_WORD *)(a1 + v8 + 68) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v37);
    }
    v19 = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( (_WORD)v19 )
    {
      LODWORD(v20) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v50 = v20;
LABEL_13:
      LODWORD(v22) = -1071774970;
      if ( *(_WORD *)(a1 + v8 + 68) < (unsigned __int16)v19 )
      {
        while ( 1 )
        {
          v46 = v20;
          v23 = v52;
          NextBestTargetMode = BmlGetNextBestTargetMode(a1, v9, v52, v16, v47, v46, &v50);
          v22 = NextBestTargetMode;
          if ( NextBestTargetMode < 0 )
            break;
          v20 = v50;
          if ( v50 == -1 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v19, v18);
            WdLogEvent5_WdAssertion(v38);
          }
          ++*(_WORD *)(a1 + v8 + 68);
          LODWORD(v22) = VIDPN_MGR::PinVidPnTargetMode(v48, v16, v20, 1);
          if ( (int)v22 >= 0 )
          {
            v27 = WdLogNewEntry5_WdTrace(v19, v18);
            v28 = v52;
            v29 = v52;
            *(_QWORD *)(v27 + 24) = v20;
            if ( (int)BmlPinPathContentScaling(a1, v9, v29) >= 0 && (int)BmlPinPathContentRotation(a1, v9, v28) >= 0 )
              goto LABEL_20;
            LODWORD(v22) = -1071774970;
          }
          *(_DWORD *)(a1 + v8 + 88) = v22;
          ++*(_DWORD *)(a1 + v8 + 76);
          if ( (_DWORD)v22 != -1071774970 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v26);
            v11 = v51;
            v44[3] = (int)v22;
            v44[4] = a1;
            v44[5] = v11;
            v44[6] = v9;
            WdLogEvent5_WdWarning(v44);
            goto LABEL_43;
          }
          if ( *(_WORD *)(a1 + v8 + 68) >= *(_WORD *)(a1 + v8 + 70) )
            goto LABEL_42;
        }
        if ( NextBestTargetMode == -1071774970 )
        {
          v11 = v51;
        }
        else
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v25);
          v11 = v51;
          v45[3] = v22;
          v45[4] = a1;
          v45[5] = v11;
          v45[6] = v9;
          WdLogEvent5_WdWarning(v45);
        }
        goto LABEL_44;
      }
LABEL_42:
      v11 = v51;
LABEL_43:
      v23 = v52;
LABEL_44:
      v39 = WdLogNewEntry5_WdTrace(v19, v18);
      *(_QWORD *)(v39 + 24) = *(unsigned __int16 *)(a1 + v8 + 68);
      *(_QWORD *)(v39 + 32) = *(unsigned __int16 *)(a1 + v8 + 70);
      if ( *(_WORD *)(a1 + v8 + 70) && *(_WORD *)(a1 + v8 + 68) )
      {
        if ( (int)BmlUnPinPartialPathModalityOnPath(a1, v9, v23) < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
          v43[3] = a1;
          v43[4] = v11;
          v43[5] = v9;
          WdLogEvent5_WdWarning(v43);
        }
        *(_WORD *)(a1 + v8 + 68) = 0;
      }
      v5 = v22;
      goto LABEL_20;
    }
    WdLogNewEntry5_WdTrace(v19, v18);
    *(_WORD *)(a1 + v8 + 68) = 0;
    goto LABEL_38;
  }
  v19 = *(unsigned __int16 *)(a1 + v8 + 70);
  v21 = *((_QWORD *)v16 + 18);
  if ( (_WORD)v19 )
  {
    if ( v21 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v36);
      v19 = *(unsigned __int16 *)(a1 + v8 + 70);
    }
    goto LABEL_13;
  }
  if ( !v21 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (int)BmlPinPathContentScaling(a1, v9, (unsigned __int16)v6) < 0
    || (int)BmlPinPathContentRotation(a1, v9, (unsigned __int16)v6) < 0 )
  {
    WdLogNewEntry5_WdTrace(v32, v31);
LABEL_38:
    v5 = -1071774970;
    goto LABEL_20;
  }
  ++*(_WORD *)(a1 + v8 + 68);
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v49, 0LL);
LABEL_21:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v53, 0LL);
  return v5;
}
