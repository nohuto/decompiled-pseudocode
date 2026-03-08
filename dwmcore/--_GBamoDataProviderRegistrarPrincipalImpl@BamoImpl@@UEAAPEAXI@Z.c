/*
 * XREFs of ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801DD780
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoDataProviderRegistrarPrincipalImpl *__fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v5 = a2;
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 2);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
