__int64 __fastcall PiControlAllocateBufferForUserModeCaller(__int64 *a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 Pool2; // rax

  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = a4;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(257LL, a2, 538996816LL);
  *a1 = Pool2;
  return Pool2 == 0 ? 0xC000009A : 0;
}
