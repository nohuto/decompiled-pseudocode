/*
 * XREFs of GetWorkspaceId @ 0x1C0149DA0
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01D1E70 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetWorkspaceId(int a1)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a1, 19);
  if ( result )
    return *(unsigned int *)(result + 1324);
  return result;
}
