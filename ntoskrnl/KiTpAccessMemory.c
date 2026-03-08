/*
 * XREFs of KiTpAccessMemory @ 0x140AF0008
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x140AF043C (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x140AF0694 (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x140AF0754 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 *     KiTpEmulateMovzx @ 0x140AF115C (KiTpEmulateMovzx.c)
 *     KiTpEmulateRegisterPushPop @ 0x140AF126C (KiTpEmulateRegisterPushPop.c)
 *     KiTpReadOperandValue @ 0x140AF1594 (KiTpReadOperandValue.c)
 * Callees:
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall KiTpAccessMemory(
        __int64 a1,
        _BYTE *a2,
        volatile void *a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rcx
  __int64 v11; // rax

  if ( a4 == 1 )
  {
    if ( a7 )
    {
      ProbeForWrite(a3, a6, 1u);
    }
    else if ( a6 )
    {
      v9 = (unsigned __int64)a3 + a6;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v10 = a3;
  if ( !a7 )
  {
    v10 = a2;
    a2 = a3;
  }
  switch ( a6 )
  {
    case 1u:
      *v10 = *a2;
      return 0LL;
    case 2u:
      *(_WORD *)v10 = *(_WORD *)a2;
      return 0LL;
    case 4u:
      if ( !a7 || !a5 )
      {
        *(_DWORD *)v10 = *(_DWORD *)a2;
        return 0LL;
      }
      v11 = *(unsigned int *)a2;
      break;
    default:
      v11 = *(_QWORD *)a2;
      break;
  }
  *(_QWORD *)v10 = v11;
  return 0LL;
}
