/*
 * XREFs of HalpIommuGetDmarptRootAddress @ 0x14037C9D0
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 *     IommupDomainAttachPasidDevice @ 0x14050BD20 (IommupDomainAttachPasidDevice.c)
 *     HalpIommuConstructReservedPageTable @ 0x140A8775C (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HalpIommuGetDmarptRootAddress(__int64 a1, unsigned int a2, PHYSICAL_ADDRESS *a3)
{
  unsigned int v3; // eax
  char *v5; // r8
  unsigned int v6; // eax
  _DWORD *v8; // rdx
  __int64 v9; // r9
  int v10; // eax

  v3 = *(_DWORD *)(a1 + 24);
  if ( a2 > v3 )
    return 3221225485LL;
  v5 = *(char **)(a1 + 16);
  v6 = v3 - a2;
  if ( v6 )
  {
    v8 = (_DWORD *)(a1 + 36);
    v9 = v6;
    do
    {
      v10 = 1 << *v8++;
      v5 = *(char **)&v5[v10 << *(_DWORD *)(a1 + 28)];
      --v9;
    }
    while ( v9 );
  }
  *a3 = MmGetPhysicalAddress(v5);
  return 0LL;
}
