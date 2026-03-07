__int64 __fastcall NtGdiGetColorAdjustment(HDC a1, ULONG64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  result = GreGetColorAdjustment(a1, (__int64)&v4);
  if ( (_DWORD)result )
  {
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v4;
    *(_QWORD *)(a2 + 16) = v5;
  }
  return result;
}
