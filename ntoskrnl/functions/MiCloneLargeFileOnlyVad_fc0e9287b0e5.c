__int64 __fastcall MiCloneLargeFileOnlyVad(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 24);
  v7 = 0LL;
  v8 = 0LL;
  MiGetProtoPteAddress(a1, v2 | (v1 << 32), 0, &v7);
  MiGetProtoPteAddress(a1, *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32), 0, &v8);
  v4 = v7;
  if ( (unsigned int)MiIncrementLargeSubsections(v7, *((unsigned int *)v7 + 11)) != -1 )
  {
    do
    {
      if ( v4 == v8 )
        return 0LL;
      v5 = v4;
      v4 = (__int64 *)v4[2];
    }
    while ( (unsigned int)MiIncrementLargeSubsections(v4, *((unsigned int *)v4 + 11)) != -1 );
    if ( v5 )
      MiDecrementLargeSubsections(v7, v5);
  }
  return 3221225626LL;
}
