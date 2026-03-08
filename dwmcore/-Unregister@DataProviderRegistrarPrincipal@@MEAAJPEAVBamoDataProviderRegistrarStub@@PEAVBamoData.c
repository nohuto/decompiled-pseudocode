/*
 * XREFs of ?Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801DE360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x1801B4AC0 (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 */

__int64 __fastcall DataProviderRegistrarPrincipal::Unregister(
        DataProviderManager **this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  int v4; // r8d

  v4 = DataProviderManager::RemoveDataProvider(this[7], a3);
  if ( v4 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8, (unsigned int)v4);
  return 0LL;
}
