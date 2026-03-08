/*
 * XREFs of MiIoPfnTreeLockContended @ 0x1403BFB90
 * Callers:
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062C34C (MiMarkHugeRangeIoPfnDeleted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIoPfnTreeLockContended(char a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 0;
  if ( !a1 )
    return (*(_DWORD *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577) + 384LL) >> 30) & 1;
  if ( !KeNumberNodes )
    return 0LL;
  for ( i = qword_140C65720 + 368; (*(_DWORD *)(*(_QWORD *)i + 384LL) & 0x40000000) == 0; i += 376LL )
  {
    if ( ++v1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      return 0LL;
  }
  return 1LL;
}
