/*
 * XREFs of RawCompletionRoutine @ 0x1402DE9A0
 * Callers:
 *     <none>
 * Callees:
 *     RawInitiateDeleteVolume @ 0x14026D9DC (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     RawEndOperation @ 0x1402DEA38 (RawEndOperation.c)
 */

__int64 __fastcall RawCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 184);
  if ( (unsigned __int8)(*(_BYTE *)v3 - 3) <= 1u )
  {
    v5 = *(_QWORD *)(v3 + 48);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 80) & 2) != 0 && *(int *)(a2 + 48) >= 0 )
        *(_QWORD *)(v5 + 104) += *(_QWORD *)(a2 + 56);
    }
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  RawEndOperation(a3, *(_QWORD *)(v3 + 48));
  if ( *(_BYTE *)v3 == 27 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
    --*(_DWORD *)(a3 + 112);
    if ( *(_DWORD *)(a3 + 108) || !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a3, 0, 0) )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
  }
  return 0LL;
}
