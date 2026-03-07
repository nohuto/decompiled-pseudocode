__int64 *__fastcall TxtpGetCacheEntry(__int64 **a1, __int16 a2, __int64 a3)
{
  __int64 *v3; // r9
  __int64 *v4; // r10
  __int64 *v5; // rax
  __int64 **v6; // rdx
  __int64 *v7; // rax

  v3 = *a1;
  v4 = 0LL;
  while ( v3 != (__int64 *)a1 )
  {
    if ( *((_WORD *)v3 + 8) == a2
      && *((_DWORD *)v3 + 6) == *(_DWORD *)a3
      && *((_DWORD *)v3 + 7) == *(_DWORD *)(a3 + 4)
      && v3[4] == *(_QWORD *)(a3 + 8)
      && *((_DWORD *)v3 + 10) == *(_DWORD *)(a3 + 16) )
    {
      v5 = (__int64 *)*v3;
      v4 = v3;
      if ( *(__int64 **)(*v3 + 8) != v3
        || (v6 = (__int64 **)v3[1], *v6 != v3)
        || (*v6 = v5, v5[1] = (__int64)v6, v7 = *a1, (__int64 **)(*a1)[1] != a1) )
      {
        __fastfail(3u);
      }
      *v3 = (__int64)v7;
      v3[1] = (__int64)a1;
      v7[1] = (__int64)v3;
      *a1 = v3;
      return v4;
    }
    v3 = (__int64 *)*v3;
  }
  return v4;
}
