__int64 __fastcall KiIntSteerComputeCpuSet(__int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // r9
  int v4; // eax
  __int64 v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 136);
  v7 = 0LL;
  *(_QWORD *)&v7 = KiComputeCpuSetAffinityMask(0LL, (__int64 *)(a1 + 152), v1, v2);
  v4 = KiIntSteerVerifyDestination(a1, (__int64)&v7);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a1 + 184) = WORD4(v7);
    result = 0LL;
    *(_QWORD *)(a1 + 176) = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 176) = 0LL;
    return (v4 >> 31) & 0xC0000001;
  }
  return result;
}
