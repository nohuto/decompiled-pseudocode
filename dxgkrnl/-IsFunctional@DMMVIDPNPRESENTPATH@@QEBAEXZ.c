/*
 * XREFs of ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00029F4
 * Callers:
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016AFF0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C03B4EEC (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000237C (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0002478 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsFunctional(DMMVIDPNPRESENTPATH *this)
{
  struct DMMVIDPNTARGETMODESET *v2; // rax
  struct DMMVIDPNTARGETMODESET *v3; // rax
  struct DMMVIDPNTARGETMODESET *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 11));
  v5 = v2;
  if ( *((struct DMMVIDPNTARGETMODESET **)v2 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v2 + 48)
    || !*((_QWORD *)v2 + 18) )
  {
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v5, 0LL);
  }
  else
  {
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v5, 0LL);
    v3 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
    v5 = v3;
    if ( *((struct DMMVIDPNTARGETMODESET **)v3 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v3 + 48)
      || !*((_QWORD *)v3 + 18) )
    {
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v5, 0LL);
    }
    else
    {
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v5, 0LL);
      if ( DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(
             this,
             *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)this + 28)) )
      {
        return DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(*((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this
                                                                    + 29));
      }
    }
  }
  return 0;
}
