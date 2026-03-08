/*
 * XREFs of PiUEventNotifyTargetDeviceChange @ 0x14068CA08
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14068D8E0 (PiUEventProcessEventWorker.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140201E5C (PiUEventHashStringIntoBucket.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiUEventApplyAdditionalFilters @ 0x140680230 (PiUEventApplyAdditionalFilters.c)
 *     PiUEventNotifyClient @ 0x14068032C (PiUEventNotifyClient.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventNotifyTargetDeviceChange(__int64 a1)
{
  _DWORD *Pool2; // rdi
  char v2; // si
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  const WCHAR *v13; // r13
  _QWORD **v14; // r12
  _QWORD *v15; // r14
  char v16; // al
  __int64 v17; // rsi
  __int64 v19; // rdx
  char v20; // [rsp+80h] [rbp+8h]
  char v21; // [rsp+88h] [rbp+10h]

  Pool2 = 0LL;
  v2 = 0;
  v20 = 0;
  v3 = 0;
  v21 = 0;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
  if ( !v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_PNP_CUSTOM_NOTIFICATION.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_PNP_CUSTOM_NOTIFICATION.Data4;
  if ( !v10 )
  {
LABEL_16:
    v11 = *(_DWORD *)(a1 + 88) - 1;
    if ( v11 )
    {
      if ( v11 != 2 )
        return (unsigned int)v3;
      v20 = 1;
      v12 = 128LL;
    }
    else
    {
      v12 = 120LL;
    }
    v13 = (const WCHAR *)(v12 + a1);
    if ( *(_BYTE *)(a1 + 68) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4096LL, 1500540496LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v4 = 1;
    }
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v14 = (_QWORD **)((char *)&PiUEventDevHandleClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v13));
    v15 = *v14;
    if ( *v14 != v14 )
    {
      v16 = v20;
      do
      {
        v17 = (__int64)v15;
        v15 = (_QWORD *)*v15;
        if ( !v16 || !*(_BYTE *)(v17 + 40) )
        {
          if ( wcsicmp(v13, *(const wchar_t **)(*(_QWORD *)(v17 + 24) + 16LL))
            || !PiUEventApplyAdditionalFilters(a1, v17)
            || (v3 = PiUEventNotifyClient(a1, v17), v3 < 0) )
          {
            v16 = v20;
          }
          else
          {
            v16 = v20;
            if ( Pool2 )
            {
              if ( v4 >= 0x400 )
              {
                v2 = 1;
                v21 = 1;
                continue;
              }
              v19 = v4++;
              Pool2[v19] = *(_DWORD *)(v17 + 48);
            }
          }
        }
        v2 = v21;
      }
      while ( v15 != v14 );
    }
    if ( Pool2 && v4 > 1 )
    {
      if ( v2 )
      {
        memset(Pool2 + 1, 0, 0xFFCuLL);
        *Pool2 = -1;
      }
      else
      {
        *Pool2 = v4 - 1;
      }
      ZwUpdateWnfStateData((__int64)&WNF_PNPB_AWAITING_RESPONSE, (__int64)Pool2);
    }
    ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x59706E50u);
  }
  return (unsigned int)v3;
}
