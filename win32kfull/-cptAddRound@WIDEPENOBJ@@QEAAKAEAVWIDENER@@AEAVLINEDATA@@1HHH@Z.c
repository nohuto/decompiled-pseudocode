/*
 * XREFs of ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02F3CCC
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02F4208 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0151358 (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1C02F41D4 (-vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::cptAddRound(
        WIDEPENOBJ *this,
        struct WIDENER *a2,
        struct LINEDATA *a3,
        struct LINEDATA *a4,
        int a5,
        int a6,
        int a7)
{
  struct EVECTORFX *v7; // rbx
  unsigned int v8; // r12d
  struct LINEDATA *v9; // rsi
  struct LINEDATA *v10; // r14
  __int64 *v14; // rdi
  int v15; // ebp
  struct EVECTORFX *i; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r13
  struct EVECTORFX *v19; // r8
  struct _POINTFIX *v20; // rdi
  struct WIDEPATHOBJ *v21; // r15
  struct EVECTORFX *v22; // r8
  struct EVECTORFX *j; // rbx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  struct EVECTORFX *v26; // rdx
  struct EVECTORFX *v27; // rdx

  v7 = (struct EVECTORFX *)*((_QWORD *)a3 + 2);
  v8 = 0;
  v9 = a4;
  v10 = a3;
  if ( v7 == *((struct EVECTORFX **)a4 + 2) && ((*(_BYTE *)a4 ^ *(_BYTE *)a3) & 1) == 0 )
    return 0LL;
  v14 = (__int64 *)*((_QWORD *)a3 + 1);
  v15 = *(_DWORD *)a3 & 1;
  if ( a5 )
  {
    if ( a6 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
      vAddNice((struct WIDENER *)((char *)a2 + 1136), (struct _POINTFIX *)((char *)a2 + 692), v7, v15);
    for ( i = (struct EVECTORFX *)((char *)v7 + 8); ; i = (struct EVECTORFX *)(v14 + 4) )
    {
      if ( v14 == *((__int64 **)v9 + 1) )
      {
        v17 = *((_QWORD *)v9 + 2);
        if ( (unsigned __int64)i <= v17 && v15 == (*(_DWORD *)v9 & 1) )
          break;
      }
      v18 = (unsigned __int64)&v14[(unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 1) + 20LL) - 1) + 3];
      if ( (unsigned __int64)i < v18 )
      {
        v8 += ((v18 - (unsigned __int64)i - 1) >> 3) + 1;
        do
        {
          v19 = i;
          i = (struct EVECTORFX *)((char *)i + 8);
          vAddNice((struct WIDENER *)((char *)a2 + 1136), (struct _POINTFIX *)((char *)a2 + 692), v19, v15);
        }
        while ( (unsigned __int64)i < v18 );
        v9 = a4;
        v10 = a3;
      }
      v14 = (__int64 *)*v14;
      if ( !v14 )
      {
        v14 = *(__int64 **)(*((_QWORD *)this + 1) + 32LL);
        v15 = v15 == 0;
      }
    }
    v20 = (struct _POINTFIX *)((char *)a2 + 692);
    v21 = (struct WIDENER *)((char *)a2 + 1136);
    if ( (unsigned __int64)i < v17 )
    {
      do
      {
        v22 = i;
        i = (struct EVECTORFX *)((char *)i + 8);
        vAddNice(v21, v20, v22, v15);
        ++v8;
      }
      while ( (unsigned __int64)i < *((_QWORD *)v9 + 2) );
    }
    if ( a7 && *((_QWORD *)v9 + 3) > *((_QWORD *)v9 + 4) )
      vAddNice(v21, v20, i, v15);
  }
  else
  {
    if ( a6 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
      WIDENER::vAddLeftNice(a2, v7, v15);
    for ( j = (struct EVECTORFX *)((char *)v7 - 8);
          ;
          j = (struct EVECTORFX *)&v14[(unsigned int)(*((_DWORD *)v14 + 5) - 1) + 3] )
    {
      if ( v14 == *((__int64 **)v9 + 1) )
      {
        v24 = *((_QWORD *)v9 + 2);
        if ( (unsigned __int64)j >= v24 && v15 == (*(_DWORD *)v9 & 1) )
          break;
      }
      v25 = (unsigned __int64)(v14 + 4);
      if ( j > (struct EVECTORFX *)(v14 + 4) )
      {
        v8 += (((unsigned __int64)j - v25 - 1) >> 3) + 1;
        do
        {
          v26 = j;
          j = (struct EVECTORFX *)((char *)j - 8);
          WIDENER::vAddLeftNice(a2, v26, v15);
        }
        while ( (unsigned __int64)j > v25 );
      }
      v14 = (__int64 *)v14[1];
      if ( !v14 )
      {
        v14 = *(__int64 **)(*((_QWORD *)this + 1) + 40LL);
        v15 = v15 == 0;
      }
    }
    if ( (unsigned __int64)j > v24 )
    {
      do
      {
        v27 = j;
        j = (struct EVECTORFX *)((char *)j - 8);
        WIDENER::vAddLeftNice(a2, v27, v15);
        ++v8;
      }
      while ( (unsigned __int64)j > *((_QWORD *)v9 + 2) );
    }
    if ( a7 && *((_QWORD *)v9 + 3) <= *((_QWORD *)v9 + 4) )
      WIDENER::vAddLeftNice(a2, j, v15);
  }
  return v8;
}
