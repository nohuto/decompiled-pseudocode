DataProviderRegistrarPrincipal *__fastcall DataProviderRegistrarPrincipal::DataProviderRegistrarPrincipal(
        DataProviderRegistrarPrincipal *this,
        struct dataprovider_AutoBamos::BamoConnection *a2)
{
  __int64 v3; // rcx

  *(_QWORD *)this = &BamoDataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
  *((_DWORD *)this + 6) = 1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(struct dataprovider_AutoBamos::BamoConnection *))(*(_QWORD *)a2 + 56LL))(a2)
                 + 96);
  *((_QWORD *)this + 4) = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoDataProviderRegistrarPrincipalImpl::`vftable';
  *(_QWORD *)this = &DataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
  return this;
}
