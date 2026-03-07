void __fastcall PfpPrefetchVolumesCleanup(_QWORD *a1)
{
  char *v2; // rcx
  unsigned int i; // edi
  unsigned __int64 v4; // rsi

  v2 = (char *)a1[2];
  if ( v2 )
  {
    for ( i = 0; i < *(_DWORD *)(*a1 + 8LL); ++i )
    {
      v4 = (unsigned __int64)i << 6;
      if ( _bittest64((const signed __int64 *)&v2[v4 + 56], 0x22u) )
        PfpOpenHandleClose((__int64)&v2[v4 + 32], a1[5]);
      v2 = (char *)a1[2];
      if ( _bittest64((const signed __int64 *)&v2[v4 + 24], 0x22u) )
      {
        PfpOpenHandleClose((__int64)&v2[v4], a1[5]);
        v2 = (char *)a1[2];
      }
    }
    ExFreePoolWithTag(v2, 0);
    a1[2] = 0LL;
  }
}
