/*
 * XREFs of MiConvertStaticSubsections @ 0x14034C9D8
 * Callers:
 *     MiInsertUnusedSegment @ 0x14034C75C (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140334A28 (MiRemoveViewsFromSection.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140668EB4 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  __int16 v3; // ax
  int v5; // r8d
  unsigned __int64 v6; // rdx

  v1 = 0LL;
  v2 = a1 + 128;
  do
  {
    v3 = *(_WORD *)(v2 + 34);
    if ( (v3 & 8) == 0 )
    {
      if ( (v3 & 1) != 0 )
      {
        if ( (*(_DWORD *)(v2 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v2, 0x3FFFFFFFLL);
          v5 = 24;
        }
        else
        {
          v5 = 4;
        }
        v6 = *(unsigned int *)(v2 + 44);
        *(_WORD *)(v2 + 34) &= ~1u;
        *(_QWORD *)(v2 + 96) = 1LL;
        v1 += MiRemoveViewsFromSection(v2, v6, v5);
      }
      else if ( *(_QWORD *)(v2 + 8) && !*(_QWORD *)(v2 + 96) )
      {
        KeBugCheckEx(0x1Au, 0x42003uLL, v2, 0LL, 0LL);
      }
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  return v1;
}
