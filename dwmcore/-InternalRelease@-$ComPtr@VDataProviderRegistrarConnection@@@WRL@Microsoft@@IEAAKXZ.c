/*
 * XREFs of ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B4A60
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x1801B4734 (--1DataProviderManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1801B1E58 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  }
  return result;
}
