__int64 __fastcall BamoCompObjectDiagnosticsRootProxy::AnimationEnded(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 v10; // rbx
  Microsoft::BamoImpl::BamoImplObject *v14; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v14,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v10) = BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::AnimationEnded(
                   v10 + 8,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v14);
  return (unsigned int)v10;
}
