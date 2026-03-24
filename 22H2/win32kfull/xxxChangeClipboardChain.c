/*
 * XREFs of xxxChangeClipboardChain @ 0x1C015EC70
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C015EB30 (NtUserChangeClipboardChain.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0030448 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 a2)
{
  struct tagWINDOWSTATION *v4; // rax
  struct tagWINDOWSTATION *v5; // rdi
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 ThreadWin32Thread; // rax
  struct _LARGE_STRING *v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+58h] [rbp+7h] BYREF
  __int128 v16; // [rsp+68h] [rbp+17h] BYREF
  __int64 v17; // [rsp+78h] [rbp+27h]
  __int128 v18; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v4 = CheckClipboardAccess();
  v5 = v4;
  if ( !v4 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v6 = (unsigned __int64 *)((char *)v4 + 104);
  if ( !*((_QWORD *)v4 + 13) )
    return 0LL;
  if ( a2 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL) + 664LL) != v4 )
    a2 = 0LL;
  PushW32ThreadLock((__int64)v4, &v18, UserDereferenceObject);
  ObfReferenceObject(v5);
  v7 = *v6;
  if ( a1 == (unsigned __int64 *)*v6 )
  {
    v15[0] = v6;
    v15[1] = a2;
    HMAssignmentLock(v15);
    v8 = 1;
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
    *((_QWORD *)&v16 + 1) = v7;
    HMLockObject(v7);
    v11 = 0LL;
    if ( a2 )
      v11 = *(struct _LARGE_STRING **)a2;
    v12 = *a1;
    v13 = *v6;
    _InterlockedAdd(&glSendMessage, 1u);
    v8 = xxxSendTransformableMessageTimeout(v13, 0x30Du, v12, v11, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v14);
  }
  PopAndFreeW32ThreadLock((__int64)&v18);
  return v8;
}
