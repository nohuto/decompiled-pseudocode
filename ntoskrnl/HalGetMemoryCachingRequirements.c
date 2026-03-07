__int64 __fastcall HalGetMemoryCachingRequirements(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // r11d
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  v3 = 0;
  if ( !a3 )
    return 3221225485LL;
  v5 = HalpCachingRequirementsEntryCount;
  *a3 = 0;
  if ( v5 )
  {
    v6 = HalpCachingRequirements;
    do
    {
      v7 = *(_QWORD *)v6 << 12;
      if ( a1 >= v7 )
      {
        v8 = v7 + (*(_QWORD *)(v6 + 8) << 12);
        if ( a1 + a2 <= v8 )
        {
          *a3 = *(_DWORD *)(v6 + 16);
          return 0LL;
        }
        if ( a1 < v8 )
          return 3221225485LL;
      }
      ++v3;
      v6 += 24LL;
    }
    while ( v3 < v5 );
  }
  return 3221225473LL;
}
