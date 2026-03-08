/*
 * XREFs of IommuDomainConfigure @ 0x1409326E0
 * Callers:
 *     <none>
 * Callees:
 *     IommupHvConfigureDeviceDomain @ 0x1405222C4 (IommupHvConfigureDeviceDomain.c)
 */

__int64 __fastcall IommuDomainConfigure(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  if ( HalpHvParaVirtIommuDomain )
    return IommupHvConfigureDeviceDomain(*(_DWORD *)(a1 + 48), *(_BYTE *)(a1 + 52), a3, a2);
  return 3221225659LL;
}
