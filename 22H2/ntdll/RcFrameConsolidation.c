/*
 * XREFs of RcFrameConsolidation @ 0x1800A1C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGuardCheckExceptionHandler @ 0x18006EFF0 (RtlGuardCheckExceptionHandler.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A1E00 (RtlpGuardSynchronizeRestorePc.c)
 */

void __fastcall RcFrameConsolidation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        __int64 a30,
        void *a31,
        __int64 a32)
{
  volatile __int32 *v32; // rbx
  __int32 v33; // r8d
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  a31 = (void *)(*(__int64 (**)(void))(a1 + 32))();
  if ( (*((_QWORD *)&xmmword_180181390 + 1) & 0x1000000000000000LL) != 0
    || (RtlGuardCheckExceptionHandler((unsigned __int64)a31, 0, 0LL),
        (*((_QWORD *)&xmmword_180181390 + 1) & 0x1000LL) != 0) )
  {
    RtlpGuardSynchronizeRestorePc(&a31);
  }
  else if ( (a6 & 0xFFFFFFBF) == 0x10000F )
  {
    if ( (a6 & 0x100040) == 0x100040 )
    {
      v32 = (volatile __int32 *)((char *)&STACK[0x2D0] + SLODWORD(STACK[0x4E0]));
      v33 = _InterlockedExchange(v32 + 6, SHIDWORD(a6));
      _xrstor((void *)v32, MEMORY[0x7FFE03E0] & 0xFFFFFFFFFFFFFFFCuLL);
      *((_DWORD *)v32 + 6) = v33;
    }
    _fxrstor(&a32);
    _mm_setcsr(HIDWORD(a6));
    retaddr = a31;
    __asm { iretq }
  }
  JUMPOUT(0x1800A1A0ELL);
}
