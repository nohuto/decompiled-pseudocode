__int64 __fastcall CmpAllocate(unsigned int a1, char a2, unsigned int a3)
{
  __int64 Pool2; // rdi

  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 264LL : 256LL, a1, a3);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(a1);
  return Pool2;
}
