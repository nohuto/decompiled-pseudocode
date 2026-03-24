/*
 * XREFs of RtlInsertHeadCircularList @ 0x140325914
 * Callers:
 *     ExpPrepareToWaitForResourceShared @ 0x14032A0DC (ExpPrepareToWaitForResourceShared.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038F730 (KeCaptureWaitChainHeadEx.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140884290 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
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
