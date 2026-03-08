/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x1402DEC64
 * Callers:
 *     MiFillHyperPtes @ 0x1402DEAE0 (MiFillHyperPtes.c)
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
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
