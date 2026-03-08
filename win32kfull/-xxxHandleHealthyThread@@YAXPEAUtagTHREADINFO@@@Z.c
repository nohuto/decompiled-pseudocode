/*
 * XREFs of ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F5AA4
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00470E0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxGetInputEvent @ 0x1C0047670 (xxxGetInputEvent.c)
 *     xxxSleepThread2 @ 0x1C006D200 (xxxSleepThread2.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C00719A0 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     EditionInitInputHangInfo @ 0x1C00CCD90 (EditionInitInputHangInfo.c)
 *     EditionxxxHandleGhostOnThreadDestroyed @ 0x1C00D8F00 (EditionxxxHandleGhostOnThreadDestroyed.c)
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C00254FC (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F5B3C (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleHealthyThread(struct tagTHREADINFO *a1)
{
  int i; // eax
  __int64 v3; // rbx
  struct tagTHREADINFO **v4; // rsi

  for ( i = *((_DWORD *)a1 + 122); i < 0; i = *((_DWORD *)a1 + 122) )
  {
    *((_DWORD *)a1 + 122) = i & 0x7FFFFFFF;
    v3 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v3 + gSharedInfo[1] + 24) == 1 )
      {
        v4 = *(struct tagTHREADINFO ***)(gpKernelHandleTable + 24 * v3);
        if ( v4[2] == a1 )
        {
          if ( IsWindowGhosted(*(const struct tagWND **)(gpKernelHandleTable + 24 * v3)) )
            xxxHandleHealthyWindow((struct tagWND *)v4);
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 <= giheLast );
  }
}
