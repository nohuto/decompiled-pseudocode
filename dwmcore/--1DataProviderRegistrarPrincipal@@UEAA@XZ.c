/*
 * XREFs of ??1DataProviderRegistrarPrincipal@@UEAA@XZ @ 0x1801DD6F0
 * Callers:
 *     ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x1801DD890 (--_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall DataProviderRegistrarPrincipal::~DataProviderRegistrarPrincipal(
        DataProviderRegistrarPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx

  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &DataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
  v4 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v4 )
    Microsoft::BamoImpl::BamoImplObject::Release(v4, a2, a3, a4);
}
