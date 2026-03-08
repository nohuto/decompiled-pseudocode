/*
 * XREFs of ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C00F3198
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C020BB8C (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::IsInjectionDeviceFromKernelHandle(CBaseInput *this, void *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 i; // rcx

  v4 = 0;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 165) + 8LL) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2423);
  v5 = *((_QWORD *)this + 165);
  RIMLockExclusive(v5);
  for ( i = **((_QWORD **)this + 166); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(void **)(i + 24) == a2 )
    {
      v4 = -__CFSHR__(*(_DWORD *)(i + 184), 14);
      break;
    }
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
