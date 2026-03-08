/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x1801BA6A4
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800F87E0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800515A8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800F88D0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::HandleDDAArrivalOrDeparture(CRenderTargetManager *this)
{
  __int64 *v2; // r14
  int v3; // edi
  __int64 *i; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  *((_BYTE *)this + 576) = 1;
  v2 = (__int64 *)*((_QWORD *)this + 2);
  v3 = 0;
  for ( i = (__int64 *)*((_QWORD *)this + 1); i != v2; ++i )
  {
    v5 = *i;
    v10 = 0LL;
    if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v5, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v10) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
      v8 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1D0u, 0LL);
      if ( !v3 || v3 >= 0 && v8 < 0 )
        v3 = v8;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
