char __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::ProxyDisposed(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  __int64 v2; // r8
  __int64 v5; // rax

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
    return 0;
  while ( *(_DWORD *)(*(_QWORD *)(v2 + 32) + 36LL) != *((_DWORD *)a2 + 9) )
  {
    v2 = *(_QWORD *)(v2 + 40);
    if ( !v2 )
      return 0;
  }
  *(_BYTE *)(v2 + 58) = 0;
  if ( *((int *)this + 2) <= 0 && Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(this) )
  {
    v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  }
  return 1;
}
