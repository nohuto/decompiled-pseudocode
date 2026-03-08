/*
 * XREFs of PspIsSetJobIoAttributionJobPreCallback @ 0x14079AED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIsSetJobIoAttributionJobPreCallback(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 1564) )
    return a2 != a1 ? 0xC0000718 : 0;
  else
    return 0LL;
}
