__int64 __fastcall HalAllocateCommonBufferDmaThin(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return HalAllocateCommonBufferDmaThinEx(a1, 0LL, a2, a3, v4, 0x80000000);
}
