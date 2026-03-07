void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rcx
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rsi
  BOOL v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  struct tagCLIP *ClipFormat; // rax
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int128 v19; // [rsp+68h] [rbp-30h] BYREF
  __int64 v20; // [rsp+78h] [rbp-20h]
  __int64 v21; // [rsp+A0h] [rbp+8h] BYREF

  v2 = a2;
  v21 = 0LL;
  v4 = *((_QWORD *)a1 + 14);
  v19 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 16) & 0x40;
    *((_DWORD *)a1 + 16) |= 0x80u;
    v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 424LL), 0LL, 2LL, 0LL);
    v7 = v6;
    if ( v6 )
      PushW32ThreadLock(v6, &v17, (__int64)ReleaseWakeReference);
    ThreadLockAlways(*((_QWORD *)a1 + 14), &v19);
    v8 = xxxSendTransformableMessageTimeout(
           *((struct tagWND **)a1 + 14),
           0x305u,
           v2,
           0LL,
           0x42u,
           0x7530u,
           (unsigned __int64 *)&v21,
           1,
           0) != 0;
    ThreadUnlock1(v10, v9, v11);
    if ( v7 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v17);
    v12 = *((_DWORD *)a1 + 16);
    v13 = v12 | 0x40;
    v14 = v12 & 0xFFFFFFBF;
    if ( !v5 )
      v13 = v14;
    *((_DWORD *)a1 + 16) = v13 & 0xFFFFFF7F;
    if ( !v8 )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, v2, 1);
  if ( ClipFormat )
    return (void *)*((_QWORD *)ClipFormat + 1);
  else
    return 0LL;
}
