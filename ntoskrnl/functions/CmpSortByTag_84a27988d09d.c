char __fastcall CmpSortByTag(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *i; // rax
  _QWORD *v8; // rcx

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD **)(a1 + 8);
  v4 = **(_QWORD ***)a1;
  if ( *(_QWORD **)a1 != v3 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v1 + 34) > *((_DWORD *)v4 + 34) )
      {
        v5 = *v4;
        if ( v4 == v3 )
          v3 = v1;
        if ( *(_QWORD **)(v5 + 8) != v4 )
          goto LABEL_16;
        v6 = (_QWORD *)v4[1];
        if ( (_QWORD *)*v6 != v4 )
          goto LABEL_16;
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        for ( i = *(_QWORD **)a1; i != v1; i = (_QWORD *)*i )
        {
          if ( *((_DWORD *)i + 34) >= *((_DWORD *)v4 + 34) )
            break;
        }
        v8 = (_QWORD *)i[1];
        if ( (_QWORD *)*v8 != i )
LABEL_16:
          __fastfail(3u);
        *v4 = i;
        v4[1] = v8;
        *v8 = v4;
        i[1] = v4;
        v4 = v1;
      }
      else
      {
        v1 = v4;
      }
      if ( v1 == v3 )
        break;
      v4 = (_QWORD *)*v4;
    }
  }
  return 1;
}
