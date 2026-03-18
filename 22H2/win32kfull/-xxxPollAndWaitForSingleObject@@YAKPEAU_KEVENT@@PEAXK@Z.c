/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00517F0
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C0051524 (xxxWaitForInputIdle.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x1C006A2D4 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     xxxRemoveQueueCompletion @ 0x1C006A534 (xxxRemoveQueueCompletion.c)
 *     ClientDeliverUserApc @ 0x1C0089DDC (ClientDeliverUserApc.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rbp
  int v9; // ebx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  unsigned int v14; // eax
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 888LL) )
  {
    v6 = Win32AllocPoolNonPagedZInit(24LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 888LL) = v6;
    if ( !v6 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock(Object, &v15, UserDereferenceObject);
  if ( Object )
    ObfReferenceObject(Object);
  ClearQueueServerEvent(0x40u);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v9 = a3;
    }
    else
    {
      v9 = 500;
      if ( a3 == -1 )
        goto LABEL_8;
      v14 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
      LODWORD(v8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v14 < a3 )
      {
        a3 -= v14;
        goto LABEL_8;
      }
    }
    a3 = 0;
LABEL_8:
    Timeout.QuadPart = -10000LL * v9;
    **(_QWORD **)(gptiCurrent + 888LL) = Object;
    v10 = *(_QWORD *)(gptiCurrent + 888LL);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(gptiCurrent + 1456LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 888LL) + 16LL) = a2;
    UserSessionSwitchLeaveCrit(v10, 0xFFFFF78000000004uLL, 0xFFFFF78000000320uLL, v7);
    v11 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 888LL),
            WaitAny,
            WrUserRequest,
            1,
            0,
            &Timeout,
            0LL);
    EnterCrit(1LL, 0LL);
    if ( v11 == 1 )
    {
      xxxRemoveQueueCompletion();
    }
    else
    {
      if ( v11 < 0 )
        goto LABEL_17;
      if ( v11 == 192 )
      {
        ClientDeliverUserApc();
LABEL_17:
        v11 = -1;
      }
    }
    v12 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( (*(_DWORD *)(v12 + 4) & 0x40) != 0 && (*(_DWORD *)(v12 + 8) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) & 0x40) != 0 );
    }
    if ( v11 != 258 && v11 != 1 )
      goto LABEL_14;
  }
  while ( a3 );
  if ( v11 == 1 )
    v11 = 258;
LABEL_14:
  PopAndFreeW32ThreadLock(&v15);
  return (unsigned int)v11;
}
