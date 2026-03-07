void __fastcall PutFntCacheDrvAndFileInfo(
        Gre::Base *a1,
        struct PDEV *a2,
        __int16 a3,
        struct _FONTFILEVIEW **a4,
        unsigned int a5)
{
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // rax
  int v13; // edi
  struct PDEV **i; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax

  v8 = (unsigned int)a1;
  Gre::Base::Globals(a1);
  v10 = *(_QWORD *)(SGDGetSessionState(v9) + 32);
  v11 = *(_DWORD *)(v10 + 19384);
  if ( (v11 & 3) != 0 )
  {
    v12 = *(_QWORD *)(v10 + 19392);
    if ( v12 )
    {
      if ( v8 )
      {
        v13 = 0;
        for ( i = (struct PDEV **)(v10 + 19416); a2 != *i; ++i )
        {
          if ( (unsigned int)++v13 >= 7 )
            return;
        }
        if ( v13 )
        {
          if ( (v11 & 2) != 0 )
          {
            v15 = SearchFntCacheNewLink(v8);
            if ( v15 )
            {
              if ( *(_WORD *)(v15 + 14) )
              {
                *(_DWORD *)(v15 + 24) |= 1u;
              }
              else
              {
                *(_WORD *)(v15 + 12) = v13;
                *(_WORD *)(v15 + 14) = a3;
                if ( a5 )
                {
                  v16 = (_QWORD *)(v15 + 40);
                  v17 = a5;
                  do
                  {
                    *((_DWORD *)v16 - 2) = *((_DWORD *)*a4 + 6);
                    v18 = *a4++;
                    *v16 = *v18;
                    v16 += 2;
                    --v17;
                  }
                  while ( v17 );
                }
              }
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(v10 + 19392) + 16LL) |= 2u;
            }
            *(_DWORD *)(*(_QWORD *)(v10 + 19392) + 20LL) = 1;
          }
          else
          {
            *(_DWORD *)(v12 + 16) |= 2u;
          }
        }
      }
    }
  }
}
