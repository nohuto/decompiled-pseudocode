/*
 * XREFs of UpdateWindowSpriteMonitor @ 0x1C002C598
 * Callers:
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0015434 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 * Callees:
 *     GreDwmNotifySpriteMonitorChange @ 0x1C002C60C (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1C002D4E8 (InitializeMonitorInfo.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall UpdateWindowSpriteMonitor(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE v7[80]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    v2 = a1[5];
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset_0(v7, 0, 0x48uLL);
      InitializeMonitorInfo(v7, *(unsigned int *)(v2 + 288), a2, a1);
      return GreDwmNotifySpriteMonitorChange(v5, *a1, 0LL, v7);
    }
  }
  return result;
}
