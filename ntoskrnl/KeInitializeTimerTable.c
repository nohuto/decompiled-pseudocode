__int64 __fastcall KeInitializeTimerTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rdi
  void *Pool2; // rdx
  __int64 v8; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = (unsigned __int8)off_140C01C70[0]() != 0;
    }
    KiInitializeTimer2Data();
  }
  if ( !KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1] )
  {
    v6 = 0x4000LL;
    if ( *(_BYTE *)(a1 + 208) )
    {
      if ( KiSerializeTimerExpiration )
      {
        Pool2 = 0LL;
      }
      else
      {
        Pool2 = (void *)ExAllocatePool2(72LL, 0x4000LL, 1649698123LL);
        if ( !Pool2 )
          return 3221225626LL;
      }
    }
    else
    {
      Pool2 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v6 = 32LL;
    }
    v8 = 2LL * *(unsigned __int8 *)(a1 + 208);
    KiPendingTimerBitmaps[v8] = 8 * v6;
    KiPendingTimerBitmaps[v8 + 1] = (__int64)Pool2;
  }
  *(_DWORD *)(a1 + 13248) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 32496), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 32552) )
    *(_WORD *)(a1 + 32498) = *(_DWORD *)(a1 + 36) + 2048;
  v2 = a1 + 15880;
  v3 = 2LL;
  do
  {
    v4 = 256LL;
    do
    {
      *(_QWORD *)(v2 - 8) = 0LL;
      *(_DWORD *)(v2 + 20) = -1;
      *(_DWORD *)(v2 + 16) = 0;
      *(_QWORD *)(v2 + 8) = v2;
      *(_QWORD *)v2 = v2;
      v2 += 32LL;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  KiInitializeForceIdle(a1);
  return 0LL;
}
