/*
 * XREFs of ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x1801B8B40
 * Callers:
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD230 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?ProxyDisposed@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@@Z @ 0x1801B76A0 (-ProxyDisposed@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@@Z.c)
 * Callees:
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x1801B6520 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1801B7CA8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 */

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
