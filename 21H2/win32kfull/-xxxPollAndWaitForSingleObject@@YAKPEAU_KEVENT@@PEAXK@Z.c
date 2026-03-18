/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010E6C0
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C010E54C (xxxWaitForInputIdle.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x1C00A49D8 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A4D48 (xxxRemoveQueueCompletion.c)
 *     ClientDeliverUserApc @ 0x1C00EF4B0 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 880LL) )
  {
    v6 = Win32AllocPoolNonPagedZInit(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 880LL) = v6;
    if ( !v6 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, &v14, UserDereferenceObject);
  if ( Object )
    ObfReferenceObject(Object);
  ClearQueueServerEvent(0x40u);
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v8 = a3;
    }
    else
    {
      v8 = 500;
      if ( a3 == -1 )
        goto LABEL_10;
      v9 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v7;
      LODWORD(v7) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v9 < a3 )
      {
        a3 -= v9;
        goto LABEL_10;
      }
    }
    a3 = 0;
LABEL_10:
    Timeout.QuadPart = -10000LL * v8;
    **(_QWORD **)(gptiCurrent + 880LL) = Object;
    v10 = *(_QWORD *)(gptiCurrent + 880LL);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(gptiCurrent + 1416LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 880LL) + 16LL) = a2;
    UserSessionSwitchLeaveCrit(v10);
    v11 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 880LL),
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
        goto LABEL_22;
      if ( v11 == 192 )
      {
        ClientDeliverUserApc();
LABEL_22:
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
      goto LABEL_16;
  }
  while ( a3 );
  if ( v11 == 1 )
    v11 = 258;
LABEL_16:
  PopAndFreeW32ThreadLock((__int64)&v14);
  return (unsigned int)v11;
}
