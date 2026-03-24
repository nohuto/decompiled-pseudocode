/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1C02ED110
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1C02ECDC0 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00098DC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000B820 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011E08C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x1C0143D30 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C0144404 (BmlPinPathContentRotation.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0144804 (BmlDoesTargetModeObeyConstraint.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02EA9D0 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C02EC6AC (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  int v5; // edi
  __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r12
  DMMVIDPNSOURCEMODE *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  __int64 v25; // rbx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r12d
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v44; // [rsp+20h] [rbp-81h]
  struct DMMVIDPNSOURCEMODE *v45; // [rsp+28h] [rbp-79h]
  DMMVIDPNSOURCEMODE *v46; // [rsp+30h] [rbp-71h]
  __int64 v47; // [rsp+38h] [rbp-69h] BYREF
  VIDPN_MGR *v48; // [rsp+40h] [rbp-61h]
  _QWORD *v49; // [rsp+48h] [rbp-59h] BYREF
  _OWORD v50[3]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v51; // [rsp+80h] [rbp-21h]
  __int128 v52; // [rsp+88h] [rbp-19h]
  __int128 v53; // [rsp+98h] [rbp-9h]
  bool v54; // [rsp+A8h] [rbp+7h]
  __int16 v55; // [rsp+A9h] [rbp+8h]
  char v56; // [rsp+ABh] [rbp+Ah]
  int v57; // [rsp+ACh] [rbp+Bh]
  unsigned int v60; // [rsp+118h] [rbp+77h]

  v5 = 0;
  v6 = a3;
  v8 = 104LL * a3;
  v48 = *(VIDPN_MGR **)(a2 + 48);
  v44 = v8;
  if ( !v48 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a4 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v47 = 0LL;
LABEL_6:
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
    v5 = -1071774968;
    goto LABEL_41;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD *)(v11 + 104);
  v47 = v13;
  if ( !v13 )
    goto LABEL_6;
  v15 = *(_QWORD *)(a4 + 96);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD **)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v49 = v17;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v18[3] = v17;
  v18[4] = *(unsigned __int16 *)(v8 + a1 + 68);
  v19 = *(unsigned __int16 *)(v8 + a1 + 70);
  v18[5] = v19;
  if ( !v17 )
  {
    v5 = -1071774967;
    goto LABEL_40;
  }
  v20 = v17 + 6;
  if ( (_QWORD *)*v20 != v20 )
  {
    v21 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    v46 = v21;
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19, 0LL);
      *(_QWORD *)(v22 + 24) = v13;
      *(_QWORD *)(v22 + 32) = v6;
      WdLogEvent5_WdAssertion(v22);
      v5 = -1071774968;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v19, v21);
      v46 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    }
    v23 = (_QWORD *)*v20;
    v45 = (struct DMMVIDPNSOURCEMODE *)v17[18];
    NextMode = 0LL;
    if ( (_QWORD *)*v20 != v20 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v23 - 1);
    if ( NextMode )
    {
      v25 = v44;
      do
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v21);
        v26[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
        v26[4] = *((unsigned int *)NextMode + 21);
        v26[5] = *((unsigned int *)NextMode + 22);
        v27 = *((unsigned int *)NextMode + 23);
        v26[6] = v27;
        v26[7] = *((unsigned int *)NextMode + 24);
        ++*(_DWORD *)(v25 + a1 + 100);
        if ( (!v45 || v45 == NextMode) && BmlDoesTargetModeObeyConstraint(a1, a3, (__int64)NextMode) )
        {
          ++*(_DWORD *)(v25 + a1 + 104);
          v28 = *((_DWORD *)NextMode + 6);
          v60 = v28;
          if ( v45 )
          {
            v5 = 0;
          }
          else
          {
            v5 = VIDPN_MGR::PinVidPnTargetMode(v48, (struct DMMVIDPNTARGETMODESET *const)v17, v28, 1);
            v28 = v60;
          }
          if ( v5 < 0 )
          {
            v5 = 0;
          }
          else
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26) + 24) = v28;
            if ( (int)BmlPinPathContentScaling(a1, a2, a3) >= 0 && (int)BmlPinPathContentRotation(a1, a2, a3) >= 0 )
            {
              v55 = 0;
              v56 = 0;
              GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v46);
              v30 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
              v31 = *(_OWORD *)&GraphicsInfo->Stride;
              LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
              v52 = v30;
              v57 = (int)GraphicsInfo;
              v32 = *(_OWORD *)((char *)NextMode + 72);
              LODWORD(GraphicsInfo) = *((_DWORD *)v46 + 18);
              v53 = v31;
              v33 = *(_OWORD *)((char *)NextMode + 88);
              v50[0] = v32;
              v34 = *(_OWORD *)((char *)NextMode + 104);
              v50[1] = v33;
              v54 = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
              *(_QWORD *)&v33 = *((_QWORD *)NextMode + 15);
              v50[2] = v34;
              v51 = v33;
              v5 = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v50);
              if ( v5 < 0 )
              {
                v41 = WdLogNewEntry5_WdError(v36, v35);
                WdLogEvent5_WdError(v41);
                break;
              }
            }
            v25 = v44;
          }
          v40 = BmlUnPinPartialPathModalityOnPath(a1, a2, a3);
          if ( v40 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
            v42[5] = a2;
            v42[3] = a1;
            v42[4] = v6;
            WdLogEvent5_WdWarning(v42);
            v5 = v40;
            break;
          }
          if ( v45 )
            break;
        }
        else
        {
          WdLogNewEntry5_WdTrace(v27, v26);
        }
        NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v17, NextMode);
      }
      while ( NextMode );
    }
  }
LABEL_40:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v49, 0LL);
LABEL_41:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v47, 0LL);
  return (unsigned int)v5;
}
