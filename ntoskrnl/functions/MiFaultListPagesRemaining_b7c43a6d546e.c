unsigned __int64 __fastcall MiFaultListPagesRemaining(unsigned __int64 *a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10

  v1 = 1LL;
  v3 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a1[2] & 1) != 0 && *(_BYTE *)v3 == 2 )
  {
    v5 = *(_QWORD *)(v3 + 24);
    if ( v5 < *(_QWORD *)(v3 + 16) )
    {
      v6 = *a1;
      v7 = (unsigned __int64 *)(*(_QWORD *)(v3 + 8) + 16 * v5);
      v8 = *v7;
      if ( v6 >= *v7 )
      {
        v9 = v7[1];
        if ( v6 < v9 + v8 )
          return (((*(_DWORD *)v7 & 0xFFF) + v9 + 4095) >> 12)
               - (((v6 & 0xFFFFFFFFFFFFF000uLL) - (v8 & 0xFFFFFFFFFFFFF000uLL)) >> 12);
      }
    }
  }
  return v1;
}
