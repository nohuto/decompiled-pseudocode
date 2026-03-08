/*
 * XREFs of HUBDSM_DiscardSerialNumber @ 0x1C0023380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_DiscardSerialNumber(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2152);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1632), 0xFFFFFFBF);
  *(_QWORD *)(v1 + 2152) = 0LL;
  return 4077LL;
}
