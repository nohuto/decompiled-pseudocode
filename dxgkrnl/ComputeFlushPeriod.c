__int64 __fastcall ComputeFlushPeriod(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r11d
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 344);
  v4 = 0;
  v5 = a1 >> 4;
  v6 = *(_OWORD *)(*(_QWORD *)(v1 + 8) - 16LL);
  RunningHash(&v4, (__int64)&v6, 0x10uLL);
  RunningHash(&v4, (__int64)&v5, 8uLL);
  FinishHash(&v4);
  return v2 + v4 % v2;
}
