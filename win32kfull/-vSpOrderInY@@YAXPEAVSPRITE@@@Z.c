void __fastcall vSpOrderInY(struct SPRITE *a1)
{
  __int64 v1; // rax
  int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 i; // rdx
  __int64 j; // rax

  v1 = *((_QWORD *)a1 + 6);
  v2 = *((_DWORD *)a1 + 21);
  if ( v1 && *(_DWORD *)(v1 + 84) > v2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    *(_QWORD *)(v1 + 40) = v4;
    if ( v4 )
      *(_QWORD *)(v4 + 48) = v1;
    for ( i = *(_QWORD *)(v1 + 48); i && *(_DWORD *)(i + 84) > v2; i = *(_QWORD *)(i + 48) )
      v1 = i;
    *((_QWORD *)a1 + 6) = i;
    *((_QWORD *)a1 + 5) = v1;
    *(_QWORD *)(v1 + 48) = a1;
    if ( i )
      *(_QWORD *)(i + 40) = a1;
    else
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = a1;
  }
  else
  {
    v3 = *((_QWORD *)a1 + 5);
    if ( v3 && *(_DWORD *)(v3 + 84) < v2 )
    {
      *(_QWORD *)(v3 + 48) = v1;
      if ( v1 )
        *(_QWORD *)(v1 + 40) = v3;
      else
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = v3;
      for ( j = *(_QWORD *)(v3 + 40); j && *(_DWORD *)(j + 84) < v2; j = *(_QWORD *)(j + 40) )
        v3 = j;
      *((_QWORD *)a1 + 6) = v3;
      *((_QWORD *)a1 + 5) = j;
      *(_QWORD *)(v3 + 40) = a1;
      if ( j )
        *(_QWORD *)(j + 48) = a1;
    }
  }
}
