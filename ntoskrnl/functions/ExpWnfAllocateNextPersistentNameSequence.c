__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(struct _LIST_ENTRY *a1, unsigned __int64 *a2)
{
  int v3; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  struct _LIST_ENTRY *v5; // r12
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v7; // rbx
  NTSTATUS v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-28h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v3 = 0;
  NameStoreRegistryRoot = 0;
  v5 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = CurrentServerSiloGlobals + 57;
  Data = (unsigned __int64)CurrentServerSiloGlobals[59].Blink;
  if ( Data )
    goto LABEL_8;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_21;
  v12 = KeAbPreAcquire((__int64)&v7[2], 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v7[2], 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&v7[2], v12, (__int64)&v7[2]);
  if ( v13 )
    *(_BYTE *)(v13 + 18) = 1;
  v3 = 1;
  if ( v7[2].Blink )
    goto LABEL_8;
  v8 = ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x18u,
         &ResultLength);
  NameStoreRegistryRoot = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_18;
    do
LABEL_8:
      v9 = _InterlockedIncrement64((volatile signed __int64 *)&v7[1].Blink);
    while ( !v9 );
    Data = (unsigned __int64)v7[2].Blink;
    if ( v9 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_17;
      }
      if ( !v3 )
      {
        v14 = KeAbPreAcquire((__int64)&v7[2], 0LL);
        v15 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&v7[2], 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&v7[2], v14, (__int64)&v7[2]);
        if ( v15 )
          *(_BYTE *)(v15 + 18) = 1;
        v3 = 1;
      }
      if ( (struct _LIST_ENTRY *)v9 <= v7[2].Blink )
        goto LABEL_16;
      v10 = (unsigned __int64)&v7[2].Blink[6].Flink + 4;
      Data = v10;
      if ( v10 < v9 )
      {
        do
          v10 += 100LL;
        while ( v10 < v9 );
        Data = v10;
      }
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_17:
        if ( !v3 )
          goto LABEL_21;
        goto LABEL_18;
      }
      _InterlockedExchange64((volatile __int64 *)&v7[2].Blink, Data);
    }
LABEL_16:
    *a2 = v9;
    goto LABEL_17;
  }
  if ( *(_DWORD *)&KeyValueInformation[8] == 8 )
  {
    Data = *(_QWORD *)&KeyValueInformation[12];
    _InterlockedExchange64((volatile __int64 *)&v7[1].Blink, *(__int64 *)&KeyValueInformation[12]);
    _InterlockedExchange64((volatile __int64 *)&v7[2].Blink, Data);
    goto LABEL_8;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v7[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v7[2]);
  KeAbPostRelease((ULONG_PTR)&v7[2]);
LABEL_21:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
