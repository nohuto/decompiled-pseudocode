/*
 * XREFs of ?PutFntCacheDrvAndFileInfo@@YAXKPEAVPDEV@@KPEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C0288C4C
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00A6BF0 (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFntCacheNewLink @ 0x1C0288D40 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFntCacheDrvAndFileInfo(
        __int64 a1,
        struct PDEV *a2,
        __int16 a3,
        struct _FONTFILEVIEW **a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  int v8; // edi
  struct PDEV **i; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax

  if ( (dword_1C033ABE0 & 3) != 0 )
  {
    v7 = qword_1C033ABE8;
    if ( qword_1C033ABE8 )
    {
      if ( (_DWORD)a1 )
      {
        v8 = 0;
        for ( i = (struct PDEV **)gaFntPDev; a2 != *i; ++i )
        {
          if ( (unsigned int)++v8 >= 6 )
            return;
        }
        if ( v8 )
        {
          if ( (dword_1C033ABE0 & 2) != 0 )
          {
            v10 = SearchFntCacheNewLink(a1);
            if ( v10 )
            {
              if ( *(_WORD *)(v10 + 14) )
              {
                *(_DWORD *)(v10 + 24) |= 1u;
              }
              else
              {
                *(_WORD *)(v10 + 12) = v8;
                *(_WORD *)(v10 + 14) = a3;
                if ( a5 )
                {
                  v11 = (_QWORD *)(v10 + 40);
                  v12 = a5;
                  do
                  {
                    *((_DWORD *)v11 - 2) = *((_DWORD *)*a4 + 6);
                    v13 = *a4++;
                    *v11 = *v13;
                    v11 += 2;
                    --v12;
                  }
                  while ( v12 );
                }
              }
            }
            else
            {
              *(_DWORD *)(v7 + 16) |= 2u;
            }
            *(_DWORD *)(v7 + 20) = 1;
          }
          else
          {
            *(_DWORD *)(qword_1C033ABE8 + 16) |= 2u;
          }
        }
      }
    }
  }
}
