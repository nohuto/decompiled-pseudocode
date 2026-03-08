/*
 * XREFs of HalpIommuIvtDiscover @ 0x140B3D380
 * Callers:
 *     HalpIommuInitDiscard @ 0x140B6C3EC (HalpIommuInitDiscard.c)
 * Callees:
 *     HalSocGetAcpiTable @ 0x14037601C (HalSocGetAcpiTable.c)
 *     HalpIvtProcessDmarTable @ 0x14037BB68 (HalpIvtProcessDmarTable.c)
 */

__int64 __fastcall HalpIommuIvtDiscover(_QWORD *a1)
{
  int v2; // edi
  __int64 AcpiTable; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = 0;
  *a1 = 0LL;
  AcpiTable = HalSocGetAcpiTable(1380011332);
  if ( AcpiTable )
  {
    v2 = HalpIvtProcessDmarTable(AcpiTable, &v5);
    if ( v2 >= 0 )
    {
      if ( v5 )
        *a1 |= 2uLL;
    }
  }
  return (unsigned int)v2;
}
