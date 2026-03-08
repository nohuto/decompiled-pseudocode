/*
 * XREFs of EtwpApplyTransientFilters @ 0x1409F2338
 * Callers:
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x140690060 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x1409F1F18 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409F2064 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F2138 (EtwpApplyPackageIdFilter.c)
 */

bool __fastcall EtwpApplyTransientFilters(__int64 a1, __int64 a2)
{
  unsigned int *v5; // rcx
  unsigned int v6; // edx
  int v7; // eax
  _DWORD *i; // rcx

  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 1;
  v5 = *(unsigned int **)(a2 + 8);
  if ( v5 )
  {
    v6 = *v5;
    v7 = 0;
    if ( !*v5 )
      return 0;
    for ( i = v5 + 1; *i != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 1088LL); ++i )
    {
      if ( ++v7 >= v6 )
        return 0;
    }
  }
  if ( !EtwpApplyExeFilter(a1, *(_WORD **)(a2 + 16)) || !EtwpApplyContainerFilter(a1, *(_WORD **)(a2 + 40)) )
    return 0;
  return EtwpApplyPackageIdFilter(a1, *(_WORD **)(a2 + 24), *(_WORD **)(a2 + 32)) != 0;
}
