/*
 * XREFs of IommuFlushDomainVaList @ 0x1409327C0
 * Callers:
 *     <none>
 * Callees:
 *     IommupHvFlushDeviceDomainVaList @ 0x14052268C (IommupHvFlushDeviceDomainVaList.c)
 */

__int64 __fastcall IommuFlushDomainVaList(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( HalpHvIommu )
    return IommupHvFlushDeviceDomainVaList(*(_DWORD *)(a1 + 48), *(_BYTE *)(a1 + 52), a3, a4);
  return 3221225474LL;
}
