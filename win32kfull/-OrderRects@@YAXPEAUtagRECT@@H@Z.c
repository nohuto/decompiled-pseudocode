void __fastcall OrderRects(struct tagRECT *a1, int a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v5; // r11
  __int64 v6; // r10
  struct tagRECT *v7; // rcx
  struct tagRECT v8; // xmm1

  v2 = a2;
  if ( a2 > 0 )
  {
    v4 = 1LL;
    v5 = v2;
    do
    {
      v6 = v4;
      if ( v4 < v2 )
      {
        v7 = a1 + 1;
        do
        {
          if ( v7->top != a1->top )
            break;
          if ( v7->left < a1->left )
          {
            v8 = *a1;
            *a1 = *v7;
            *v7 = v8;
          }
          ++v6;
          ++v7;
        }
        while ( v6 < v2 );
      }
      ++v4;
      ++a1;
      --v5;
    }
    while ( v5 );
  }
}
