__int64 __fastcall PiUEventNotifyDeviceInterfaceChange(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rax
  _QWORD *v4; // r15
  unsigned int v5; // esi
  _QWORD **v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v11; // rax
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v2 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v11 )
  {
LABEL_4:
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = v12;
    v12[1] = &unk_140C5CC50;
    v5 = 0;
    v12[0] = (char *)&PiUEventDevInterfaceClientList
           + 16 * (unsigned int)PiUEventHashGuidIntoBucket((unsigned __int8 *)(a1 + 120));
    do
    {
      v6 = (_QWORD **)*v4;
      v7 = *(_QWORD **)*v4;
      while ( v7 != v6 )
      {
        v8 = (__int64)v7;
        v7 = (_QWORD *)*v7;
        if ( !v5 )
        {
          v9 = *(_QWORD *)(a1 + 120) - *(_QWORD *)(v8 + 24);
          if ( !v9 )
            v9 = *(_QWORD *)(a1 + 128) - *(_QWORD *)(v8 + 32);
          if ( v9 )
            continue;
        }
        if ( PiUEventApplyAdditionalFilters(a1, v8) )
          v1 = PiUEventNotifyClient(a1, v8);
      }
      ++v5;
      ++v4;
    }
    while ( v5 < 2 );
    ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
