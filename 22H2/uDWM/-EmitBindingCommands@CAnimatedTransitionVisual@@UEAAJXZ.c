/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180001C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180001EE8 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x180002094 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800029F8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x180002A24 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x180002A68 (-Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x180002AFC (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180002B30 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003FB84 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ddqqqqqqp_EtwEventWriteTransfer @ 0x1800A8FD8 (McTemplateU0ddqqqqqqp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CEffectGroupProxy **this)
{
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // r8d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  void *v23; // [rsp+28h] [rbp-70h]
  struct CBaseTransformProxy *v24[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v25; // [rsp+70h] [rbp-28h]

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources((CAnimatedTransitionVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x73Au, v23);
  }
  else
  {
    v4 = 0;
    v25 = 0LL;
    *(_OWORD *)v24 = 0LL;
    if ( this[76] || this[77] )
    {
      v5 = CTranslateTransformProxy::Update(this[85], 0.0, 0.0);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x748u, v23);
        return v3;
      }
      v4 = 1;
      v24[0] = this[85];
    }
    if ( this[78] || this[79] )
    {
      v19 = CScaleTransformProxy::Update(this[84], 1.0, 1.0, 0.0, 0.0);
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x750u, v23);
        return v3;
      }
      v20 = v4++;
      v24[v20] = this[84];
    }
    if ( this[80] || this[81] )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[86] + 2) + 16LL) + 984LL))(
              *(_QWORD *)(*((_QWORD *)this[86] + 2) + 16LL),
              *(unsigned int *)(*((_QWORD *)this[86] + 2) + 24LL));
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x758u, v23);
        return v3;
      }
      v22 = v4++;
      v24[v22] = this[86];
    }
    v6 = CTransformGroupProxy::Update(this[87], v24, v4);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x75Du, v23);
    }
    else
    {
      v8 = CEffectGroupProxy::Update(this[83], *((float *)this + 230), v7, 0LL);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x75Fu, v23);
      }
      else
      {
        v9 = CVisualProxy::SetEffect(*((CVisualProxy **)this[90] + 2), this[83]);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x761u, v23);
        }
        else
        {
          v10 = CVisualProxy::SetTransform(*((CVisualProxy **)this[90] + 2), this[87]);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x763u, v23);
          }
          else
          {
            v11 = CAnimatedTransitionVisual::_BindIfPresent(this, 0LL, this[85], 5LL);
            v3 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x765u, v23);
            }
            else
            {
              v12 = CAnimatedTransitionVisual::_BindIfPresent(this, 1LL, this[85], 6LL);
              v3 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x766u, v23);
              }
              else
              {
                v13 = CAnimatedTransitionVisual::_BindIfPresent(this, 2LL, this[84], 3LL);
                v3 = v13;
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x767u, v23);
                }
                else
                {
                  v14 = CAnimatedTransitionVisual::_BindIfPresent(this, 3LL, this[84], 4LL);
                  v3 = v14;
                  if ( v14 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x768u, v23);
                  }
                  else
                  {
                    v15 = CAnimatedTransitionVisual::_BindIfPresent(this, 4LL, this[86], 1LL);
                    v3 = v15;
                    if ( v15 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x769u, v23);
                    }
                    else
                    {
                      v16 = CAnimatedTransitionVisual::_BindIfPresent(this, 5LL, this[86], 2LL);
                      v3 = v16;
                      if ( v16 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x76Au, v23);
                      }
                      else
                      {
                        v17 = CAnimatedTransitionVisual::_BindIfPresent(this, 6LL, this[83], 0LL);
                        v3 = v17;
                        if ( v17 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x76Bu, v23);
                        }
                        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                        {
                          McTemplateU0ddqqqqqqp_EtwEventWriteTransfer(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                            *((_QWORD *)this[86] + 2),
                            *((_DWORD *)this + 182),
                            *((_DWORD *)this + 183),
                            *(_DWORD *)(*((_QWORD *)this[3] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[83] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[87] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[85] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[84] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[86] + 2) + 24LL),
                            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
