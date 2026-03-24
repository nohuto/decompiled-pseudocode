/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C00087E4
 * Callers:
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 * Callees:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = *((_QWORD *)a1 + 18);
  v4 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v4 == word_1C0339F44 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v5 = RealInternalRemoveProp(v3, v4, 1LL);
  if ( v5 )
    goto LABEL_9;
  v7 = *(unsigned __int16 *)(gpsi + 1378LL);
  v8 = *((_QWORD *)a1 + 18);
  if ( (_WORD)v7 == word_1C0339F44 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v5 = RealInternalRemoveProp(v8, v7, 1LL);
  if ( v5 )
  {
    v1 = 1;
LABEL_9:
    LOBYTE(v6) = 1;
    v10 = HMValidateHandleNoSecure(v5, v6);
    if ( v10 )
    {
      v14[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v14;
      v14[1] = v10;
      HMLockObject(v10);
      if ( v1 )
        v12 = *(unsigned __int16 *)(gpsi + 1378LL);
      else
        v12 = *(unsigned __int16 *)(gpsi + 900LL);
      v13 = *(_QWORD *)(v10 + 144);
      if ( (_WORD)v12 == word_1C0339F44 )
        *(_QWORD *)(*(_QWORD *)(v10 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v13, v12, 1LL);
      xxxHideGhostWindow(a1, (struct tagWND *)v10);
      ThreadUnlock1();
    }
  }
  return 0LL;
}
