__int64 __fastcall CmpAllocatePoolLookaside(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  if ( PoolType != PagedPool )
    NT_ASSERT("PoolType == PagedPool");
  return ExAllocatePool2(256LL, NumberOfBytes, Tag);
}
