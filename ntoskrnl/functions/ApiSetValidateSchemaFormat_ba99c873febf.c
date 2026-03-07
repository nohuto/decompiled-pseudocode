__int64 __fastcall ApiSetValidateSchemaFormat(_DWORD *a1, unsigned int a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  __int64 i; // r14
  unsigned int *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r10
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r15
  _DWORD *v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax

  if ( *a1 > 4u )
  {
    if ( a2 >= 0x1C )
    {
      v4 = a1[1];
      if ( v4 <= a2 )
      {
        v5 = (unsigned int)a1[3];
        v6 = 24 * v5;
        if ( (unsigned __int64)(24 * v5) > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        v7 = v6 + 28;
        if ( v6 >= 0xFFFFFFE4 )
          return (unsigned int)-1073741675;
        if ( v7 <= v4 )
        {
          for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
          {
            v9 = (_DWORD *)((char *)&a1[6 * i] + (unsigned int)a1[4]);
            v10 = v9[2];
            if ( v10 > 0xFFFF )
              return (unsigned int)-1073741596;
            if ( v9[3] > 0xFFFF )
              return (unsigned int)-1073741596;
            v11 = v9[1];
            if ( (_DWORD)v11 )
            {
              if ( (unsigned int)v11 < v7 )
                return (unsigned int)-1073741596;
            }
            v12 = v11 + v10;
            if ( v12 < (unsigned int)v11 )
              return (unsigned int)-1073741675;
            if ( v12 > v4 )
              return (unsigned int)-1073741596;
            if ( (unsigned int *)ApiSetpSearchForApiSet(a1, (const WCHAR *)((char *)a1 + v11), *((_WORD *)v9 + 6) >> 1) != v9 )
              return (unsigned int)-1073741596;
            v13 = v9[4];
            if ( v13 )
            {
              if ( v13 < v7 )
                return (unsigned int)-1073741596;
            }
            v14 = v9[5];
            v15 = 20 * v14;
            if ( (unsigned __int64)(20 * v14) > 0xFFFFFFFF || v13 + v15 < v13 )
              return (unsigned int)-1073741675;
            v4 = a1[1];
            if ( v13 + v15 > v4 )
              return (unsigned int)-1073741596;
            v16 = 0LL;
            if ( (_DWORD)v14 )
            {
              v17 = v9[4];
              do
              {
                v18 = (_DWORD *)((char *)&a1[5 * v16] + v17);
                v19 = v18[2];
                if ( v19 > 0xFFFF )
                  return (unsigned int)-1073741596;
                v20 = v18[4];
                if ( v20 > 0xFFFF )
                  return (unsigned int)-1073741596;
                v21 = v18[1];
                if ( v21 )
                {
                  if ( v21 < v7 )
                    return (unsigned int)-1073741596;
                }
                v22 = v21 + v19;
                if ( v22 < v21 )
                  return (unsigned int)-1073741675;
                if ( v22 > v4 )
                  return (unsigned int)-1073741596;
                v23 = v18[3];
                if ( v23 )
                {
                  if ( v23 < v7 )
                    return (unsigned int)-1073741596;
                }
                if ( v20 + v23 < v23 )
                  return (unsigned int)-1073741675;
                if ( v20 + v23 > v4 )
                  return (unsigned int)-1073741596;
                v16 = (unsigned int)(v16 + 1);
              }
              while ( (unsigned int)v16 < (unsigned int)v14 );
            }
            LODWORD(v5) = a1[3];
          }
          v24 = 8LL * (unsigned int)v5;
          if ( v24 <= 0xFFFFFFFF )
          {
            v25 = a1[5];
            if ( v25 + (unsigned int)v24 >= v25 )
              return v4 < v25 + (unsigned int)v24 ? 0xC00000E4 : 0;
          }
          return (unsigned int)-1073741675;
        }
      }
    }
    return (unsigned int)-1073741596;
  }
  return (unsigned int)-1073741637;
}
