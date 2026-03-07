void __fastcall HvlDiscardSecurePagesFromHibernation(PVOID MemoryMap)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int SecurePageList; // ebx
  unsigned int i; // esi
  unsigned __int64 v6; // r9
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( (int)HvlpStartSecurePageListIteration(0LL, 7LL, 0LL, 0LL, 0, &v7) >= 0 )
  {
    v3 = v7;
    do
    {
      LOBYTE(v7) = 0;
      LOBYTE(v2) = 1;
      SecurePageList = VslGetSecurePageList(v2, 0LL, 0LL, &v7);
      if ( SecurePageList >= 0 )
      {
        for ( i = 0; i < *(unsigned __int16 *)(v3 + 8); ++i )
        {
          v6 = *(_QWORD *)(v3 + 8LL * i + 16);
          PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)(v6 & 0xFFFFFFFFFFLL), (v6 >> 40) + 1, 0x686C7648u);
        }
      }
    }
    while ( !SecurePageList );
    HvlpEndSecurePageListIteration(0LL, 0LL, 0LL);
    HvlDiscardPagesFromHibernation(MemoryMap);
  }
}
