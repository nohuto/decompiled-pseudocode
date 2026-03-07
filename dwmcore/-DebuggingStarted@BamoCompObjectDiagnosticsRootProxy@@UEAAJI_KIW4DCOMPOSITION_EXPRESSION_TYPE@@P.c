__int64 __fastcall BamoCompObjectDiagnosticsRootProxy::DebuggingStarted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // rbx
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v12,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v8) = BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::DebuggingStarted(v8 + 8, a2, a3, a4, a5, a6, a7);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v12);
  return (unsigned int)v8;
}
