void __fastcall WIDEPENOBJ::vAddRoundEndCap(WIDEPENOBJ *this, struct WIDENER *a2, struct LINEDATA *a3, int a4, int a5)
{
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  int v8; // r14d
  WIDEPENOBJ *v10; // r13
  struct EVECTORFX *i; // rbx
  __int64 v12; // rcx
  struct EVECTORFX *v13; // r15
  struct EVECTORFX *v14; // r8
  struct _POINTFIX *v15; // rsi
  struct WIDEPATHOBJ *v16; // rbp
  struct EVECTORFX *v17; // r8

  v6 = (_QWORD *)*((_QWORD *)a3 + 1);
  v7 = *((_QWORD *)a3 + 2);
  v8 = !(*(_BYTE *)a3 & 1);
  v10 = this;
  if ( !a4 )
    v8 = *(_DWORD *)a3 & 1;
  if ( !a5 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
    vAddNice(
      (struct WIDENER *)((char *)a2 + 1136),
      (struct _POINTFIX *)((char *)a2 + 692),
      *((struct EVECTORFX **)a3 + 2),
      v8);
  for ( i = (struct EVECTORFX *)(v7 + 8); ; i = (struct EVECTORFX *)(v6 + 4) )
  {
    v12 = *((_QWORD *)a3 + 1);
    if ( v6 == (_QWORD *)v12 && (unsigned __int64)i <= *((_QWORD *)a3 + 2) )
      break;
    v13 = (struct EVECTORFX *)&v6[(unsigned int)(*(_DWORD *)(v12 + 20) - 1) + 3];
    if ( i < v13 )
    {
      do
      {
        v14 = i;
        i = (struct EVECTORFX *)((char *)i + 8);
        vAddNice((struct WIDENER *)((char *)a2 + 1136), (struct _POINTFIX *)((char *)a2 + 692), v14, v8);
      }
      while ( i < v13 );
      v10 = this;
    }
    v6 = (_QWORD *)*v6;
    if ( !v6 )
    {
      v6 = *(_QWORD **)(*((_QWORD *)v10 + 1) + 32LL);
      v8 = v8 == 0;
    }
  }
  v15 = (struct _POINTFIX *)((char *)a2 + 692);
  if ( (unsigned __int64)i >= *((_QWORD *)a3 + 2) )
  {
    v16 = (struct WIDENER *)((char *)a2 + 1136);
  }
  else
  {
    v16 = (struct WIDENER *)((char *)a2 + 1136);
    do
    {
      v17 = i;
      i = (struct EVECTORFX *)((char *)i + 8);
      vAddNice(v16, v15, v17, v8);
    }
    while ( (unsigned __int64)i < *((_QWORD *)a3 + 2) );
  }
  if ( !a5 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
    vAddNice(v16, v15, i, v8);
}
