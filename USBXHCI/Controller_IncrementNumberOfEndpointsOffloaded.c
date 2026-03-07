__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1)
{
  __int64 v2; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 648));
  if ( !*(_DWORD *)(a1 + 640) && *(_DWORD *)(a1 + 636) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v2 = *(_QWORD *)(a1 + 832);
    *(_BYTE *)(a1 + 840) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v2);
  }
  ++*(_DWORD *)(a1 + 640);
  return DynamicLock_Release(*(_QWORD *)(a1 + 648));
}
