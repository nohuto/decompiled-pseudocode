/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C001FAF4
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C001FAA0 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C001FCE8 (zzzSetWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C0029398 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01E7050 (zzzUnhookWindowsHook.c)
 * Callees:
 *     FreeHook @ 0x1C0020030 (FreeHook.c)
 *     PhkNextValid @ 0x1C0020370 (PhkNextValid.c)
 *     PhkFirstGlobalValid @ 0x1C006672C (PhkFirstGlobalValid.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E694C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  struct tagHOOK *v1; // rbx
  __int64 v2; // rdi
  _BYTE *v3; // rsi
  int v5; // r8d
  __int64 i; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v3 = &unk_1C02EB9F8;
  if ( (*((_BYTE *)&unk_1C02EB9F8 + *((int *)a1 + 12) + 1) & 4) != 0 )
  {
    v8[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v8;
    v8[1] = v1;
    HMLockObject(v1);
    zzzJournalAttach((struct tagTHREADINFO *)v2, 0);
    v1 = (struct tagHOOK *)ThreadUnlock1();
  }
  if ( v1 )
    FreeHook(v1);
  if ( (*(_DWORD *)(v2 + 488) & 0x40000) != 0 )
  {
    v5 = -1;
    do
    {
      if ( (*v3 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v2, (unsigned int)v5); i; i = PhkNextValid(i) )
        {
          if ( *(_QWORD *)(i + 16) == v2 )
            return 1LL;
        }
      }
      ++v5;
      ++v3;
    }
    while ( v5 <= 14 );
    *(_DWORD *)(v2 + 488) &= ~0x40000u;
  }
  return 1LL;
}
