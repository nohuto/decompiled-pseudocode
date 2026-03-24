/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x1C00515E8
 * Callers:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C00388CC (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C0051844 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0051F9C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003A380 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  NTSTATUS result; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int i; // edi
  __int64 v15; // rbp
  struct _IO_REMOVE_LOCK *v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int RemlockSize; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  WdLogEvent5_WdPower(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    RemlockSize = v2;
    McTemplateK0pq_EtwWriteTransfer(v5, &Dxgk_DpiRequestDevicePowerIrp, v6, *(_QWORD *)(a1 + 3896), RemlockSize);
  }
  v7 = *(unsigned int *)(a1 + 4284);
  if ( (unsigned int)v7 >= 3 )
  {
    *(_DWORD *)(a1 + 4284) = 0;
    v7 = 0LL;
  }
  v8 = a1 + 8 * (v7 + 2 * (v7 + 268));
  *(_DWORD *)(v8 + 20) = 0;
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)(v8 + 16) = v2;
  *(_QWORD *)v8 = MEMORY[0xFFFFF78000000014];
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    result = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(a1 + 24),
               2u,
               (POWER_STATE)v2,
               (PREQUEST_POWER_COMPLETE)DpiRuntimePowerIrpCompletion,
               (PVOID)v8,
               0LL);
    v10 = result;
    if ( result != 259 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, 0x20u);
      *(_QWORD *)(v8 + 8) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v8 + 20) = v10;
      v13 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v13 + 24) = v10;
      result = WdLogEvent5_WdError(v13);
    }
    ++*(_DWORD *)(a1 + 4284);
    if ( *(_DWORD *)(a1 + 504) )
    {
      if ( *(_BYTE *)(a1 + 508) == 1 )
      {
        for ( i = 1; i < *(_DWORD *)(a1 + 2736); ++i )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2728) + 8LL * i) + 64LL);
          v16 = (struct _IO_REMOVE_LOCK *)(v15 + 64);
          result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v15 + 64), 0LL, File, 1u, 0x20u);
          if ( result >= 0 )
          {
            result = PoRequestPowerIrp(
                       *(PDEVICE_OBJECT *)(v15 + 24),
                       2u,
                       (POWER_STATE)v2,
                       (PREQUEST_POWER_COMPLETE)DpiRuntimePowerIrpCompletion,
                       0LL,
                       0LL);
            v17 = result;
            if ( result != 259 )
            {
              IoReleaseRemoveLockEx(v16, 0LL, 0x20u);
              v20 = WdLogNewEntry5_WdError(v19, v18);
              *(_QWORD *)(v20 + 24) = v17;
              result = WdLogEvent5_WdError(v20);
            }
          }
        }
      }
    }
  }
  return result;
}
