/*
 * XREFs of ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x1801C2E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5D20 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801C2D24 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18023C7B0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

char __fastcall CGenericInk::IsSuperWetCompatible(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3)
{
  char v3; // bl
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct IDCompositionDirectInkWetStrokePartner *v11; // [rsp+40h] [rbp+8h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v11 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v11);
    if ( (int)CGenericInk::GetDirectInkWetStroke((CGenericInk *)((char *)this - 72), a2, &v11) < 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0q_EventWriteTransfer(v8, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 15LL);
      goto LABEL_17;
    }
    v12 = 0LL;
    if ( (int)CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v12) >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *))(*(_QWORD *)v12 + 40LL))(
             v12,
             v11,
             a3) )
      {
        v3 = 1;
        goto LABEL_16;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      {
        v10 = 3LL;
        goto LABEL_14;
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    {
      v10 = 16LL;
LABEL_14:
      McTemplateU0q_EventWriteTransfer(v9, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v10);
    }
LABEL_16:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
LABEL_17:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    return v3;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0q_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 14LL);
  return 0;
}
