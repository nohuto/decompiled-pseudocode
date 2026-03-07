__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  bool v2; // di
  unsigned int v3; // esi
  __int64 v5; // rax
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, this[2]);
  v3 = Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)this);
  if ( !v3 )
    v2 = Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies((Microsoft::BamoImpl::BamoPrincipalImpl *)this);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v6);
  if ( v2 )
  {
    v5 = (*((__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector **))*this + 7))(this);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  }
  return v3;
}
