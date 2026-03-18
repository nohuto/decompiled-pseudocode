/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x1403490C4
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x140277590 (MiMakeHyperRangeAccessible.c)
 *     MiFillHyperPtes @ 0x140348F40 (MiFillHyperPtes.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rdx

  if ( *(_DWORD *)a3 )
  {
    v3 = MiSwizzleInvalidPte(128LL);
    *v4 = v3;
  }
  ++*(_QWORD *)(a3 + 8);
}
