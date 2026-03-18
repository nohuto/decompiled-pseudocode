/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C00B7910
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     RawInputManagerObjectDelete @ 0x1C004926C (RawInputManagerObjectDelete.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C4674 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00B7A2C (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidDesc @ 0x1C018B428 (RIMFreeHidDesc.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0194C38 (RIMReleasePointerDeviceInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0199EA0 (RIMFreeHidTLCInfo.c)
 *     RIMHidTLCActive @ 0x1C0199F40 (RIMHidTLCActive.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rdx
  char *v6; // rdx
  __int64 v7; // rax
  void *v8; // rcx
  char v9; // al
  char *v10; // rdx
  char *v11; // rdx
  char *v13; // rdx
  RIMDeadzone **v15; // rdi
  __int64 v16; // rsi
  RIMDeadzone *v17; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a2 + 192) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a2 + 104) != a2 + 104 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(char **)(a2 + 216);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
  v6 = *(char **)(a2 + 320);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v7 = *(_QWORD *)(a2 + 464);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_QWORD *)(a2 + 464)) )
        RIMFreeHidTLCInfo(*(void **)(a2 + 464));
    }
    v8 = *(void **)(a2 + 456);
    if ( v8 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 448) )
        {
          v15 = (RIMDeadzone **)(a2 + 408);
          v16 = 5LL;
          do
          {
            v17 = *v15;
            if ( *v15 )
            {
              RIMDeadzone::Release(v17);
              v6 = (char *)*v15;
              if ( *((_DWORD *)*v15 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v6, a3);
                v6 = (char *)*v15;
              }
              if ( v6 )
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  v6);
              *v15 = 0LL;
              --*(_DWORD *)(a2 + 448);
            }
            ++v15;
            --v16;
          }
          while ( v16 );
          if ( *(_DWORD *)(a2 + 448) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v6, a3);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
        v8 = *(void **)(a2 + 456);
      }
      RIMFreeHidDesc(v8);
      *(_QWORD *)(a2 + 456) = 0LL;
    }
  }
  v9 = *(_BYTE *)(a2 + 48);
  if ( v9 == 3 )
  {
    if ( !*(_QWORD *)(a2 + 464) )
      goto LABEL_16;
    RIMFreeHidDesc(*(void **)(a2 + 456));
    v9 = *(_BYTE *)(a2 + 48);
    *(_QWORD *)(a2 + 456) = 0LL;
  }
  if ( !v9 )
  {
    v13 = *(char **)(a2 + 896);
    if ( v13 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v13);
      *(_QWORD *)(a2 + 896) = 0LL;
      *(_WORD *)(a2 + 890) = 0;
    }
  }
LABEL_16:
  v10 = *(char **)(a2 + 352);
  if ( v10 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v10);
  v11 = *(char **)(a2 + 376);
  if ( v11 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v11);
  return RIMIDEFreeInjectedInfo(a2);
}
