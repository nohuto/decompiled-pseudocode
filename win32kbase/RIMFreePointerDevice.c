/*
 * XREFs of RIMFreePointerDevice @ 0x1C01B5B18
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0093B20 (UserDeactivateMITInputProcessing.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C01B9064 (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRemoveFromActiveDevices @ 0x1C01B9190 (RIMRemoveFromActiveDevices.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C01DEA60 (RIMCmFreePointerDeviceContacts.c)
 *     ApiSetFreePointerDeviceCalData @ 0x1C0244144 (ApiSetFreePointerDeviceCalData.c)
 *     ApiSetFreePointerDeviceCalibrationInfo @ 0x1C0244294 (ApiSetFreePointerDeviceCalibrationInfo.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  char *v7; // rdx
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // rdx
  char *v12; // rdx
  char *v13; // rdx
  char *v14; // rdx
  char *v15; // rdx
  char *v16; // rdx
  _QWORD *v17; // rax

  RIMRemoveFromActiveDevices();
  v5 = *(_QWORD **)(a1 + 432);
  while ( v5 != (_QWORD *)(a1 + 432) )
  {
    v6 = v5 - 114;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 == (_QWORD *)a2 )
    {
      if ( (_QWORD *)v5[1] != v4 || (v17 = (_QWORD *)v4[1], (_QWORD *)*v17 != v4) )
        __fastfail(3u);
      *v17 = v5;
      v5[1] = v17;
      v4[1] = v4;
      *v4 = v4;
      break;
    }
  }
  v7 = *(char **)(a2 + 1024);
  if ( v7 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    *(_QWORD *)(a2 + 1024) = 0LL;
  }
  v8 = *(char **)(a2 + 928);
  if ( v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
    *(_QWORD *)(a2 + 928) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 392);
  if ( v9 )
  {
    ApiSetFreePointerDeviceCalData(v9, v8, v4);
    ApiSetFreePointerDeviceCalibrationInfo(*(_QWORD *)(a2 + 392));
    *(_QWORD *)(a2 + 392) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v8, v4);
  v10 = *(_QWORD *)(a2 + 760);
  if ( v10 )
  {
    v11 = *(char **)(v10 + 24);
    if ( v11 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
      *(_QWORD *)(*(_QWORD *)(a2 + 760) + 24LL) = 0LL;
    }
    v12 = *(char **)(*(_QWORD *)(a2 + 760) + 16LL);
    if ( v12 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v12);
      *(_QWORD *)(*(_QWORD *)(a2 + 760) + 16LL) = 0LL;
    }
    v13 = *(char **)(a2 + 760);
    if ( v13 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
    *(_QWORD *)(a2 + 760) = 0LL;
  }
  v14 = *(char **)(a2 + 376);
  if ( v14 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    *(_QWORD *)(a2 + 376) = 0LL;
  }
  v15 = *(char **)(a2 + 816);
  if ( v15 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
    *(_QWORD *)(a2 + 816) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 360) & 0x400) != 0 )
  {
    if ( *(_DWORD *)(a1 + 720) < *(_DWORD *)(a2 + 768) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 971);
    *(_DWORD *)(a1 + 720) -= *(_DWORD *)(a2 + 768);
  }
  if ( *(_QWORD *)(a2 + 912) != a2 + 912 )
    __int2c();
  v16 = *(char **)(a2 + 1064);
  if ( v16 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
    *(_QWORD *)(a2 + 1064) = 0LL;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
}
