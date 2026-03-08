/*
 * XREFs of HalpAddMcaToMemoryErrorSection @ 0x1404FFE7C
 * Callers:
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x1404FFE04 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x140500898 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpAddMcaToMemoryErrorSection(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  memset(a2, 0, 0x50uLL);
  v4 = *(_QWORD *)(a1 + 40);
  if ( (v4 & 0x400000000000000LL) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) != 1 )
    {
      *a2 = 2LL;
      v6 = *(_QWORD *)(a1 + 48);
      goto LABEL_7;
    }
    if ( (v4 & 0x800000000000000LL) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( (v5 & 0x1C0) == 0x80 )
      {
        v6 = HalpMcaPhysicalAddressMask & *(_QWORD *)(a1 + 48) & (-1 << (v5 & 0x3F));
        *a2 = 2LL;
LABEL_7:
        a2[2] = v6;
      }
    }
  }
  return 0LL;
}
