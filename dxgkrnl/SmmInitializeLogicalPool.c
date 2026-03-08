/*
 * XREFs of SmmInitializeLogicalPool @ 0x1C00704D0
 * Callers:
 *     SmmInitializeLogicalAllocator @ 0x1C03D2A9C (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializeLogicalPool(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
}
