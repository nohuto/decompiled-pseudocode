/*
 * XREFs of ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x18022A570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18022A480 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180283E90 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

char __fastcall CGenericInk::IsSuperWetCompatible(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        char a4)
{
  char v4; // bl
  __int64 v9; // r8
  struct IDCompositionDirectInkFactoryPartner *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !*((_QWORD *)this + 11) || a4 && !*((_QWORD *)this + 17) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        14LL);
    return 0;
  }
  v11 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v11);
  if ( (int)CGenericInk::GetDirectInkWetStroke(this, a2, &v11) < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        15LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    return 0;
  }
  v10[0] = 0LL;
  if ( (int)CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), v10) >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *))(*(_QWORD *)v10[0] + 40LL))(
           v10[0],
           v11,
           a3) )
    {
      v4 = 1;
      goto LABEL_19;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v9 = 3LL;
      goto LABEL_17;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v9 = 16LL;
LABEL_17:
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      v9);
  }
LABEL_19:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v4;
}
