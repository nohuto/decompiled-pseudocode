void __fastcall PpmParkFreeParkNodes(_QWORD *P, unsigned int a2)
{
  unsigned __int8 *v3; // rbx
  __int64 v4; // rbp
  void *v5; // rcx
  unsigned int i; // esi
  void *v7; // rcx
  void *v8; // rcx

  if ( P )
  {
    if ( a2 )
    {
      v3 = (unsigned __int8 *)P + 11;
      v4 = a2;
      do
      {
        v5 = *(void **)(v3 + 37);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x704D5050u);
        for ( i = 0; i < *v3; ++i )
        {
          v7 = *(void **)(104LL * i + *(_QWORD *)(v3 + 173) + 32);
          if ( v7 )
            ExFreePoolWithTag(v7, 0x704D5050u);
        }
        v3 += 192;
        --v4;
      }
      while ( v4 );
    }
    v8 = (void *)P[23];
    if ( v8 )
      ExFreePoolWithTag(v8, 0x704D5050u);
    ExFreePoolWithTag(P, 0x704D5050u);
  }
}
