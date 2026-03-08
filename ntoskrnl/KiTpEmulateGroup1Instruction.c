/*
 * XREFs of KiTpEmulateGroup1Instruction @ 0x140AF0754
 * Callers:
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140AF0008 (KiTpAccessMemory.c)
 *     KiTpDecodeModRm @ 0x140AF01F4 (KiTpDecodeModRm.c)
 *     KiTpDecodeModRmOperand @ 0x140AF02E0 (KiTpDecodeModRmOperand.c)
 *     KiTpFetchImmediateOperand @ 0x140AF1338 (KiTpFetchImmediateOperand.c)
 *     KiTpReadOperandValue @ 0x140AF1594 (KiTpReadOperandValue.c)
 *     KiTpSetFlagsAdd @ 0x140AF15F8 (KiTpSetFlagsAdd.c)
 *     KiTpSetFlagsSub @ 0x140AF16E4 (KiTpSetFlagsSub.c)
 *     KiTpSetFlagsZeroSignParity @ 0x140AF17E8 (KiTpSetFlagsZeroSignParity.c)
 */

__int64 __fastcall KiTpEmulateGroup1Instruction(__int64 a1, __int64 a2, int *a3)
{
  int ImmediateOperand; // ebx
  char v7; // r14
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rbx
  int v15; // r9d
  unsigned __int8 v17; // [rsp+28h] [rbp-38h]
  char v18[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  volatile void *v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h] BYREF
  char v22; // [rsp+98h] [rbp+38h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v18[0] = 0;
  ImmediateOperand = KiTpDecodeModRm(a1, a2, a3);
  if ( ImmediateOperand >= 0 )
  {
    ImmediateOperand = KiTpFetchImmediateOperand(a1, a2, a3);
    if ( ImmediateOperand >= 0 )
    {
      if ( !a2 )
        return 0;
      KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v20, &v22, v18);
      v7 = v18[0];
      LOBYTE(v8) = v22;
      ImmediateOperand = KiTpReadOperandValue(a1, a2, (_DWORD)v20, v8, v18[0], (__int64)&v19);
      if ( ImmediateOperand < 0 )
        return (unsigned int)ImmediateOperand;
      v9 = *(_QWORD *)(a1 + 32);
      if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 0 )
      {
        if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) == 1 )
        {
          v11 = v19 | v9;
          goto LABEL_19;
        }
        if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 2 )
        {
          if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) == 3 )
          {
            v13 = v19;
            v14 = v19 - (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) & 1);
            goto LABEL_17;
          }
          if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 4 )
          {
            if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 5 )
            {
              v10 = a1;
              if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 6 )
              {
                KiTpSetFlagsSub(a1, a2, v19 - v9, v19, *(_QWORD *)(a1 + 32));
                return (unsigned int)ImmediateOperand;
              }
              v11 = v19 ^ v9;
              v12 = v19 ^ v9;
              goto LABEL_15;
            }
            v13 = v19;
            v14 = v19;
LABEL_17:
            v11 = v14 - v9;
            KiTpSetFlagsSub(a1, a2, v11, v13, *(_QWORD *)(a1 + 32));
            goto LABEL_25;
          }
          v11 = v19 & v9;
LABEL_19:
          v12 = v11;
          v10 = a1;
LABEL_15:
          *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
          KiTpSetFlagsZeroSignParity(v10, a2, v12);
LABEL_25:
          v17 = *(_BYTE *)(a1 + 1) >> 3;
          v21 = v11;
          return (unsigned int)KiTpAccessMemory(a2, &v21, v20, v22, v7, v17, 1);
        }
        v15 = v19;
        v11 = v19 + v9 + (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) & 1);
      }
      else
      {
        v15 = v19;
        v11 = v9 + v19;
      }
      KiTpSetFlagsAdd(a1, a2, v11, v15, *(_QWORD *)(a1 + 32));
      goto LABEL_25;
    }
  }
  return (unsigned int)ImmediateOperand;
}
