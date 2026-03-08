/*
 * XREFs of ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x18022ACB0
 * Callers:
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1802298E0 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?ProcessRoutingInfo@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_ROUTINGINFO@@@Z @ 0x18022A800 (-ProcessRoutingInfo@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_ROUTINGINFO@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180283E90 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::SetContextMsgRoutingInfo(CGenericInk *this, struct CD3DDevice *a2)
{
  int DirectInkFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 360) )
  {
    v11 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v11);
    v4 = DirectInkFactory;
    if ( DirectInkFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x221,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)DirectInkFactory);
LABEL_9:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
      return v4;
    }
    v5 = *(_QWORD *)v11;
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, __int64 *))(v5 + 64))(v11, &v10);
    v4 = v6;
    if ( v6 < 0 )
    {
      v7 = 548LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v10);
      goto LABEL_9;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 32LL))(v10, (char *)this + 368);
    v4 = v6;
    if ( v6 < 0 )
    {
      v7 = 549LL;
      goto LABEL_8;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v10);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  }
  return 0LL;
}
