/*
 * XREFs of xxxSetTrayWindow @ 0x1C00A5F60
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     xxxRemoveFullScreen @ 0x1C0060E84 (xxxRemoveFullScreen.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A41CC (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxAddFullScreen @ 0x1C00C9EF4 (xxxAddFullScreen.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 */

__int64 __fastcall xxxSetTrayWindow(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 *v6; // rdi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( a2 == (unsigned __int64 *)1 )
  {
    v6 = *(unsigned __int64 **)(a1 + 96);
    if ( v6 )
      v4 = *v6;
    else
      v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
    if ( a2 )
      v4 = *a2;
    v7[1] = a2;
    v7[0] = a1 + 96;
    HMAssignmentLock(v7, 0LL);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) )
    PostShellHookMessages(*(_WORD *)(gpDispInfo + 160LL) != 0 ? 32772 : 4, v4);
  result = *(_QWORD *)(gptiCurrent + 464LL);
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*(_QWORD *)result + 16LL)) & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_WORD *)(gpDispInfo + 160LL) != 0;
    return xxxCallHook(4, v4, v2, 10);
  }
  return result;
}
