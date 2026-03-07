bool __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  int v5; // ebx

  v4 = *((_QWORD *)this + 4);
  v5 = 0;
  if ( !v4 )
  {
LABEL_8:
    Microsoft::BamoImpl::BamoPrincipalImpl::Dispose(this, a2, a3, a4);
    return v5 == 0;
  }
  do
  {
    if ( *(_BYTE *)(v4 + 56) )
    {
      Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(this, (struct Microsoft::BamoImpl::BamoStubImpl *)v4, 1);
    }
    else if ( !*(_BYTE *)(v4 + 58) )
    {
      goto LABEL_6;
    }
    ++v5;
LABEL_6:
    v4 = *(_QWORD *)(v4 + 40);
  }
  while ( v4 );
  if ( !v5 )
    goto LABEL_8;
  return v5 == 0;
}
