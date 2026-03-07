unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusLogEventGlobal(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8

  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(int *)(v1 + 32);
    v4 = *(unsigned int *)(v2 + 28);
    if ( (int)v3 >= 0 )
    {
      WdLogSingleEntry2(4LL, *(int *)(v2 + 24), v4);
    }
    else
    {
      WdLogSingleEntry3(2LL, v3, *(int *)(v2 + 24), (unsigned int)v4);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Status: 0x%I64x, Scenario: 0x%I64x, EventId: 0x%I64x",
        *(int *)(v2 + 32),
        *(int *)(v2 + 24),
        *(unsigned int *)(v2 + 28),
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v2 + 24) == 1 && !_InterlockedCompareExchange(&dword_1C013D390, 1, 0) )
      DxgCreateLiveDumpWithWdLogs2(
        *(_DWORD *)(v2 + 28),
        *(_QWORD *)(v2 + 40),
        *(_QWORD *)(v2 + 48),
        *(_QWORD *)(v2 + 56),
        *(_QWORD *)(v2 + 64),
        *(unsigned __int8 *)(v2 + 72));
  }
  return 0;
}
