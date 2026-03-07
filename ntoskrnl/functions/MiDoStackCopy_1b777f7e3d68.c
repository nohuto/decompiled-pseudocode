__int64 __fastcall MiDoStackCopy(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rcx
  __int16 v7; // dx
  __int64 v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = 6LL * *(_QWORD *)a2;
  BugCheckParameter3[0] = a2;
  BugCheckParameter3[1] = a3;
  BugCheckParameter3[2] = a4;
  if ( v4 <= qword_140C65820
    && ((*(_QWORD *)(8 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
    && ((*(_QWORD *)(8 * v6 - 0x220000000000LL + 40) >> 60) & 7) == 2
    && MiGetLeafPfnBuddy((_QWORD *)(8 * v6 - 0x220000000000LL)) != -32LL
    && (*(_BYTE *)(v8 + 34) & 7) == 6
    && *(_WORD *)(v8 + 32) == v7 )
  {
    v13 = 0LL;
    v14 = 0LL;
    if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v13, (__int64)&v14) || v13 == 0xFFFF800000000000uLL && v14 == -1 )
    {
LABEL_15:
      result = KeExpandKernelStackAndCalloutInternal(
                 (void (__fastcall *)(ULONG_PTR))MiJumpStackTarget,
                 (ULONG_PTR)BugCheckParameter3,
                 24576,
                 1,
                 0LL);
      if ( (int)result >= 0 )
        return result;
      *(_DWORD *)(a2 + 32) = result;
    }
    else
    {
      v9 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = (((unsigned __int64)KeGetCurrentStackPointer() >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( v9 <= v10 )
      {
        v13 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL) == v4 )
          goto LABEL_15;
        v9 += 8LL;
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 32) = -1073740748;
  }
  return MiJumpStackTarget(BugCheckParameter3);
}
