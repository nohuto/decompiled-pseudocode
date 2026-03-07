__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // rcx
  unsigned int v13; // eax
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 888LL) )
  {
    v6 = Win32AllocPoolNonPagedZInit(24LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 888LL) = v6;
    if ( !v6 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock(Object, &v14, UserDereferenceObject);
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
        goto LABEL_8;
      v13 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v7;
      LODWORD(v7) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v13 < a3 )
      {
        a3 -= v13;
        goto LABEL_8;
      }
    }
    a3 = 0;
LABEL_8:
    Timeout.QuadPart = -10000LL * v8;
    **(_QWORD **)(gptiCurrent + 888LL) = Object;
    v9 = *(_QWORD *)(gptiCurrent + 888LL);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(gptiCurrent + 1456LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 888LL) + 16LL) = a2;
    UserSessionSwitchLeaveCrit(v9);
    v10 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 888LL),
            WaitAny,
            WrUserRequest,
            1,
            0,
            &Timeout,
            0LL);
    EnterCrit(1LL, 0LL);
    if ( v10 == 1 )
    {
      xxxRemoveQueueCompletion();
    }
    else
    {
      if ( v10 < 0 )
        goto LABEL_17;
      if ( v10 == 192 )
      {
        ClientDeliverUserApc();
LABEL_17:
        v10 = -1;
      }
    }
    v11 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( (*(_DWORD *)(v11 + 4) & 0x40) != 0 && (*(_DWORD *)(v11 + 8) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) & 0x40) != 0 );
    }
    if ( v10 != 258 && v10 != 1 )
      goto LABEL_14;
  }
  while ( a3 );
  if ( v10 == 1 )
    v10 = 258;
LABEL_14:
  PopAndFreeW32ThreadLock(&v14);
  return (unsigned int)v10;
}
