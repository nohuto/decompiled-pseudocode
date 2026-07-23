/*
 * XREFs of _SafeAllocBlob @ 0x1403A8A54
 * Callers:
 *     RtlpMuiRegCreateLanguages @ 0x1407900C0 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x140790120 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateStringPool @ 0x140790188 (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edi
  PVOID PoolWithTag; // rax
  PVOID v12; // rbx

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = v6 + a1;
  if ( (unsigned int)v6 + a1 < a1 )
    return 0LL;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v7 + v8;
  if ( v7 + (unsigned int)v8 < v7 )
    return 0LL;
  if ( a6 )
    *a6 = v9;
  if ( !v9 )
    return 0LL;
  v10 = v7 + v8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
  v12 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v10);
  return v12;
}
