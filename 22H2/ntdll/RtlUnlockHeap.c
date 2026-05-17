/*
 * XREFs of RtlUnlockHeap @ 0x18005FA00
 * Callers:
 *     RtlExitUserProcess @ 0x18005EED0 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005F5A0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18005F620 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlValidateHeap @ 0x18005F650 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750CC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180109280 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18005FA90 (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapUnlock @ 0x18005FB9C (RtlpHpHeapUnlock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapUnlockEvent @ 0x18010A7A0 (RtlpLogHeapUnlockEvent.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapUnlock(a1, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180166448)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlUnlockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v4 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 416);
      RtlLeaveCriticalSection(v4, v2, v3);
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v6 = 2147353472LL;
  if ( *(_BYTE *)v6 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(a1);
  }
  return 1;
}
