/*
 * XREFs of IvtSlConfigureIntermediatePhysicalPte @ 0x1403ADD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall IvtSlConfigureIntermediatePhysicalPte(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  char result; // al

  v3 = *a1;
  if ( *a1 )
    return 0;
  v5 = 1LL;
  v6 = 2LL;
  do
  {
    v7 = v5++;
    v8 = v3 | v7;
    v3 = v8;
    --v6;
  }
  while ( v6 );
  v9 = v8 ^ (a3 ^ v8) & 0xFFFFFFFFFF000LL;
  result = 1;
  *a1 = v9;
  return result;
}
