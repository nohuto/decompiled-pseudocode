/*
 * XREFs of PsGetSiloContext @ 0x1402005A0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageGetObject @ 0x1402005D0 (PspStorageGetObject.c)
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1304);
  else
    v3 = qword_140D24990;
  *a3 = 0LL;
  return PspStorageGetObject(v3);
}
