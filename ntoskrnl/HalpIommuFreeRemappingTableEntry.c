/*
 * XREFs of HalpIommuFreeRemappingTableEntry @ 0x14050BAF4
 * Callers:
 *     HalpIrtFreeIndex @ 0x1409319B4 (HalpIrtFreeIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuFreeRemappingTableEntry(unsigned int a1, unsigned int a2)
{
  ULONG_PTR *v2; // rbx
  unsigned int v5; // r8d
  ULONG_PTR *v6; // rcx
  __int64 (__fastcall *v7)(ULONG_PTR, _QWORD, _QWORD); // rax

  v2 = (ULONG_PTR *)HalpIommuList;
  v5 = 0;
  while ( v2 != &HalpIommuList )
  {
    v6 = v2;
    v2 = (ULONG_PTR *)*v2;
    if ( (v6[61] & 0x40) != 0 )
    {
      v7 = (__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD))v6[21];
      if ( v7 )
      {
        v5 = v7(v6[2], a1, a2);
        if ( v5 != -1073741594 )
          break;
      }
    }
  }
  return v5;
}
