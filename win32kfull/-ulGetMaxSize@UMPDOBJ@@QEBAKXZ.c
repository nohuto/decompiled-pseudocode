__int64 __fastcall UMPDOBJ::ulGetMaxSize(UMPDOBJ *this)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax

  v1 = *((_QWORD *)this + 49);
  if ( v1 && (v2 = *(unsigned int *)(v1 + 48), v3 = *(_QWORD *)(v1 + 24), v3 > v2) )
    return (unsigned int)(v3 - v2);
  else
    return 0LL;
}
