/*
 * XREFs of ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C0117844
 * Callers:
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0117D44 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0117C98 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 */

void __fastcall FHOBJ::vDeletePFELink(FHOBJ *this, struct _HASHBUCKET *a2, unsigned int a3, struct PFEOBJ *a4)
{
  _QWORD *v5; // rcx
  __int64 v7; // rbp
  _QWORD *v9; // rax
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _HASHBUCKET **v16; // rdx
  struct _HASHBUCKET *i; // rcx
  __int64 v18; // rax
  unsigned int v19; // r8d
  struct _HASHBUCKET *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax

  if ( a2 )
  {
    v5 = (_QWORD *)*((_QWORD *)a2 + 1);
    v7 = a3;
    if ( v5[1] == *(_QWORD *)a4 )
    {
      v9 = (_QWORD *)*v5;
      *((_QWORD *)a2 + 1) = *v5;
      if ( !v9 )
        *((_QWORD *)a2 + 2) = 0LL;
    }
    else
    {
      v26 = (_QWORD *)*((_QWORD *)a2 + 1);
      v5 = (_QWORD *)*v5;
      if ( !v5 )
        return;
      while ( 1 )
      {
        v27 = (_QWORD *)*v5;
        if ( v5[1] == *(_QWORD *)a4 )
          break;
        v26 = v5;
        v5 = (_QWORD *)*v5;
        if ( !v27 )
          return;
      }
      *v26 = v27;
      if ( !*v5 )
        *((_QWORD *)a2 + 2) = v26;
    }
    if ( v5 )
    {
      Win32FreePool(v5);
      if ( (PFEOBJ::flFontType(a4) & 4) != 0 )
        --*((_DWORD *)a2 + 6);
      if ( (PFEOBJ::flFontType(a4) & 1) != 0 )
        *((_DWORD *)a2 + 7) += v10;
      v11 = *((_QWORD *)a2 + 1);
      if ( v11 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 80LL);
        if ( *((_DWORD *)a2 + 14) != v19 )
        {
          *((_DWORD *)a2 + 14) = v19;
          v20 = a2;
          v21 = *((_QWORD *)a2 + 6);
          if ( v21 )
          {
            v22 = *((_QWORD *)a2 + 6);
            do
            {
              if ( *(_DWORD *)(v22 + 56) >= v19 )
                break;
              v20 = (struct _HASHBUCKET *)v22;
              v22 = *(_QWORD *)(v22 + 48);
            }
            while ( v22 );
            if ( v20 != a2 )
            {
              v23 = *((_QWORD *)a2 + 5);
              if ( v23 )
                *(_QWORD *)(v23 + 48) = v21;
              else
                *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v21;
              v24 = *((_QWORD *)a2 + 6);
              if ( v24 )
                *(_QWORD *)(v24 + 40) = *((_QWORD *)a2 + 5);
              *((_QWORD *)a2 + 5) = v20;
              *((_QWORD *)a2 + 6) = *((_QWORD *)v20 + 6);
              *((_QWORD *)v20 + 6) = a2;
              v25 = *((_QWORD *)a2 + 6);
              if ( v25 )
                *(_QWORD *)(v25 + 40) = a2;
              else
                *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = a2;
            }
          }
        }
      }
      else
      {
        v12 = *((_QWORD *)a2 + 5);
        v13 = *((_QWORD *)a2 + 6);
        if ( v12 )
          *(_QWORD *)(v12 + 48) = v13;
        else
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v13;
        v14 = *((_QWORD *)a2 + 6);
        v15 = *((_QWORD *)a2 + 5);
        if ( v14 )
          *(_QWORD *)(v14 + 40) = v15;
        else
          *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v15;
        v16 = (struct _HASHBUCKET **)(*((_QWORD *)this + 1) + 8 * (v7 + 5));
        for ( i = *v16; i != a2; i = *(struct _HASHBUCKET **)i )
          v16 = (struct _HASHBUCKET **)i;
        *v16 = *(struct _HASHBUCKET **)a2;
        *(_DWORD *)(*((_QWORD *)this + 1) + 12LL) += v10;
        v18 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v18 + 8 * v7 + 40) )
          *(_DWORD *)(v18 + 16) += v10;
        Win32FreePool(a2);
      }
    }
  }
}
