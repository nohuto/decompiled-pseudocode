/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18003DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180031DC0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18003DF4C (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180063330 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180067EF0 (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180067FE4 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebx
  DWORD TickCount; // eax
  unsigned __int64 v10; // r8
  ExecutionModel::ResourceManager *v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  DWORD v15; // ebx
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-B4h]
  unsigned int v21; // [rsp+38h] [rbp-B0h] BYREF
  int v22; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v23[144]; // [rsp+40h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  RmpAcquireGlobalLock();
  v6 = *((_DWORD *)a1 + 164);
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  if ( v7 )
  {
    if ( *((_DWORD *)a3 + 5) )
      v8 = v6 & 0xFFFFFFFD;
    else
      v8 = v6 | 2;
  }
  else
  {
    v8 = v6 | 1;
    if ( !*((_DWORD *)a3 + 5) )
      v8 = *((_DWORD *)a1 + 164) & 0xFFFFFFFE;
  }
  v19 = *((_DWORD *)a1 + 164);
  v20 = v8;
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
    v5,
    (int (*)(struct _RM_PARTITION *, void *))RmpMemoryMonitorInstanceOnSystemStateChanged,
    &v19);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v8 & 1) != 0 ? 3600000 : 900000, TickCount);
  v10 = *((unsigned int *)a1 + 131);
  v11 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 340);
  if ( (_DWORD)v10 )
  {
    v17 = (v20 >> 1) & 1;
    if ( ((v19 >> 1) & 1) != v17 )
    {
      if ( v17 )
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
          v11,
          *((unsigned int *)a1 + 131),
          (struct ExecutionModel::BaseResourceSet *)v10);
      }
      else
      {
        v18 = *((_QWORD *)v11 + 4);
        *((_QWORD *)v11 + 6) -= v10;
        if ( (*(_BYTE *)(v18 + 1272) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v11, v10);
      }
    }
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v22 = *((_DWORD *)a1 + 164);
    v21 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_18009CD8F,
      v13,
      v14,
      (__int64)&v22,
      (__int64)&v21);
  }
  *((_DWORD *)a1 + 164) = v8;
  RmpReleaseGlobalLock();
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return 0LL;
}
