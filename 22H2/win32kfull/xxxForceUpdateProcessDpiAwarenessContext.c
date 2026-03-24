/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5EAC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00010A4 (TraceChildWindowDpiTelemetry.c)
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3ECC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 ThreadWin32Thread; // rax
  int v8; // ecx
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  struct tagBWL *v13; // r13
  unsigned __int64 *i; // r15
  __int64 v15; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]

  result = IsWindowBeingDestroyed((__int64)a1);
  if ( !(_DWORD)result )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
    v16[2] = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v16;
    v16[1] = a1;
    HMLockObject(a1);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 13), 2);
    v8 = *(_DWORD *)(v6 + 1072);
    v9 = *(_DWORD *)(v6 + 280);
    if ( !v8 )
      *(_DWORD *)(v6 + 1076) = v9;
    *(_DWORD *)(v6 + 1080) = v9;
    *(_DWORD *)(v6 + 1072) = v8 + 1;
    *(_DWORD *)(v6 + 280) = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v6 + 284) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v10 = *(_QWORD **)(v6 + 664);
    if ( v10 )
    {
      PushW32ThreadLock(*(_QWORD *)(v6 + 664), &v19, UserDereferenceObject);
      ObfReferenceObject(v10);
    }
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v10 )
      v12 = (_QWORD *)v10[2];
    else
      v12 = 0LL;
    while ( v12 )
    {
      v13 = BuildHwndList(*(struct tagWND **)(v12[1] + 24LL), 1, 0LL);
      if ( v13 )
      {
        v18 = 0LL;
        v17 = 0LL;
        PushW32ThreadLock((__int64)v12, &v17, UserDereferenceObject);
        ObfReferenceObject(v12);
        for ( i = (unsigned __int64 *)((char *)v13 + 32); *i != 1; ++i )
        {
          v15 = HMValidateHandleNoSecure(*i, 1);
          if ( v15 && *(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) == v6 )
            xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v15, a2, 1);
        }
        FreeHwndList(v13);
        v12 = (_QWORD *)v12[4];
        PopAndFreeW32ThreadLock((__int64)&v17);
      }
    }
    if ( v10 )
      PopAndFreeW32ThreadLock((__int64)&v19);
    return ThreadUnlock1(v11);
  }
  return result;
}
