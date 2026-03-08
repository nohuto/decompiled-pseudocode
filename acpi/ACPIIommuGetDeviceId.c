/*
 * XREFs of ACPIIommuGetDeviceId @ 0x1C0087EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 */

__int64 __fastcall ACPIIommuGetDeviceId(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v6; // r8
  _BYTE *v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 result; // rax

  v6 = -1LL;
  v8 = *(_BYTE **)(a1 + 96);
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  v10 = v9 + 25;
  if ( a2 >= v10 )
  {
    *(_OWORD *)a3 = *(_OWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a3 + 8) = a3 + 24;
    do
      ++v6;
    while ( v8[v6] );
    memmove((void *)(a3 + 24), v8, v6 + 1);
    result = 0LL;
  }
  else
  {
    result = 3221225507LL;
  }
  if ( a4 )
    *a4 = v10;
  return result;
}
