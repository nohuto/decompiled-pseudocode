/*
 * XREFs of LNot @ 0x1C0056DF0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C004BE28 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 */

__int64 __fastcall LNot(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi

  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v3 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                               + 0xFFFFFFFF;
  }
  return v3;
}
