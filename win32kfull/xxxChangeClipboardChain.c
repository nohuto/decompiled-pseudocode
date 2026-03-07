__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 a2)
{
  struct tagWINDOWSTATION *v4; // rax
  struct tagWINDOWSTATION *v5; // rdi
  struct tagWND **v6; // rsi
  unsigned int v7; // ebx
  __int128 *v8; // r9
  unsigned __int64 v9; // r8
  struct tagWND *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v15[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v16; // [rsp+60h] [rbp-38h] BYREF
  __int64 v17; // [rsp+70h] [rbp-28h]
  __int128 v18; // [rsp+78h] [rbp-20h] BYREF
  __int64 v19; // [rsp+88h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v4 = CheckClipboardAccess((__int64)a1);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v6 = (struct tagWND **)((char *)v4 + 104);
  if ( !*((_QWORD *)v4 + 13) )
    return 0LL;
  if ( a2 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL) + 656LL) != v4 )
    a2 = 0LL;
  PushW32ThreadLock((__int64)v4, &v16, UserDereferenceObject);
  ObfReferenceObject(v5);
  if ( a1 == (unsigned __int64 *)*v6 )
  {
    v15[0] = v6;
    v15[1] = a2;
    HMAssignmentLock(v15, 0LL);
    v7 = 1;
  }
  else
  {
    ThreadLockAlways(*v6, &v18);
    v8 = 0LL;
    if ( a2 )
      v8 = *(__int128 **)a2;
    v9 = *a1;
    v10 = *v6;
    _InterlockedAdd(&glSendMessage, 1u);
    v7 = xxxSendTransformableMessageTimeout(v10, 0x30Du, v9, v8, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v12, v11, v13);
  }
  PopAndFreeW32ThreadLock((__int64)&v16);
  return v7;
}
