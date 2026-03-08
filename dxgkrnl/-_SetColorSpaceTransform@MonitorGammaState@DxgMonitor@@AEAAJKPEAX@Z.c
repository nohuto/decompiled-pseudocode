/*
 * XREFs of ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C0180E6C
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0180A58 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ColorSpaceTransformConvert @ 0x1C0004808 (ColorSpaceTransformConvert.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0004868 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x1C0004914 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0004938 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0004A10 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z @ 0x1C0180478 (-_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01810AC (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C018110C (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(
        ReferenceCounted **this,
        unsigned int a2,
        unsigned int *a3)
{
  int MostCapableColorSpaceTransform; // eax
  int v7; // ebx
  int v8; // eax
  enum _D3DDDI_GAMMARAMP_TYPE v9; // ebx
  __int64 v10; // rax
  DXGK_GAMMA_RAMP *v11; // r15
  enum _D3DDDI_GAMMARAMP_TYPE v12; // ecx
  __int64 v13; // rax
  struct DXGK_GAMMA_RAMP **v14; // rax
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  DXGK_GAMMA_RAMP *v20; // [rsp+20h] [rbp-20h] BYREF
  struct _D3DKMDT_GAMMA_RAMP v21; // [rsp+28h] [rbp-18h] BYREF
  DXGFASTMUTEX *v22; // [rsp+80h] [rbp+40h] BYREF
  ReferenceCounted *v23; // [rsp+88h] [rbp+48h] BYREF

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  LODWORD(v22) = 0;
  v20 = 0LL;
  v23 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
                                     (DxgMonitor::MonitorGammaState *)this,
                                     (enum _D3DDDI_GAMMARAMP_TYPE *)&v22);
  v7 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
    goto LABEL_20;
  }
  if ( a2 < 0x18040 )
  {
    v7 = -1073741789;
    goto LABEL_20;
  }
  if ( (*(unsigned int (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this) != *a3 )
  {
    v17 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this);
    v18 = (int)*a3;
    v19 = v17;
LABEL_29:
    WdLogSingleEntry2(3LL, v18, v19);
    v7 = -1073741811;
    goto LABEL_20;
  }
  if ( !DxgMonitor::MonitorGammaState::_IsWireFormatMatch(
          (DxgMonitor::MonitorGammaState *)this,
          (const struct _OUTPUT_WIRE_FORMAT *)(a3 + 1)) )
  {
    v19 = a3[2];
    v18 = (int)a3[1];
    goto LABEL_29;
  }
  v8 = a3[3];
  v9 = (int)v22;
  if ( v8 != (_DWORD)v22 && (int)v22 < 4 && ((_DWORD)v22 == 3 || v8 > (int)v22) )
  {
    v19 = (int)v22;
    v18 = (int)a3[3];
    goto LABEL_29;
  }
  v10 = operator new[](0x30uLL, 0x4D677844u, 256LL);
  if ( v10 )
  {
    *(_WORD *)(v10 + 40) = 0;
    *(_QWORD *)v10 = &ReferenceCounted::`vftable';
    *(_QWORD *)v10 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v10 + 8) = 1;
    *(_DWORD *)(v10 + 16) = 1;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v20, (ReferenceCounted *)v10);
  v11 = v20;
  if ( v20 )
  {
    v7 = DXGK_GAMMA_RAMP::Initialize(v20, v9, 0LL);
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(3LL, a3);
    }
    else
    {
      v12 = a3[3];
      *(_QWORD *)&v21.Type = (unsigned int)v12;
      v21.DataSize = GetSizeFromGammaRampType(v12);
      v21.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)(a3 + 4);
      v7 = ColorSpaceTransformConvert(
             &v21,
             (struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v11 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64)));
      if ( v7 < 0 )
        goto LABEL_33;
      v13 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 32LL))(*this);
      if ( (*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) & 0x400000) != 0
        && *((_DWORD *)v11 + 4) == 2 )
      {
        *(_WORD *)(*((_QWORD *)v11 + 4) + 510LL) ^= *((_BYTE *)this + 136) == 0;
        *((_BYTE *)this + 136) = *((_BYTE *)this + 136) == 0;
      }
      v14 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v23);
      v7 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp((DxgMonitor::MonitorGammaState *)this, v11, v14);
      if ( v7 < 0 )
      {
LABEL_33:
        WdLogSingleEntry0(3LL);
      }
      else
      {
        if ( !v23 )
          WdLogSingleEntry0(1LL);
        v15 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 24LL))(*this);
        v7 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v15 + 88LL))(v15, v23);
        MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v22, (struct DXGFASTMUTEX *)(this + 10));
        if ( v7 >= 0 )
        {
          v20 = 0LL;
          auto_rc<DXGK_GAMMA_RAMP>::reset(this + 16, v11);
        }
        MUTEX_LOCK::~MUTEX_LOCK(&v22);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, a3);
    v7 = -1073741801;
  }
LABEL_20:
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v23, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v20, 0LL);
  return (unsigned int)v7;
}
