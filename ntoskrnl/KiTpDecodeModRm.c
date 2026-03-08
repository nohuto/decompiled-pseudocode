/*
 * XREFs of KiTpDecodeModRm @ 0x140AF01F4
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x140AF043C (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x140AF0694 (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x140AF0754 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 *     KiTpEmulateMovzx @ 0x140AF115C (KiTpEmulateMovzx.c)
 * Callees:
 *     KiTpFetchInstructionBytes @ 0x140AF13B4 (KiTpFetchInstructionBytes.c)
 */

__int64 __fastcall KiTpDecodeModRm(__int64 a1, __int64 a2, int *a3)
{
  int v3; // esi
  _BYTE *v5; // rdi
  __int64 result; // rax
  _BYTE *v7; // r9
  char v8; // cl

  v3 = *a3;
  if ( a2 )
  {
    *a3 = v3 + *(unsigned __int8 *)(a1 + 22);
    return 0LL;
  }
  v5 = (_BYTE *)(a1 + 26);
  result = KiTpFetchInstructionBytes(a1, a1 + 26, 1LL, a3);
  if ( (int)result >= 0 )
  {
    if ( (*v5 & 0xC0) == 0xC0
      || (*v5 & 7) != 4
      || (result = KiTpFetchInstructionBytes(a1, a1 + 27, 1LL, v7), (int)result >= 0) )
    {
      v8 = *v5 >> 6;
      if ( !v8 && ((*v5 & 7) == 5 || (*(_BYTE *)(a1 + 27) & 7) == 5) || v8 == 2 )
      {
        result = KiTpFetchInstructionBytes(a1, a1 + 28, 4LL, v7);
        if ( (int)result < 0 )
          return result;
      }
      else if ( v8 == 1 )
      {
        result = KiTpFetchInstructionBytes(a1, a1 + 28, 1LL, v7);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(a1 + 28) = *(char *)(a1 + 28);
      }
      *(_BYTE *)(a1 + 22) = *v7 - v3;
      return 0LL;
    }
  }
  return result;
}
