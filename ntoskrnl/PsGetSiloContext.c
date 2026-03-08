/*
 * XREFs of PsGetSiloContext @ 0x1402F7C30
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageGetObject @ 0x14078AF38 (PspStorageGetObject.c)
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1520);
  else
    v3 = qword_140D49ED0;
  *a3 = 0LL;
  return PspStorageGetObject(v3);
}
