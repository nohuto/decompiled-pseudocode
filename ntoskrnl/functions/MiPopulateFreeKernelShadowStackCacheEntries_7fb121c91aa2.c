PSLIST_ENTRY __fastcall MiPopulateFreeKernelShadowStackCacheEntries(
        union _SLIST_HEADER *a1,
        struct _SLIST_ENTRY *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rsi
  struct _SLIST_ENTRY *v4; // rbx
  union _SLIST_HEADER *v5; // rdi
  PSLIST_ENTRY result; // rax

  v3 = (unsigned __int64)a2 + a3;
  v4 = a2;
  if ( a2 < (struct _SLIST_ENTRY *)((char *)a2 + a3) )
  {
    v5 = a1 + 29;
    do
    {
      result = RtlpInterlockedPushEntrySList(v5, v4);
      v4 += 2;
    }
    while ( (unsigned __int64)v4 < v3 );
  }
  return result;
}
