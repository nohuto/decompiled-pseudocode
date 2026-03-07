__int64 __fastcall DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(
        DxgMonitor::MonitorGammaState *this,
        const struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP **a3)
{
  __int64 (__fastcall ***v6)(_QWORD, ReferenceCounted **); // rcx
  int v7; // eax
  int MostCapableColorSpaceTransform; // ebx
  __int64 v9; // rax
  DXGK_GAMMA_RAMP *v10; // rsi
  ReferenceCounted *v11; // rcx
  bool v12; // al
  struct _D3DKMDT_GAMMA_RAMP *v13; // r14
  enum _D3DDDI_GAMMARAMP_TYPE v15; // [rsp+50h] [rbp+30h] BYREF
  ReferenceCounted *v16; // [rsp+60h] [rbp+40h] BYREF
  DXGK_GAMMA_RAMP *v17; // [rsp+68h] [rbp+48h] BYREF

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, ReferenceCounted **))*((_QWORD *)this + 1);
  v16 = 0LL;
  v17 = 0LL;
  v7 = (**v6)(v6, &v16);
  MostCapableColorSpaceTransform = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
  }
  else
  {
    v9 = operator new[](0x30uLL, 0x4D677844u, 256LL);
    if ( v9 )
    {
      *(_WORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_QWORD *)(v9 + 32) = 0LL;
      *(_QWORD *)v9 = &ReferenceCounted::`vftable';
      *(_QWORD *)v9 = &DXGK_GAMMA_RAMP::`vftable';
      *(_DWORD *)(v9 + 8) = 1;
      *(_DWORD *)(v9 + 16) = 1;
    }
    auto_rc<DXGK_GAMMA_RAMP>::reset(&v17, (ReferenceCounted *)v9);
    v10 = v17;
    if ( v17 )
    {
      v15 = D3DDDI_GAMMARAMP_UNINITIALIZED;
      MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v15);
      if ( MostCapableColorSpaceTransform < 0 )
      {
        WdLogSingleEntry0(2LL);
      }
      else
      {
        v11 = v16;
        v12 = v15 >= D3DDDI_GAMMARAMP_MATRIX_3x4 && v16 && *((_DWORD *)v16 + 4) == 3;
        if ( a2 )
        {
          v13 = (struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16);
          if ( v16 )
          {
            if ( (unsigned int)(v13->Type - 4) <= 1 )
            {
              MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v10, v13);
              if ( MostCapableColorSpaceTransform >= 0 )
              {
                MostCapableColorSpaceTransform = ColorSpaceTransformCombine(
                                                   (const void **)v13,
                                                   (int *)v16 + 4,
                                                   ((unsigned __int64)v10 + 16) & -(__int64)(v10 != 0LL));
                if ( MostCapableColorSpaceTransform >= 0 )
                  goto LABEL_13;
              }
            }
            else
            {
              MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(
                                                 v10,
                                                 (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v16 + 16));
              if ( MostCapableColorSpaceTransform >= 0 )
                goto LABEL_13;
            }
          }
          else
          {
            MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v10, v13);
            if ( MostCapableColorSpaceTransform >= 0 )
            {
LABEL_13:
              v11 = v16;
LABEL_14:
              v17 = 0LL;
              *a3 = v10;
              goto LABEL_15;
            }
          }
        }
        else
        {
          if ( !v16 )
            goto LABEL_14;
          if ( v12 )
          {
            MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v10, v15, 0LL);
            if ( MostCapableColorSpaceTransform >= 0 )
            {
              MostCapableColorSpaceTransform = ColorSpaceTransformConvert(
                                                 (const struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v16 + 16) & -(__int64)(v16 != 0LL)),
                                                 (struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v10 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64)));
              if ( MostCapableColorSpaceTransform >= 0 )
                goto LABEL_13;
            }
          }
          else
          {
            MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(
                                               v10,
                                               (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v16 + 16));
            if ( MostCapableColorSpaceTransform >= 0 )
              goto LABEL_13;
          }
        }
        WdLogSingleEntry0(3LL);
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      MostCapableColorSpaceTransform = -1073741801;
    }
  }
  v11 = v16;
LABEL_15:
  if ( v11 )
    ReferenceCounted::Release(v11);
  v16 = 0LL;
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v17, 0LL);
  return (unsigned int)MostCapableColorSpaceTransform;
}
