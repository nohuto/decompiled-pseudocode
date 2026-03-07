__int64 __fastcall PnpSetCustomTargetEvent(
        _QWORD *Object,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *Src)
{
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 DeviceEventEntry; // rbx
  const void *v13; // rdx
  void *v14; // rcx

  if ( a2 )
    *a3 = 259;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v10 = *(_QWORD *)(Object[39] + 40LL);
  else
    v10 = 0LL;
  v11 = Src[1] + ((*(unsigned __int16 *)(v10 + 40) + 89) & 0xFFFFFFF8);
  DeviceEventEntry = PnpCreateDeviceEventEntry(v11 + 112);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *(_QWORD *)(DeviceEventEntry + 40) = a5;
  *(_QWORD *)(DeviceEventEntry + 24) = a2;
  *(_QWORD *)(DeviceEventEntry + 32) = a4;
  *(_DWORD *)(DeviceEventEntry + 144) = 0;
  *(_DWORD *)(DeviceEventEntry + 128) = 3;
  *(GUID *)(DeviceEventEntry + 112) = GUID_PNP_CUSTOM_NOTIFICATION;
  *(_QWORD *)(DeviceEventEntry + 136) = a3;
  *(_DWORD *)(DeviceEventEntry + 148) = v11;
  *(_QWORD *)(DeviceEventEntry + 152) = Object;
  v13 = *(const void **)(v10 + 48);
  if ( v13 )
    memmove((void *)(DeviceEventEntry + 168), v13, *(unsigned __int16 *)(v10 + 40));
  v14 = (void *)(DeviceEventEntry + v11 + 112 - (unsigned __int64)Src[1]);
  *(_QWORD *)(DeviceEventEntry + 160) = v14;
  memmove(v14, Src, Src[1]);
  return PnpInsertEventInQueue(DeviceEventEntry);
}
