void __fastcall MODE_UNION_LIST::RemoveMode(MODE_UNION_LIST *this, unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 i; // rax
  _DWORD *v8; // r8
  int v9; // r8d

  v3 = *((_DWORD *)this + 4);
  v5 = 4LL * a2;
  v6 = *(unsigned int *)(v5 + *((_QWORD *)this + 4));
  if ( (int)(v3 - v6 - 1) > 0 )
  {
    memmove(
      (void *)(*((_QWORD *)this + 1) + 44 * v6),
      (const void *)(*((_QWORD *)this + 1) + 44 * v6 + 44),
      44LL * (*((_DWORD *)this + 4) - (int)v6 - 1));
    v3 = *((_DWORD *)this + 4);
    for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      v8 = (_DWORD *)(*((_QWORD *)this + 4) + 4 * i);
      if ( *v8 > (unsigned int)v6 )
        --*v8;
      v3 = *((_DWORD *)this + 4);
    }
  }
  v9 = v3 - a2 - 1;
  if ( v9 > 0 )
    memmove((void *)(v5 + *((_QWORD *)this + 4)), (const void *)(v5 + *((_QWORD *)this + 4) + 4), 4LL * v9);
  --*((_DWORD *)this + 4);
}
