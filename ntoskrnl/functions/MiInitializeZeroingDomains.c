void __fastcall MiInitializeZeroingDomains(__int64 a1)
{
  unsigned int v1; // r13d
  unsigned int v2; // r15d
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 *v6; // rbx
  unsigned int v7; // eax
  unsigned int i; // r12d
  __int64 v9; // rbp
  int FirstSetRightGroupAffinity; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 12);
  v2 = 0;
  if ( v1 )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(a1 + 32);
      v6 = *(__int64 **)(v4 + v5);
      memmove(v6, *(const void **)(a1 + 24), 16LL * *(unsigned int *)(a1 + 4));
      v7 = *(_DWORD *)(a1 + 4);
      for ( i = 0; i < v7; ++i )
      {
        v9 = *v6;
        v13[0] = *(_OWORD *)v6;
        while ( v9 )
        {
          FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v13);
          v9 &= ~*(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity] + 200);
          *(_QWORD *)&v13[0] = v9;
          if ( (unsigned int)MiGetProcessorDomain(FirstSetRightGroupAffinity) == v2 )
            *(_DWORD *)(a1 + 64) = *(_DWORD *)(v12 + 33364);
          else
            *v6 &= v11;
        }
        if ( *v6 )
          *(_DWORD *)(v4 + v5 + 40) = 1;
        v7 = *(_DWORD *)(a1 + 4);
        v6 += 2;
      }
      memmove(*(void **)(v4 + v5 + 8), *(const void **)(v4 + v5), 16LL * v7);
      ++v2;
      v4 += 48LL;
    }
    while ( v2 < v1 );
  }
}
