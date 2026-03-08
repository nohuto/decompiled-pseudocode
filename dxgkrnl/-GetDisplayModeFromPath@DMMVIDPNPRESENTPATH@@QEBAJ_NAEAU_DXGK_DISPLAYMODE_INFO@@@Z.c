/*
 * XREFs of ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016BD68
 * Callers:
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016BCC4 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000237C (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0002478 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x1C01689F8 (-DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C016CC80 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
        DMMVIDPNPRESENTPATH *this,
        char a2,
        struct _D3DDDI_RATIONAL *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  _DWORD *v7; // rbp
  int v8; // r15d
  __int64 v9; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v10; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v11; // r12d
  int v12; // ecx
  UINT Numerator; // edx
  int v14; // eax
  unsigned int v15; // edx
  struct _D3DDDI_RATIONAL v16; // rax
  __int64 v17; // r8
  unsigned int v18; // ebx
  struct DMMVIDPNTARGETMODESET *v20; // [rsp+20h] [rbp-48h] BYREF
  struct DMMVIDPNTARGETMODESET *v21; // [rsp+28h] [rbp-40h] BYREF
  struct _D3DDDI_RATIONAL v22; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+20h]

  v3 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v3 + 40) )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v3 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v6 + 8) )
    WdLogSingleEntry0(1LL);
  v24 = *(_QWORD *)(v6 + 8);
  v21 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 11));
  v7 = (_DWORD *)*((_QWORD *)v21 + 18);
  if ( v7 )
  {
    v8 = v7[18];
    if ( v8 == 2 )
      WdLogSingleEntry0(1LL);
    v20 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
    v9 = *((_QWORD *)v20 + 18);
    if ( v9
      && (v10 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
          DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v10))
      && (v11 = *((_DWORD *)this + 28), DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, v11)) )
    {
      v12 = 16;
      Numerator = a3[5].Numerator;
      a3->Numerator = v7[19];
      a3->Denominator = v7[20];
      a3[1].Numerator = v7[24];
      v14 = 0;
      if ( (unsigned int)(v8 - 3) > 1 )
        v12 = 0;
      v15 = v12 & 0xFFFFFFDF | Numerator & 0xFFFFFFCF;
      if ( v8 == 4 )
        v14 = 32;
      a3[5].Numerator = v14 | v15;
      a3[2] = *(struct _D3DDDI_RATIONAL *)(v9 + 152);
      a3[3].Numerator = (int)(*(_DWORD *)(v9 + 120) << 29) >> 29;
      a3[3].Denominator = v10;
      ConvertDMMScalingToGdiScaling((unsigned int)v11, &a3[4]);
      v16 = *(struct _D3DDDI_RATIONAL *)(v9 + 92);
      if ( ((*(_DWORD *)(v9 + 120) >> 3) & 0x3F) != 0 )
      {
        v22.Numerator = *(_QWORD *)(v9 + 92);
        v22.Denominator = ((*(_DWORD *)(v9 + 120) >> 3) & 0x3F) * v16.Denominator;
        v16 = v22;
      }
      a3[7] = v16;
      a3[8] = *(struct _D3DDDI_RATIONAL *)(v9 + 144);
      a3[9].Numerator = *(_DWORD *)(v9 + 160);
      a3[1].Denominator = DmmMapVSyncFromRationalToInteger(
                            a3 + 2,
                            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v9 + 120) << 29) >> 29),
                            0LL);
      if ( a2 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 112LL);
        if ( v17 )
          a3[9].Denominator = ADAPTER_DISPLAY::DetermineHdrPixelFormatFromColorSpace(v24, *(_DWORD *)(v9 + 136), v17);
        else
          a3[9].Denominator = 0;
      }
      v18 = 0;
    }
    else
    {
      v18 = 1075708679;
      WdLogSingleEntry2(2LL, this, 1075708679LL);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v20, 0LL);
  }
  else
  {
    v18 = 1075708679;
    WdLogSingleEntry2(2LL, this, 1075708679LL);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v21, 0LL);
  return v18;
}
