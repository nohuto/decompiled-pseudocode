/*
 * XREFs of IdpValidateAcpiName @ 0x1408411C8
 * Callers:
 *     PipIommuValidateDeviceId @ 0x140841140 (PipIommuValidateDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IdpValidateAcpiName(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  bool v5; // cf

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return 3221225990LL;
  if ( v2 < a1 + 24 )
    return 3221225793LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(v2 + v3) );
  v5 = v3 == -1;
  v4 = v3 + 1;
  if ( v5 || v4 == 1 )
    return 3221487672LL;
  else
    return a1 + a2 < v2 + v4 ? 0x80000005 : 0;
}
