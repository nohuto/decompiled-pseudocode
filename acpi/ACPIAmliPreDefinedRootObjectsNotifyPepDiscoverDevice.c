/*
 * XREFs of ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C003C8FC
 * Callers:
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0037A5C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rsi
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF

  v0 = RootDeviceExtension;
  v12 = 0LL;
  v11 = 0LL;
  v1 = 0LL;
  v2 = 5LL;
  v3 = 5LL;
  memset(&Event, 0, sizeof(Event));
  do
  {
    v4 = *(_QWORD *)((char *)&AmliGlobalPreDefinedRootObjects + v1);
    dword_1C006F938 = 0;
    v5 = v4 + 120;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *(_QWORD *)((char *)&AcpiAmliPreDefinedRootAcpiObjects + v1) = v5;
    v1 += 8LL;
    --v3;
  }
  while ( v3 );
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = 0LL;
  do
  {
    v7 = *(_QWORD *)((char *)&AcpiAmliPreDefinedRootAcpiObjects + v6);
    if ( v7 == *(_QWORD *)(v0 + 760) )
    {
      v8 = *(_QWORD *)(v0 + 944);
LABEL_12:
      *(_QWORD *)((char *)&AcpiAmliPreDefinedRootNativeHandles + v6) = v8;
      goto LABEL_13;
    }
    *(_QWORD *)&v11 = 0LL;
    *((_QWORD *)&v11 + 1) = &Event;
    v12 = 3221225473LL;
    v9 = AcpiNotifyPlExtDiscoverDeviceAsync(v7, (__int64)ACPIRootDeviceDiscoverDeviceCompletion, (__int64)&v11);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v12;
    }
    if ( v9 >= 0 )
    {
      v8 = v11;
      if ( (_QWORD)v11 )
        goto LABEL_12;
    }
LABEL_13:
    v6 += 8LL;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
