/*
 * XREFs of ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0140054
 * Callers:
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C00EB208 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C015F084 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000B498 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B554 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformConvert @ 0x1C0019604 (ColorSpaceTransformConvert.c)
 *     ColorSpaceTransformCombine @ 0x1C0061FC4 (ColorSpaceTransformCombine.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013FF54 (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01419EC (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CombineDXGIGammaRamp(
        DXGMONITOR *this,
        struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  _WORD *v8; // rbx
  int DxgiGammaRamp; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  ReferenceCounted *v13; // rsi
  __int64 v14; // rdi
  _WORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  bool v23; // al
  struct _D3DKMDT_GAMMA_RAMP *v24; // r14
  DXGK_GAMMA_RAMP *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  _D3DDDI_GAMMARAMP_TYPE v34; // [rsp+50h] [rbp+8h] BYREF
  ReferenceCounted *v35; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v29);
  }
  v6 = *((_QWORD *)this + 4);
  v7 = *((_DWORD *)this + 11);
  v8 = 0LL;
  v35 = 0LL;
  DxgiGammaRamp = ADAPTER_DISPLAY::GetDxgiGammaRamp(*(DXGADAPTER ***)(v6 + 8), v7, &v35);
  v13 = v35;
  v14 = DxgiGammaRamp;
  if ( DxgiGammaRamp < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v30 + 24) = v14;
LABEL_35:
    WdLogEvent5_WdWarning(v30);
    goto LABEL_36;
  }
  v15 = operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v8 = v15;
  if ( v15 )
  {
    v15[20] = 0;
    *((_QWORD *)v15 + 3) = 0LL;
    *((_QWORD *)v15 + 4) = 0LL;
    *(_QWORD *)v15 = &ReferenceCounted::`vftable';
    *(_QWORD *)v15 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v15 + 2) = 1;
    *((_DWORD *)v15 + 4) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    WdLogEvent5_WdLowResource(v31);
    LODWORD(v14) = -1073741801;
    goto LABEL_36;
  }
  v34 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  LODWORD(v14) = DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v34);
  if ( (int)v14 < 0 )
  {
    v32 = WdLogNewEntry5_WdError(v21, v20);
    WdLogEvent5_WdError(v32);
    goto LABEL_36;
  }
  v22 = (unsigned int)v34;
  v23 = v34 >= D3DDDI_GAMMARAMP_MATRIX_3x4 && v13 && *((_DWORD *)v13 + 4) == 3;
  if ( !a2 )
  {
    if ( !v13 )
      goto LABEL_16;
    v25 = (DXGK_GAMMA_RAMP *)v8;
    if ( v23 )
    {
      LODWORD(v14) = DXGK_GAMMA_RAMP::Initialize((size_t *)v8, (unsigned int)v34, 0LL);
      if ( (int)v14 >= 0 )
      {
        LODWORD(v14) = ColorSpaceTransformConvert(
                         (struct _D3DKMDT_GAMMA_RAMP *)((char *)v13 + 16),
                         (struct _D3DKMDT_GAMMA_RAMP *)(v8 + 8));
        goto LABEL_36;
      }
      goto LABEL_34;
    }
LABEL_28:
    v33 = DXGK_GAMMA_RAMP::Initialize(v25, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v13 + 16));
    goto LABEL_30;
  }
  v24 = (struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16);
  v25 = (DXGK_GAMMA_RAMP *)v8;
  if ( !v13 )
  {
    LODWORD(v14) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v8, v24);
    if ( (int)v14 >= 0 )
    {
LABEL_13:
      *a3 = (struct DXGK_GAMMA_RAMP *)v8;
      return (unsigned int)v14;
    }
    goto LABEL_34;
  }
  if ( (unsigned int)(v24->Type - 4) > 1 )
    goto LABEL_28;
  LODWORD(v14) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v8, v24);
  if ( (int)v14 < 0 )
    goto LABEL_34;
  v33 = ColorSpaceTransformCombine((const void **)v24, (int *)v13 + 4, (__int64)(v8 + 8));
LABEL_30:
  LODWORD(v14) = v33;
  if ( v33 < 0 )
  {
LABEL_34:
    v30 = WdLogNewEntry5_WdWarning(v26, v22, v27);
    goto LABEL_35;
  }
LABEL_36:
  if ( v13 )
    ReferenceCounted::Release(v13, v22);
LABEL_16:
  if ( (int)v14 >= 0 )
    goto LABEL_13;
  *a3 = 0LL;
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)v8, v22);
  return (unsigned int)v14;
}
