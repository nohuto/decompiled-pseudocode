/*
 * XREFs of ACPIComputeDeviceIdMutiStringLength @ 0x1C0043918
 * Callers:
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C00439DC (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C0097D3C (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIComputeDeviceIdMutiStringLength(_WORD *a1)
{
  _WORD *v2; // r8
  __int64 i; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  v2 = a1;
  for ( i = 0LL; *v2; v2 = &a1[i] )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    i += (unsigned int)(v4 + 1);
  }
  v5 = 1LL;
  if ( i )
    v5 = i;
  return v5 + 1;
}
