/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x180053090
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x180051E70 (RtlUnwind.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180052310 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x180052760 (RtlpWalkFrameChain.c)
 *     RtlInitializeExtendedContext @ 0x180052D00 (RtlInitializeExtendedContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1800531DC (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1800532A4 (RtlpGetEntireXStateAreaLength.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  _DWORD *v6; // rbx
  __int64 result; // rax
  int v8; // r10d
  __int64 v9; // r11
  _DWORD *v10; // rcx
  int v11; // ecx
  unsigned int v12; // ebp
  unsigned int v13; // edi
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  result = RtlpValidateContextFlags(a2, v14);
  if ( (int)result < 0 )
    return result;
  if ( (v8 & 0x10000) != 0 )
  {
    v10 = (_DWORD *)((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v6 = v10 + 179;
LABEL_13:
    *v10 = v8;
    goto LABEL_5;
  }
  if ( (v8 & 0x100000) == 0 )
  {
    if ( (v8 & 0x200000) != 0 )
    {
      v10 = (_DWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v6 = v10 + 104;
    }
    else
    {
      if ( (v8 & 0x400000) == 0 )
        goto LABEL_6;
      v10 = (_DWORD *)((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v6 = v10 + 228;
    }
    goto LABEL_13;
  }
  v10 = (_DWORD *)((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v10[12] = v8;
  v6 = v10 + 308;
LABEL_5:
  v6[3] = (_DWORD)v6 - (_DWORD)v10;
LABEL_6:
  v11 = v6[3];
  v6[2] = -v11;
  *v6 = -v11;
  v6[1] = v11 + 24;
  if ( (v8 & 0x10020) != 65568 && (v8 & 0x10000) != 0 )
    v6[3] = 204;
  if ( (v14[0] & 2) != 0 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      a4 &= MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    v12 = RtlpGetEntireXStateAreaLength(a4) - 512;
    memset((void *)(((unsigned __int64)v6 + 87) & 0xFFFFFFFFFFFFFFC0uLL), 0, v12);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v6 + 87) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
    v13 = (((_DWORD)v6 + 87) & 0xFFFFFFC0) - (_DWORD)v6;
    v6[5] = v12;
    v6[4] = v13;
    v6[1] = v12 + v13 - *v6;
  }
  else
  {
    v6[5] = 0;
    v6[4] = 25;
  }
  *a3 = v6;
  return 0LL;
}
