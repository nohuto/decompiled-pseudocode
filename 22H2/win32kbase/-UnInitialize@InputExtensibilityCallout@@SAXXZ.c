/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00B75D0
 * Callers:
 *     InitializeInputComponents @ 0x1C00821D8 (InitializeInputComponents.c)
 *     UnInitializeInputComponents @ 0x1C00B6FA4 (UnInitializeInputComponents.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00B7678 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9

  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16048) )
  {
    v8 = SGDGetUserSessionState(v5, v4, v6, v7);
    InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(v8 + 16048));
    v15 = *(_QWORD *)(SGDGetUserSessionState(v10, v9, v11, v12) + 16048);
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 16) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v15);
    }
    *(_QWORD *)(SGDGetUserSessionState(v14, v13, v16, v17) + 16048) = 0LL;
  }
}
