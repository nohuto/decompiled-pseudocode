/*
 * XREFs of VidMmUnreferencePrimaryAllocation @ 0x1C002D5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmUnreferencePrimaryAllocation(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a3 + 96);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 104));
  if ( a4 )
  {
    result = *(_QWORD *)(result + 16);
    if ( result )
      _InterlockedDecrement((volatile signed __int32 *)(result + 8));
  }
  return result;
}
