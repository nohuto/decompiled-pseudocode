/*
 * XREFs of DecVisWindows @ 0x1C002A17C
 * Callers:
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     SetMinimize @ 0x1C010182C (SetMinimize.c)
 * Callees:
 *     FVisCountable @ 0x1C002E5C0 (FVisCountable.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DecVisWindows(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _WORD v6[32]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v6, 0, sizeof(v6));
  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *((_QWORD *)a1 + 2);
    v4 = *(_QWORD *)(v3 + 424);
    --*(_DWORD *)(v3 + 908);
    --*(_DWORD *)(v4 + 1008);
    if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6)
      && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
    {
      --*(_DWORD *)(*(_QWORD *)(v3 + 424) + 1012LL);
    }
    v5 = *(_QWORD *)(v3 + 424);
    result = *(unsigned int *)(v5 + 1012);
    if ( *(_DWORD *)(v5 + 1008) <= (unsigned int)result && (*(_DWORD *)(v5 + 812) & 0x4000) != 0 )
    {
      PsUpdateComponentPower(*(_QWORD *)v5, 5LL);
      GreDxgkSetProcessStatus(*(_QWORD *)(v3 + 424), 2LL);
      result = *(_QWORD *)(v3 + 424);
      *(_DWORD *)(result + 812) &= ~0x4000u;
    }
  }
  return result;
}
