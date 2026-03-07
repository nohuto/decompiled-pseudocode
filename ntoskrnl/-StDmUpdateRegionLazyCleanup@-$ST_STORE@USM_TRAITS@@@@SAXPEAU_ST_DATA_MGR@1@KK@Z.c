void __fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(__int64 a1, unsigned int a2, int a3)
{
  char v3; // r11
  unsigned __int64 v5; // r9
  const signed __int64 *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned int v9; // ecx
  volatile signed __int32 *v10; // r8
  int v11; // r11d
  unsigned __int64 v12; // rax

  v3 = a2;
  v5 = a2;
  v6 = *(const signed __int64 **)(a1 + 848);
  if ( a3 )
  {
    if ( _bittest64(v6, v5) )
    {
      v7 = (unsigned __int64)(unsigned int)v5 >> 5;
      v8 = v5 & 0x1F;
      LOBYTE(v9) = 1;
      v10 = (volatile signed __int32 *)v6 + v7;
      if ( v8 + 1 > 0x20 )
      {
        v11 = v3 & 0x1F;
        if ( !v11 )
          goto LABEL_10;
        _InterlockedAnd(v10++, ~(((1 << (32 - v11)) - 1) << v8));
        v9 = 1 - (32 - v11);
        if ( v9 >= 0x20 )
        {
          v12 = (unsigned __int64)v9 >> 5;
          do
          {
            *v10 = 0;
            v9 -= 32;
            ++v10;
            --v12;
          }
          while ( v12 );
        }
        if ( v9 )
LABEL_10:
          _InterlockedAnd(v10, -1 << v9);
      }
      else
      {
        _InterlockedAnd(v10, ~(1 << v8));
      }
      ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a1 + 864);
    }
  }
  else
  {
    *((_BYTE *)v6 + (v5 >> 3)) |= 1 << (v3 & 7);
  }
}
