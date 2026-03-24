/*
 * XREFs of ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C015F084
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C015EFF0 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000B524 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B554 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformConvert @ 0x1C0019604 (ColorSpaceTransformConvert.c)
 *     Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage @ 0x1C0025C44 (Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0140054 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01419EC (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143DE0 (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SetColorSpaceTransform(DXGMONITOR *this, __int64 a2, int *a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rsi
  int MostCapableColorSpaceTransform; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // r14
  enum _D3DDDI_GAMMARAMP_TYPE v29; // eax
  char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  ReferenceCounted *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  ReferenceCounted *v54; // rcx
  __int64 v55; // rax
  struct _D3DKMDT_GAMMA_RAMP v57; // [rsp+20h] [rbp-38h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v58; // [rsp+60h] [rbp+8h] BYREF
  ReferenceCounted *v59; // [rsp+70h] [rbp+18h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 4);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
    v7 = *((_QWORD *)this + 4);
  }
  v9 = *(_QWORD *)(v7 + 8);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*(_QWORD *)(v9 + 16) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  v58 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v12 = 0LL;
  v59 = 0LL;
  Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage();
  MostCapableColorSpaceTransform = DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v58);
  v17 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v17;
    goto LABEL_11;
  }
  if ( v4 < 0x18040 )
  {
    LODWORD(v17) = -1073741789;
    return (unsigned int)v17;
  }
  if ( *((_DWORD *)this + 187) != *a3 )
  {
    LODWORD(v17) = -1073741811;
    v20 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v20 + 24) = *a3;
    v21 = *((int *)this + 187);
LABEL_16:
    *(_QWORD *)(v20 + 32) = v21;
LABEL_17:
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v17;
  }
  v22 = *((_DWORD *)this + 188);
  v23 = 0;
  v24 = (unsigned __int8)v22 >> 2;
  if ( (unsigned __int8)v22 >> 2 && !a3[1]
    || (v24 = (v22 >> 8) & 0x3F, ((v22 >> 8) & 0x3F) != 0) && a3[1] == 1
    || (v24 = (v22 >> 14) & 0x3F, ((v22 >> 14) & 0x3F) != 0) && a3[1] == 2
    || (v24 = (v22 >> 20) & 0x3F, ((v22 >> 20) & 0x3F) != 0) && a3[1] == 3 )
  {
    v23 = v24;
  }
  else
  {
    v25 = v22 >> 26;
    if ( v25 && a3[1] == 4 )
      v23 = v25;
  }
  v26 = v23 - 1;
  if ( (_DWORD)v26 )
  {
    v26 = (unsigned int)(v26 - 1);
    if ( (_DWORD)v26 )
    {
      v26 = (unsigned int)(v26 - 2);
      if ( (_DWORD)v26 )
      {
        v26 = (unsigned int)(v26 - 4);
        if ( (_DWORD)v26 )
        {
          v26 = (unsigned int)(v26 - 8);
          if ( (_DWORD)v26 )
          {
            if ( (_DWORD)v26 != 16 )
            {
LABEL_43:
              LODWORD(v17) = -1073741811;
              v20 = WdLogNewEntry5_WdWarning(v26, v24, v16);
              *(_QWORD *)(v20 + 24) = a3[1];
              v21 = (unsigned int)a3[2];
              goto LABEL_16;
            }
            v27 = a3[2] == 16;
          }
          else
          {
            v27 = a3[2] == 14;
          }
        }
        else
        {
          v27 = a3[2] == 12;
        }
      }
      else
      {
        v27 = a3[2] == 10;
      }
    }
    else
    {
      v27 = a3[2] == 8;
    }
  }
  else
  {
    v27 = a3[2] == 6;
  }
  if ( !v27 )
    goto LABEL_43;
  v28 = v58;
  v29 = a3[3];
  if ( v58 < D3DDDI_GAMMARAMP_MATRIX_3x4 && v29 != v58 && (v58 == D3DDDI_GAMMARAMP_DXGI_1 || v29 > v58) )
  {
    LODWORD(v17) = -1073741811;
    v20 = WdLogNewEntry5_WdWarning(v26, v24, v16);
    *(_QWORD *)(v20 + 24) = a3[3];
    *(_QWORD *)(v20 + 32) = v28;
    goto LABEL_17;
  }
  v30 = (char *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v12 = v30;
  if ( v30 )
  {
    *((_WORD *)v30 + 20) = 0;
    *((_QWORD *)v30 + 3) = 0LL;
    *((_QWORD *)v30 + 4) = 0LL;
    *(_QWORD *)v30 = &ReferenceCounted::`vftable';
    *(_QWORD *)v30 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v30 + 2) = 1;
    *((_DWORD *)v30 + 4) = 1;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v35 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
    *(_QWORD *)(v35 + 24) = a3;
    WdLogEvent5_WdLowResource(v35);
    LODWORD(v17) = -1073741801;
    return (unsigned int)v17;
  }
  LODWORD(v17) = DXGK_GAMMA_RAMP::Initialize((size_t *)v12, (unsigned int)v28, 0LL);
  if ( (int)v17 >= 0 )
  {
    v39 = (unsigned int)a3[3];
    *(_QWORD *)&v57.Type = (unsigned int)v39;
    v57.DataSize = GetSizeFromGammaRampType(v39);
    v57.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)(a3 + 4);
    LODWORD(v17) = ColorSpaceTransformConvert(&v57, (struct _D3DKMDT_GAMMA_RAMP *)(v12 + 16));
    if ( (int)v17 >= 0 )
    {
      if ( (**(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 2600LL) & 0x40000) != 0
        && *((_DWORD *)v12 + 4) == 2 )
      {
        *(_WORD *)(*((_QWORD *)v12 + 4) + 510LL) ^= *((_BYTE *)this + 1248) == 0;
        *((_BYTE *)this + 1248) = *((_BYTE *)this + 1248) == 0;
      }
      v43 = DXGMONITOR::_CombineDXGIGammaRamp(this, (struct DXGK_GAMMA_RAMP *)v12, &v59);
      v47 = v59;
      LODWORD(v17) = v43;
      if ( v43 >= 0 )
      {
        if ( !v59 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v45, v44);
          WdLogEvent5_WdAssertion(v49);
        }
        LODWORD(v17) = DmmUpdateGammaRampOnVidPnTarget(
                         *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL),
                         *((unsigned int *)this + 11),
                         v47);
        if ( this == (DXGMONITOR *)-1184LL )
        {
          v52 = WdLogNewEntry5_WdAssertion(v51, v50);
          WdLogEvent5_WdAssertion(v52);
        }
        KeAcquireGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1184));
        if ( (int)v17 >= 0 )
        {
          v54 = (ReferenceCounted *)*((_QWORD *)this + 155);
          if ( v54 )
            ReferenceCounted::Release(v54, v53);
          *((_QWORD *)this + 155) = v12;
        }
        if ( this == (DXGMONITOR *)-1184LL )
        {
          v55 = WdLogNewEntry5_WdAssertion(v54, v53);
          WdLogEvent5_WdAssertion(v55);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1184));
      }
      else
      {
        v48 = WdLogNewEntry5_WdWarning(v45, v44, v46);
        WdLogEvent5_WdWarning(v48);
      }
      if ( v47 )
        ReferenceCounted::Release(v47, v19);
      goto LABEL_76;
    }
    v18 = WdLogNewEntry5_WdWarning(v41, v40, v42);
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v18 + 24) = a3;
  }
LABEL_11:
  WdLogEvent5_WdWarning(v18);
LABEL_76:
  if ( (int)v17 < 0 && v12 )
    ReferenceCounted::Release((ReferenceCounted *)v12, v19);
  return (unsigned int)v17;
}
