/*
 * XREFs of Bulk_EP_StopMapping @ 0x1C000F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 */

void __fastcall Bulk_EP_StopMapping(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( _InterlockedExchange((volatile __int32 *)(a1 + 108), 1) == 2
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
  {
    v1 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v1 + 37)
      || (v2 = *(_QWORD *)(v1 + 136), _InterlockedIncrement((volatile signed __int32 *)(v2 + 20)) == *(_DWORD *)(v2 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v1 + 296), 20);
    }
  }
}
