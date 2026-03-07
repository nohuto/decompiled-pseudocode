__int64 __fastcall HvlIterateSecurePagesForHibernation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  int SecurePageList; // ebx
  unsigned int v10; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  v11[0] = 0LL;
  v10 = 0;
  result = HvlpStartSecurePageListIteration(
             0LL,
             3LL,
             (char *)HvlpHibernateScratchPage + 4096,
             (char *)HvlpHibernateScratchPage + (unsigned int)((HvlpHibernateScratchPageCount - 2) << 12) + 4096,
             (HvlpHibernateScratchPageCount - 2) << 12,
             v11);
  if ( (int)result >= 0 )
  {
    do
    {
      LOBYTE(v12) = 0;
      LOBYTE(v8) = 1;
      SecurePageList = VslGetSecurePageList(v8, 0LL, &v10, &v12);
      if ( SecurePageList >= 0 )
        PopWriteSecurePagesCallback(a2, v11[0], v10);
    }
    while ( !SecurePageList );
    HvlpEndSecurePageListIteration(0LL, a3, a4);
    if ( SecurePageList == -2147483622 )
      return 0;
    return (unsigned int)SecurePageList;
  }
  return result;
}
