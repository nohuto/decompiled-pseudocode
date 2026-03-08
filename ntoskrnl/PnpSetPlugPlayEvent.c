/*
 * XREFs of PnpSetPlugPlayEvent @ 0x140688820
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140688A98 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 */

void __fastcall PnpSetPlugPlayEvent(__int128 *a1, _QWORD *a2)
{
  void *v2; // rbp
  __int64 v4; // rsi
  int v5; // r14d
  __int64 DeviceEventEntry; // rax
  __int64 v7; // rbx
  __int128 v8; // xmm0
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = a2;
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    v4 = *(_QWORD *)(a2[39] + 40LL);
    if ( v4 )
    {
      v5 = *(unsigned __int16 *)(v4 + 40) + 80;
      DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(v4 + 40) + 192);
      v7 = DeviceEventEntry;
      if ( DeviceEventEntry )
      {
        v8 = *a1;
        *(_DWORD *)(DeviceEventEntry + 148) = v5;
        v9 = (void *)(DeviceEventEntry + 160);
        *(_OWORD *)(DeviceEventEntry + 112) = v8;
        v10 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v10 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( v10 )
          *(_DWORD *)(v7 + 128) = 1;
        else
          *(_DWORD *)(v7 + 128) = 4;
        memmove(v9, *(const void **)(v4 + 48), *(unsigned __int16 *)(v4 + 40));
        *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v4 + 40) >> 1) + 160) = 0;
        v11 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v11 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( !v11 )
          goto LABEL_11;
        v12 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
          v12 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
        if ( v12 )
          ObfReferenceObjectWithTag(v2, 0x56706E50u);
        else
LABEL_11:
          v2 = 0LL;
        *(_QWORD *)(v7 + 152) = v2;
        PnpInsertEventInQueue(v7);
      }
    }
  }
}
