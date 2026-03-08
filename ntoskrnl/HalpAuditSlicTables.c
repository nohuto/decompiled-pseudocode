/*
 * XREFs of HalpAuditSlicTables @ 0x140B8F318
 * Callers:
 *     HalpAuditAcpiTables @ 0x140B63138 (HalpAuditAcpiTables.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

__int64 __fastcall HalpAuditSlicTables(__int64 a1)
{
  char v1; // bp
  char v2; // r12
  unsigned int v3; // esi
  char i; // r15
  __int64 v6; // r14
  char v7; // dl
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 result; // rax

  v1 = 0;
  v2 = 0;
  v3 = 0;
  for ( i = 1; v3 < *(_DWORD *)(a1 + 4); ++v3 )
  {
    v6 = 32LL * v3;
    if ( v3 )
    {
      v7 = 0;
      v8 = 32LL * (v3 - 1);
      v9 = *(_DWORD *)(v6 + a1 + 24);
      if ( *(_QWORD *)(v6 + a1 + 8) == *(_QWORD *)(v8 + a1 + 8) )
        v7 = i;
      i = v7;
      if ( v9 != *(_DWORD *)(v8 + a1 + 24)
        || RtlCompareMemory(*(const void **)(v6 + a1 + 32), *(const void **)(v8 + a1 + 32), 8LL * v9) != 8LL * v9 )
      {
        v2 = 1;
      }
    }
    if ( *(_DWORD *)(v6 + a1 + 24) )
      v1 = 1;
  }
  HalpAuditResults = 0LL;
  result = *(unsigned int *)(a1 + 4);
  LODWORD(HalpAuditResults) = *(_DWORD *)(a1 + 4);
  if ( i )
    HIDWORD(HalpAuditResults) |= 1u;
  if ( v1 )
    HIDWORD(HalpAuditResults) |= 2u;
  if ( v2 )
    HIDWORD(HalpAuditResults) |= 4u;
  return result;
}
