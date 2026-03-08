/*
 * XREFs of ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180103270
 * Callers:
 *     ?Thunk_Materialize_BamoDataProviderProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180103260 (-Thunk_Materialize_BamoDataProviderProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerI.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0DataProviderProxy@@QEAA@XZ @ 0x1800AE424 (--0DataProviderProxy@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1801038E0 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataProviderProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  DataProviderProxy *v6; // rax
  DataProviderProxy *v7; // rbx
  __int64 v8; // rdx
  DataProviderProxy *v9; // rbx
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-38h]
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v17,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
    a3,
    a4);
  v6 = (DataProviderProxy *)DefaultHeap::AllocClear(0xA8uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v6, 0, 0xA8uLL);
  v9 = DataProviderProxy::DataProviderProxy(v7);
  if ( !v9 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x26C5,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL,
      v16);
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v17,
    v8,
    v10,
    v11);
  v12 = (*(__int64 (__fastcall **)(DataProviderProxy *))(*(_QWORD *)v9 + 56LL))(v9);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(v12 + 16, this);
  *(_DWORD *)(v12 + 24) = a2;
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v13 + 40LL))(
          v13,
          *((unsigned int *)this + 9),
          a2,
          v12);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3BCD,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v14,
      v16);
  return 0LL;
}
