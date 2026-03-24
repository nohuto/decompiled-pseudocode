/*
 * XREFs of IncVisWindows @ 0x1C004BF54
 * Callers:
 *     SetMinimize @ 0x1C002C16C (SetMinimize.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 * Callees:
 *     FVisCountable @ 0x1C004C070 (FVisCountable.c)
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 424);
    ++*(_DWORD *)(v3 + 900);
    ++*(_DWORD *)(v4 + 1024);
    if ( (unsigned int)GetWindowCompositionInfo(a1, v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v3 + 424) + 1028LL);
    v5 = *(_DWORD **)(v3 + 424);
    if ( v5[256] > v5[257] && (v5[205] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 424), 5LL);
      *(_DWORD *)(*(_QWORD *)(v3 + 424) + 820LL) |= 0x4000u;
    }
    *(_QWORD *)(v3 + 1232) |= 0x200000000uLL;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
