/*
 * XREFs of ?Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801B6EB4
 * Callers:
 *     ?Thunk_Materialize_BamoCompObjectDiagnosticsRootProxy_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B88F0 (-Thunk_Materialize_BamoCompObjectDiagnosticsRootProxy_34@-$IBamoPeer_DiagnosticCallbacks_AutoBam.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1801038E0 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoCompObjectDiagnosticsRootProxy@@@Z @ 0x1801E2690 (-CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBam.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::Materialize_BamoCompObjectDiagnosticsRootProxy(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  struct DiagnosticCallbacks_AutoBamos::BamoPeer *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  const char *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-38h]
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct BamoCompObjectDiagnosticsRootProxy *v19; // [rsp+60h] [rbp+8h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v17,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
    a3,
    a4);
  v7 = CreateCompObjectDiagnosticsRootProxy(v6, &v19);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      3941LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v7,
      v16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v17,
    v8,
    v9,
    v10);
  if ( !v19 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      3946LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      v11);
  v12 = (*(__int64 (__fastcall **)(struct BamoCompObjectDiagnosticsRootProxy *))(*(_QWORD *)v19 + 56LL))(v19);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v12 + 16),
    (void (__fastcall ***)(_QWORD))this);
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
      5235LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v14,
      v16);
  return 0LL;
}
