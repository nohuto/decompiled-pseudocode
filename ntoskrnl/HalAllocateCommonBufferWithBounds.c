__int64 __fastcall HalAllocateCommonBufferWithBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  HalpAllocateDomainCommonBufferInternal(*(_QWORD *)(a1 + 512), a5, a6, a7, a8, (__int64)&v9);
  return v9;
}
