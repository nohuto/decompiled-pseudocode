/*
 * XREFs of xxxHandleHealthyThread @ 0x1C0144560
 * Callers:
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     xxxUpdateInputHangInfo @ 0x1C00574C0 (xxxUpdateInputHangInfo.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00A52B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxGetInputEvent @ 0x1C00A5800 (xxxGetInputEvent.c)
 * Callees:
 *     ?IsWindowGhosted@@YAHPEBUtagWND@@@Z @ 0x1C0062EF0 (-IsWindowGhosted@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144620 (-xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxHandleHealthyThread(__int64 a1)
{
  int v1; // eax
  unsigned int i; // esi
  __int64 v4; // rbx
  struct tagWND *v6; // rbp

  v1 = *(_DWORD *)(a1 + 488);
  for ( i = 0; v1 < 0; v1 = *(_DWORD *)(a1 + 488) )
  {
    *(_DWORD *)(a1 + 488) = v1 & 0x7FFFFFFF;
    v4 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v4 + gSharedInfo[1] + 24) == 1 )
      {
        v6 = *(struct tagWND **)(gpKernelHandleTable + 24 * v4);
        if ( *((_QWORD *)v6 + 2) == a1
          && (unsigned int)IsWindowGhosted(*(const struct tagWND **)(gpKernelHandleTable + 24 * v4))
          && (unsigned int)xxxHandleHealthyWindow(v6) )
        {
          i = 1;
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= giheLast );
  }
  return i;
}
