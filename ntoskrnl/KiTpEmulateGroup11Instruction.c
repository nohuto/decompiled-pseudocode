/*
 * XREFs of KiTpEmulateGroup11Instruction @ 0x140AF0694
 * Callers:
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140AF0008 (KiTpAccessMemory.c)
 *     KiTpDecodeModRm @ 0x140AF01F4 (KiTpDecodeModRm.c)
 *     KiTpDecodeModRmOperand @ 0x140AF02E0 (KiTpDecodeModRmOperand.c)
 *     KiTpFetchImmediateOperand @ 0x140AF1338 (KiTpFetchImmediateOperand.c)
 */

__int64 __fastcall KiTpEmulateGroup11Instruction(__int64 a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  char v7[8]; // [rsp+40h] [rbp-28h] BYREF
  volatile void *v8; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0LL;
  v7[0] = 0;
  v10 = 0;
  result = KiTpDecodeModRm(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    result = KiTpFetchImmediateOperand(a1, a2, a3);
    if ( (int)result >= 0 )
    {
      if ( a2 )
      {
        KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v8, v7, &v10);
        v9[0] = *(_QWORD *)(a1 + 32);
        return KiTpAccessMemory(a2, v9, v8, v7[0], v10, *(_BYTE *)(a1 + 1) >> 3, 1);
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
