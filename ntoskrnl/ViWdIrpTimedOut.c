/*
 * XREFs of ViWdIrpTimedOut @ 0x140ADB3EC
 * Callers:
 *     ViWdIrpTimerDpcRoutine @ 0x140ADB490 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x140AD0684 (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViWdIrpTimedOut(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v2; // r8
  unsigned int v3; // ecx
  int v4; // ebx
  const void *v5; // r8

  result = (unsigned int)ViWdBreaksEnabled;
  if ( ViWdBreaksEnabled )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 1000 * *(unsigned __int16 *)(a1 + 30);
    if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
    {
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 0x10) != 0 )
        return VerifierBugCheckIfAppropriate(0xC4u, 0x135uLL, v2, v3, 0LL);
    }
    else
    {
      v4 = VfErrorStoreTriageInformation(196LL, 0x135uLL, v2, v3, 0LL);
      result = VfUtilDbgPrint("Cancelled IRP %p didn't complete in due time.\n", v5);
      __debugbreak();
      if ( v4 )
        _InterlockedExchange(&VfErrorBugcheckDataReady, 0);
    }
  }
  return result;
}
