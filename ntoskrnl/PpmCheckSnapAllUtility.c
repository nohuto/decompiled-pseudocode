char PpmCheckSnapAllUtility()
{
  unsigned __int16 v0; // di
  __int64 v1; // rbx
  __int64 Prcb; // rax
  __int64 v3; // rdx
  __int64 k; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // rcx
  unsigned __int8 j; // si
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+32h] [rbp-26h]
  __int16 v14; // [rsp+36h] [rbp-22h]
  unsigned int i; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v13 = 0;
  v14 = 0;
  for ( i = 0; v0 < (unsigned int)PpmParkNumNodes; ++v0 )
  {
    v1 = PpmParkNodes + 192LL * v0;
    if ( *(_BYTE *)(v1 + 10) )
    {
      PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(v1 + 48));
      if ( *(_BYTE *)(v1 + 121) )
      {
        for ( j = 0; j < *(_BYTE *)(v1 + 11); ++j )
          PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(*(_QWORD *)(v1 + 184) + 104LL * j + 32));
      }
    }
  }
  v11[1] = qword_140C0BD78;
  v11[0] = &PpmCheckRegistered;
  v12 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&i, v11) )
  {
    Prcb = KeGetPrcb(i);
    PpmPerfSnapUtility(Prcb + 33968, v3);
  }
  for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
  {
    if ( *(_DWORD *)(k + 296) )
    {
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      do
      {
        v9 = *(_QWORD *)(k + 312) + 144 * v6;
        if ( *(_DWORD *)(v9 + 16) == 1 )
        {
          PpmPerfSnapUtility(*(_QWORD *)v9, v7);
          LODWORD(v7) = v8;
        }
        v6 = (unsigned int)(v7 + 1);
        v7 = (unsigned int)v6;
        v8 = v6;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(k + 296) );
    }
  }
  return 1;
}
