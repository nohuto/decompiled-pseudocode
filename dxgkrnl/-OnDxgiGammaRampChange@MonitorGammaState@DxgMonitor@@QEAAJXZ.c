/*
 * XREFs of ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C0179D7C
 * Callers:
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C0179CDC (MonitorNotifyDXGIGammaRampChange.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x1C0004914 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0004938 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0004974 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01810AC (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C018110C (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(DxgMonitor::MonitorGammaState *this)
{
  DXGK_GAMMA_RAMP *v1; // rbx
  int MostCapableColorSpaceTransform; // eax
  int v4; // edi
  __int64 v5; // rax
  struct DXGK_GAMMA_RAMP **v6; // rax
  __int64 v7; // rax
  DXGFASTMUTEX *v9[2]; // [rsp+20h] [rbp-10h] BYREF
  _D3DDDI_GAMMARAMP_TYPE v10; // [rsp+58h] [rbp+28h] BYREF
  ReferenceCounted *v11; // [rsp+60h] [rbp+30h] BYREF
  DXGK_GAMMA_RAMP *v12; // [rsp+68h] [rbp+38h] BYREF

  v10 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v1 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v10);
  v4 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
  }
  else
  {
    if ( *((_QWORD *)this + 16) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v9, (DxgMonitor::MonitorGammaState *)((char *)this + 80));
      v5 = operator new[](0x30uLL, 0x4D677844u, 256LL);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 24) = 0LL;
        *(_QWORD *)(v5 + 32) = 0LL;
        *(_QWORD *)v5 = &ReferenceCounted::`vftable';
        *(_QWORD *)v5 = &DXGK_GAMMA_RAMP::`vftable';
        *(_DWORD *)(v5 + 8) = 1;
        *(_WORD *)(v5 + 40) = 0;
        *(_DWORD *)(v5 + 16) = 1;
      }
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v12, (ReferenceCounted *)v5);
      v1 = v12;
      if ( !v12 )
      {
        WdLogSingleEntry0(6LL);
        MUTEX_LOCK::~MUTEX_LOCK(v9);
        v4 = -1073741801;
        goto LABEL_11;
      }
      DXGK_GAMMA_RAMP::Initialize(v12, (const struct _D3DKMDT_GAMMA_RAMP *)(*((_QWORD *)this + 16) + 16LL));
      MUTEX_LOCK::~MUTEX_LOCK(v9);
    }
    v6 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v11);
    v4 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(this, v1, v6);
    if ( v4 < 0 )
    {
      WdLogSingleEntry0(3LL);
    }
    else
    {
      if ( !v11 )
        WdLogSingleEntry0(1LL);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v4 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v7 + 88LL))(v7, v11);
    }
  }
LABEL_11:
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v11, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v12, 0LL);
  return (unsigned int)v4;
}
