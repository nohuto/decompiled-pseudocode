/*
 * XREFs of KiTpGetRegisterAddressByIndex @ 0x140AF13F8
 * Callers:
 *     KiTpDecodeModRmOperand @ 0x140AF02E0 (KiTpDecodeModRmOperand.c)
 *     KiTpEmulateGroup0Instruction @ 0x140AF043C (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 *     KiTpEmulateMovzx @ 0x140AF115C (KiTpEmulateMovzx.c)
 *     KiTpEmulateRegisterPushPop @ 0x140AF126C (KiTpEmulateRegisterPushPop.c)
 *     KiTpWriteRegisterValue @ 0x140AF18B4 (KiTpWriteRegisterValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTpGetRegisterAddressByIndex(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  unsigned int v5; // eax
  char v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = a3 + 8;
  if ( !a4 )
    v5 = a3;
  v6 = v5;
  if ( !a5 || *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 1) != 8 )
    return *(_QWORD *)(a2 + 8) + 8LL * v5 + 120;
  v7 = *(_QWORD *)(a2 + 8) + 120LL + 8LL * (v5 & 3);
  result = v7 + 1;
  if ( (v6 & 4) == 0 )
    return v7;
  return result;
}
