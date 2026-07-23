/*
 * XREFs of RtlInsertHeadCircularList @ 0x14024AC04
 * Callers:
 *     ExpPrepareToWaitForResourceShared @ 0x14024F25C (ExpPrepareToWaitForResourceShared.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038FF80 (KeCaptureWaitChainHeadEx.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1408843A0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInsertHeadCircularList(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  result = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD **)(result + 8);
    if ( *v3 != result )
      __fastfail(3u);
    *a2 = result;
    a2[1] = v3;
    *v3 = a2;
    *(_QWORD *)(result + 8) = a2;
  }
  else
  {
    a2[1] = a2;
    *a2 = a2;
  }
  *a1 = (__int64)a2;
  return result;
}
