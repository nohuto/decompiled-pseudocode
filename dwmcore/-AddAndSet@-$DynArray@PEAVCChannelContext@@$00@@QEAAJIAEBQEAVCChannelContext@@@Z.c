__int64 __fastcall DynArray<CChannelContext *,1>::AddAndSet(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 *v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = DynArrayImpl<1>::AddMultiple(a1, 8, a2, &v14);
  v7 = 0;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE5u, 0LL);
  }
  else if ( a2 )
  {
    v9 = v14;
    if ( a2 < 2 || v14 <= a3 && &v14[a2 - 1] >= a3 )
      goto LABEL_9;
    v10 = a2 & 0xFFFFFFFE;
    do
      v7 += 2;
    while ( v7 < (unsigned int)v10 );
    memset64(v14, *a3, (2 * (v10 >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
    if ( v7 < a2 )
    {
LABEL_9:
      v11 = &v9[v7];
      v12 = a2 - v7;
      do
      {
        *v11++ = *a3;
        --v12;
      }
      while ( v12 );
    }
  }
  return v8;
}
