/*
 * XREFs of HUBISM_MarkingRequestCancellable @ 0x1C003F0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBISM_MarkingRequestCancellable(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx

  v1 = 6005;
  _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 168) + 104LL), (__int64)HUBIDLE_CancelIdle);
  v2 = *(_QWORD *)(a1 + 168);
  if ( *(_BYTE *)(v2 + 68) && _InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) )
    return 6004;
  return v1;
}
