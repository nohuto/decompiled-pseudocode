/*
 * XREFs of KiTpEmulateMovRegImm @ 0x140AF10CC
 * Callers:
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpFetchImmediateOperand @ 0x140AF1338 (KiTpFetchImmediateOperand.c)
 *     KiTpSetImmediateOperandSize @ 0x140AF1858 (KiTpSetImmediateOperandSize.c)
 *     KiTpWriteRegisterValue @ 0x140AF18B4 (KiTpWriteRegisterValue.c)
 */

__int64 __fastcall KiTpEmulateMovRegImm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  char v5; // si
  __int64 v6; // rdi
  int v8; // r9d
  int ImmediateOperand; // r11d

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
  {
    if ( (a3 & 8) == 0 )
      *(_BYTE *)(a1 + 1) = 8;
    LOBYTE(a3) = 32;
    LOBYTE(a2) = 16;
    KiTpSetImmediateOperandSize(a1, a2, a3);
  }
  ImmediateOperand = KiTpFetchImmediateOperand(a1, v6, v4);
  if ( ImmediateOperand >= 0 )
  {
    if ( v6 )
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 25) & 1;
      KiTpWriteRegisterValue(a1, v6, v5 & 7, v8, *(_QWORD *)(a1 + 32));
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)ImmediateOperand;
}
