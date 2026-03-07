__int64 __fastcall BamoCompObjectDiagnosticsRootProxy::AnimationStarted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 v9; // rbx
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v9) = BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::AnimationStarted(v9 + 8, a2, a3, a4, a5, a6, a7, a8);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v13);
  return (unsigned int)v9;
}
