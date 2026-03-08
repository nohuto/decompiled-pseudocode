/*
 * XREFs of KiTpSignExtendOperandValue @ 0x140AF1888
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x140AF043C (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 *     KiTpReadOperandValue @ 0x140AF1594 (KiTpReadOperandValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTpSignExtendOperandValue(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 1);
  switch ( v2 )
  {
    case 8:
      return (char)a2;
    case 16:
      return (__int16)a2;
    case 32:
      return (int)a2;
  }
  return a2;
}
