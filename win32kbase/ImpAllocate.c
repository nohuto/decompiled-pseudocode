/*
 * XREFs of ImpAllocate @ 0x1C0089EE4
 * Callers:
 *     ImpInitializeWork @ 0x1C0089C08 (ImpInitializeWork.c)
 *     ImpInitializeLock @ 0x1C008BE24 (ImpInitializeLock.c)
 *     ImpRpcAsyncInit @ 0x1C008C754 (ImpRpcAsyncInit.c)
 *     MIDL_user_allocate @ 0x1C0274880 (MIDL_user_allocate.c)
 *     ImpQueueCharacter @ 0x1C0274AC8 (ImpQueueCharacter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00E1674 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall ImpAllocate(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx

  v6 = (-(__int64)(a2 != 0) & 0xC0) + 64;
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
  {
    v7 = (-(__int64)(a2 != 0) & 0xC0) + 68;
    if ( !a3 )
      v7 = v6;
  }
  else
  {
    v7 = (-(__int64)(a2 != 0) & 0xC0) + 68;
    if ( !a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  return ExAllocatePool2(v7, a1, 1836084809LL);
}
