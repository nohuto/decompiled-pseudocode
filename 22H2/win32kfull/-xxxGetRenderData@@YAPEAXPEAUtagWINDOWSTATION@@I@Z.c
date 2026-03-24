/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021EFBC
 * Callers:
 *     xxxGetClipboardData @ 0x1C002D328 (xxxGetClipboardData.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C002F970 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  unsigned __int64 v2; // r14
  __int64 v4; // rcx
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  struct tagCLIP *ClipFormat; // rax
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int128 v19; // [rsp+68h] [rbp-30h] BYREF
  __int64 v20; // [rsp+78h] [rbp-20h]
  unsigned __int64 LowLimit; // [rsp+A0h] [rbp+8h] BYREF

  v2 = a2;
  LowLimit = 0LL;
  v4 = *((_QWORD *)a1 + 14);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 16) & 0x40;
    *((_DWORD *)a1 + 16) |= 0x80u;
    v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 424LL), 0LL, 2LL, 0LL);
    v7 = v6;
    if ( v6 )
      PushW32ThreadLock(v6, &v19, (__int64)ReleaseWakeReference);
    v8 = *((_QWORD *)a1 + 14);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v17 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v17;
    *((_QWORD *)&v17 + 1) = v8;
    HMLockObject(v8);
    v10 = xxxSendTransformableMessageTimeout(
            *((_QWORD *)a1 + 14),
            0x305u,
            v2,
            0LL,
            0x42u,
            0x7530u,
            (__int64 *)&LowLimit,
            1,
            0) != 0;
    ThreadUnlock1(v11);
    if ( v7 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v19);
    v12 = *((_DWORD *)a1 + 16);
    v13 = v12 | 0x40;
    v14 = v12 & 0xFFFFFFBF;
    if ( !v5 )
      v13 = v14;
    *((_DWORD *)a1 + 16) = v13 & 0xFFFFFF7F;
    if ( !v10 )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, v2, 1);
  if ( ClipFormat )
    return (void *)*((_QWORD *)ClipFormat + 1);
  else
    return 0LL;
}
