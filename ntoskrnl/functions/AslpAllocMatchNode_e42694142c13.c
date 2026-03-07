__int64 __fastcall AslpAllocMatchNode(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx

  v6 = AslAlloc(a1, 0x30uLL);
  v7 = 0;
  if ( v6 )
  {
    v6[1] = v6;
    *v6 = v6;
    *((_DWORD *)v6 + 10) = 0;
    v6[4] = 0LL;
    v6[3] = a2;
    v6[2] = a1;
    v8 = *a3;
    if ( *(__int64 **)(*a3 + 8) != a3 )
      __fastfail(3u);
    *v6 = v8;
    v6[1] = a3;
    *(_QWORD *)(v8 + 8) = v6;
    *a3 = (__int64)v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
