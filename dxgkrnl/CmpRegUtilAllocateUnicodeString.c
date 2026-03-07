__int64 __fastcall CmpRegUtilAllocateUnicodeString(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  PVOID PoolWithTag; // rax

  v2 = a2;
  *(_WORD *)(a1 + 2) = a2 + 2;
  *(_WORD *)a1 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 + 2LL, 0x63557050u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v2 + 2);
  return 0LL;
}
