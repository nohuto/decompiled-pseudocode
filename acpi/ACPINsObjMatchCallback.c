/*
 * XREFs of ACPINsObjMatchCallback @ 0x1C002CB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPINsObjMatchCallback(__int64 a1, int a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  unsigned int v6; // r8d

  v6 = 0;
  if ( a2 == 1 && a6 == 1 && *(_DWORD *)(*(_QWORD *)a1 + 8LL) == 8 && *(_DWORD *)(***(_QWORD ***)a1 + 40LL) == *a5 )
    return 2;
  return v6;
}
