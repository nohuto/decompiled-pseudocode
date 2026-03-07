__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetScalarValue_21(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetScalarValue(a1, **(_DWORD **)a2, **(float **)(a2 + 8), a4);
}
