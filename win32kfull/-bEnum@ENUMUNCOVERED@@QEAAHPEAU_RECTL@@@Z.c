__int64 __fastcall ENUMUNCOVERED::bEnum(ENUMUNCOVERED *this, struct _RECTL *a2)
{
  LONG *v2; // r10
  LONG *v4; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  v2 = (LONG *)*((_QWORD *)this + 1);
  v4 = (LONG *)*((_QWORD *)this + 3);
  do
  {
    v5 = *((_QWORD *)this + 2);
    v4 += 4;
    if ( (unsigned __int64)v4 >= v5 )
    {
      if ( v2[1] >= *(_DWORD *)this )
        return 0LL;
      v2 = (LONG *)*((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = *(_QWORD *)(v5 + 8) + v5;
      v4 = v2 + 6;
    }
  }
  while ( *((_QWORD *)v4 + 1) );
  a2->top = *v2;
  a2->bottom = v2[1];
  a2->left = *v4;
  a2->right = v4[1];
  result = 1LL;
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 3) = v4;
  return result;
}
