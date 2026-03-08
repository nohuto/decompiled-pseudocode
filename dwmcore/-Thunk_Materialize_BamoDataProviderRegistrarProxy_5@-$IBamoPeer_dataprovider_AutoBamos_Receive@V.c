/*
 * XREFs of ?Thunk_Materialize_BamoDataProviderRegistrarProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801DD680
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoDataProviderRegistrarProxy_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v4,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
    a3,
    a4);
  wil::details::in1diag3::FailFast_Hr(
    retaddr,
    9949LL,
    (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x80004001LL,
    v4[0]);
}
