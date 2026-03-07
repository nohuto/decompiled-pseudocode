__int64 __fastcall RtlpMuiRegResizeStringPool(const void **P, __int16 a2, __int16 a3, char a4)
{
  __int64 v4; // rdi
  __int16 v7; // ax
  __int16 v8; // dx
  size_t v9; // rsi
  size_t v10; // rbp
  __int64 StringPool; // rax

  v4 = 0LL;
  v7 = 4;
  if ( a2 >= 1 )
    v7 = a2;
  v8 = 40;
  if ( a3 >= 1 )
    v8 = a3;
  if ( P )
  {
    if ( v7 >= (int)*((unsigned __int16 *)P + 3) && v8 >= (int)*((unsigned __int16 *)P + 5) )
    {
      v9 = 2LL * *((unsigned __int16 *)P + 2);
      v10 = 2LL * *((unsigned __int16 *)P + 4);
      StringPool = RtlpMuiRegCreateStringPool(v7, v8);
      v4 = StringPool;
      if ( StringPool )
      {
        memmove(*(void **)(StringPool + 16), P[2], v9);
        memmove(*(void **)(v4 + 24), P[3], v10);
        *(_WORD *)(v4 + 6) = *((_WORD *)P + 3);
        *(_WORD *)(v4 + 10) = *((_WORD *)P + 5);
        if ( !a4 )
          ExFreePoolWithTag(P, 0);
      }
    }
  }
  return v4;
}
