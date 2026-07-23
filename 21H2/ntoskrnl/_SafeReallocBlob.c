/*
 * XREFs of _SafeReallocBlob @ 0x1405CAC8C
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x140981B88 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguages @ 0x140981BF4 (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void *__fastcall SafeReallocBlob(
        unsigned int *BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // esi
  PVOID PoolWithTag; // rax
  void *v12; // rbx

  if ( !BugCheckParameter2 )
    return 0LL;
  v8 = a4 * (unsigned __int64)a3;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v8 + a2;
  if ( (unsigned int)v8 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v9;
  if ( v9 )
  {
    v10 = v8 + a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
    v12 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v10);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    return 0LL;
  memmove(v12, BugCheckParameter2, *BugCheckParameter2);
  ExFreeHeapPool((ULONG_PTR)BugCheckParameter2);
  return v12;
}
