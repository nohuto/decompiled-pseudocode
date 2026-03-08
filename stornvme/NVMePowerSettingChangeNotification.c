/*
 * XREFs of NVMePowerSettingChangeNotification @ 0x1C0010430
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C0010AA0 (NVMeUpdateResumeLatencyTolerance.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023ED4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 */

char __fastcall NVMePowerSettingChangeNotification(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( (a1[470] & 1) != 0 )
  {
    v2 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1 )
      v2 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data4;
    if ( !v2 && *(_DWORD *)(a2 + 24) == 4 )
    {
      a1[476] = **(_DWORD **)(a2 + 16);
LABEL_18:
      NVMeUpdateResumeLatencyTolerance(a1);
      return 1;
    }
    v3 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1 )
      v3 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT1.Data4;
    if ( v3 || *(_DWORD *)(a2 + 24) != 4 )
    {
      v4 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1;
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1 )
        v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data4;
      if ( !v4 && *(_DWORD *)(a2 + 24) == 4 )
      {
        a1[478] = **(_DWORD **)(a2 + 16);
        goto LABEL_18;
      }
      v5 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1;
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1 )
        v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT2.Data4;
      if ( v5 || *(_DWORD *)(a2 + 24) != 4 )
      {
        v6 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_NOPPME.Data1;
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_NOPPME.Data1 )
          v6 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_NOPPME.Data4;
        if ( !v6 && *(_DWORD *)(a2 + 24) == 4 )
        {
          LOBYTE(a2) = **(_BYTE **)(a2 + 16);
          NVMeSetNonOperationalPowerStatePermissiveMode(a1, a2);
        }
      }
      else
      {
        a1[479] = **(_DWORD **)(a2 + 16);
      }
    }
    else if ( a1[23] == -1 )
    {
      a1[477] = **(_DWORD **)(a2 + 16);
    }
  }
  return 1;
}
