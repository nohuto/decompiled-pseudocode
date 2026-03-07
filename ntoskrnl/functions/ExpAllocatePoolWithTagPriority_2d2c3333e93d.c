__int64 __fastcall ExpAllocatePoolWithTagPriority(POOL_TYPE a1, ULONG_PTR a2, unsigned int a3, unsigned int a4, int a5)
{
  if ( a4 == 32 || (a1 & 2) != 0 || (unsigned int)MmResourcesAvailable(a1 & 0xDF, a2, a4) || a2 <= 0xFE0 )
    return ExpAllocatePoolWithTagFromNode(a1, a2, a3, a5, (a4 >> 3) & 1);
  else
    return 0LL;
}
