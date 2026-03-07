void __fastcall __noreturn IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoCompObjectDiagnosticsProxy_34(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v4,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
    a3,
    a4);
  ModuleFailFastForHRESULT(2147549183LL, retaddr);
}
