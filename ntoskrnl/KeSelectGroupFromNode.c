/*
 * XREFs of KeSelectGroupFromNode @ 0x140296028
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectGroupFromNode(__int64 a1)
{
  char v2; // cl
  unsigned __int64 v3; // rdx

  v2 = (*(_BYTE *)(a1 + 11) + 1) & 0x1F;
  _BitScanForward64(&v3, __ROR8__(*(unsigned int *)(a1 + 16), v2));
  LOWORD(v3) = (v2 + (_BYTE)v3) & 0x3F;
  *(_BYTE *)(a1 + 11) = v3;
  return (unsigned __int16)v3;
}
