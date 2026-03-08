/*
 * XREFs of ?InitializeProxyThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x180104070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::InitializeProxyThunk(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 48LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
