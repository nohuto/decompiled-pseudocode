/*
 * XREFs of RtlCreateEnclaveReturnFrame @ 0x14045C298
 * Callers:
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlCreateEnclaveReturnFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  unsigned __int64 v11; // rcx
  __int64 v14; // rcx
  _QWORD *v16; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)(a1 + 368) != 51 || *(_QWORD *)(a1 + 360) != a3 )
  {
    v11 = *(_QWORD *)(a1 + 384) - 80LL;
    v16 = (_QWORD *)v11;
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 7) = *(_BYTE *)(v11 + 7);
    v16[5] = *(_QWORD *)(a1 + 80);
    v16[7] = *(_QWORD *)(a1 + 360);
    v16[8] = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a1 + 384) = v16;
    _R8 = *(_QWORD *)(a1 + 360);
    if ( a10 )
    {
      _RAX = __readmsr(0x6A7u) - 8;
      __asm { wrussq  qword ptr [rax], r8 }
      __writemsr(0x6A7u, _RAX);
    }
  }
  if ( a7 )
  {
    v14 = *(_QWORD *)(a1 + 384);
    *(_QWORD *)(v14 + 64) = a8;
    *(_QWORD *)(v14 + 72) = a7;
  }
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 80) = a9;
  *(_QWORD *)(a1 + 360) = a2;
  *(_WORD *)(a1 + 368) = 51;
  return 0LL;
}
