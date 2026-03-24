/*
 * XREFs of KbdCreateClassObject @ 0x1C000DF80
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000D600 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000D7F0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002A40 (WPP_RECORDER_SF_S.c)
 *     KbdInitializeDataQueue @ 0x1C0002C30 (KbdInitializeDataQueue.c)
 *     RtlUnicodeStringPrintf @ 0x1C0002CE0 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0002DE0 (__security_check_cookie.c)
 *     memset @ 0x1C00031C0 (memset.c)
 *     KeyboardClassLogError @ 0x1C0004F98 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00060CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KbdCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        __int64 *a4,
        char a5)
{
  __int64 DeviceExtension; // rdi
  __int128 *v8; // rbx
  int v10; // r15d
  unsigned __int16 v11; // ax
  WCHAR *v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rdx
  unsigned __int64 v15; // rdx
  NTSTATUS v16; // esi
  unsigned __int64 v17; // r8
  PWSTR Buffer; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm0
  SIZE_T v22; // rdx
  PVOID PoolWithTag; // rax
  __int64 v24; // rdx
  int v25; // r8d
  int v26; // ebx
  PDEVICE_OBJECT v28; // rcx
  void *v29; // rcx
  int v30; // r9d
  NTSTATUS Device; // eax
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-50h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-50h]
  PWSTR Exclusive; // [rsp+28h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-20h]
  int v37; // [rsp+54h] [rbp-1Ch]
  _DWORD v38[4]; // [rsp+58h] [rbp-18h] BYREF

  DeviceExtension = 0LL;
  v37 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = a2;
  v36 = 0;
  v10 = 10000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 1LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    Device = IoCreateDevice(DriverObject, 0x180u, 0LL, 0xBu, 0, 0, a3);
    Buffer = DestinationString.Buffer;
    v16 = Device;
    *a4 = 0LL;
LABEL_20:
    if ( v16 < 0 || !*a3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_52:
        v10 = 10006;
        v38[0] = DestinationString.MaximumLength;
        v26 = -1073414131;
        v36 = 1;
LABEL_26:
        if ( !v16 )
          goto LABEL_27;
        goto LABEL_34;
      }
      v30 = 76;
      Exclusive = Buffer;
LABEL_51:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v15, v17, v30, DeviceCharacteristics, (__int64)Exclusive);
      goto LABEL_52;
    }
    (*a3)->Flags |= 4u;
    v19 = 3LL;
    DeviceExtension = (__int64)(*a3)->DeviceExtension;
    v20 = DeviceExtension;
    do
    {
      v20 += 128LL;
      v21 = *v8;
      v8 += 8;
      *(_OWORD *)(v20 - 128) = v21;
      *(_OWORD *)(v20 - 112) = *(v8 - 7);
      *(_OWORD *)(v20 - 96) = *(v8 - 6);
      *(_OWORD *)(v20 - 80) = *(v8 - 5);
      *(_OWORD *)(v20 - 64) = *(v8 - 4);
      *(_OWORD *)(v20 - 48) = *(v8 - 3);
      *(_OWORD *)(v20 - 32) = *(v8 - 2);
      *(_OWORD *)(v20 - 16) = *(v8 - 1);
      --v19;
    }
    while ( v19 );
    *(_QWORD *)DeviceExtension = *a3;
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x4364624Bu, 0, 0, 0x20u);
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 160));
    v22 = *(unsigned int *)(DeviceExtension + 140);
    *(_QWORD *)(DeviceExtension + 176) = DeviceExtension + 168;
    *(_QWORD *)(DeviceExtension + 168) = DeviceExtension + 168;
    *(_DWORD *)(DeviceExtension + 80) = 0;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v22, 0x4364624Bu);
    *(_QWORD *)(DeviceExtension + 104) = PoolWithTag;
    if ( PoolWithTag )
    {
      KbdInitializeDataQueue(DeviceExtension, v24);
      v26 = v37;
      goto LABEL_26;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v24, v25, 77, DeviceCharacteristicsa, *a4);
    }
    v16 = -1073741670;
    v26 = -1073414142;
    v10 = 10020;
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v11 = ::DestinationString.Length + 30;
    DestinationString.MaximumLength = ::DestinationString.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v11 = ::DestinationString.Length + 44;
      DestinationString.MaximumLength = ::DestinationString.Length + 44;
    }
    v12 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v11, 0x4364624Bu);
    DestinationString.Buffer = v12;
    if ( v12 )
    {
      memset(v12, 0, DestinationString.MaximumLength);
      while ( 1 )
      {
        v14 = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 ? L"\\Device\\%wZLegacy%d" : L"\\Device\\%wZ%d";
        ++dword_1C000A594;
        v16 = RtlUnicodeStringPrintf(&DestinationString, v14, &::DestinationString);
        if ( v16 < 0 )
          break;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v15) = 5;
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            v17,
            75,
            DeviceCharacteristics,
            (__int64)DestinationString.Buffer);
        }
        v16 = IoCreateDevice(DriverObject, 0x180u, &DestinationString, 0xBu, 0, 0, a3);
        if ( v16 != -1073741771 )
        {
          v10 = 10000;
          v15 = DestinationString.Length + 2LL;
          if ( DestinationString.MaximumLength >= v15 )
          {
            v17 = (unsigned __int64)DestinationString.Length >> 1;
            DestinationString.Buffer[v17 + 1] = 0;
            Buffer = DestinationString.Buffer;
            *a4 = (__int64)DestinationString.Buffer;
            goto LABEL_20;
          }
          v16 = -1073741823;
          v26 = 0;
          goto LABEL_34;
        }
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v30 = 74;
      Exclusive = DestinationString.Buffer;
      goto LABEL_51;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
    }
    v16 = -1073741823;
    v38[0] = DestinationString.MaximumLength;
    v26 = -1073414143;
    v10 = 10006;
    v36 = 1;
  }
LABEL_34:
  RtlFreeUnicodeString(&DestinationString);
  *a4 = 0LL;
  if ( v26 )
  {
    v28 = *a3;
    if ( !*a3 )
      v28 = (PDEVICE_OBJECT)DriverObject;
    KeyboardClassLogError(v28, v26, v10, v16, v36, v38, 0);
  }
  if ( DeviceExtension )
  {
    v29 = *(void **)(DeviceExtension + 104);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
  }
  if ( *a3 )
  {
    IoDeleteDevice(*a3);
    *a3 = 0LL;
  }
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v15, 1LL);
  }
  return (unsigned int)v16;
}
