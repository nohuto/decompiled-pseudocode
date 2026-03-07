__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        __int64 a1,
        __int64 a2,
        int a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebx
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = -1;
  v6 = (unsigned __int16)*(_DWORD *)a2;
  if ( *(_BYTE *)(a2 + 3) )
  {
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      v8 = a3;
      do
      {
        v9 = *(_DWORD *)(a2 + 4LL * ((v6 + v3) >> 1) + 16);
        if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v9, &v8) >= 0 )
          v6 = (v6 + v3) >> 1;
        else
          v3 = (v6 + v3) >> 1;
      }
      while ( v3 + 1 != v6 );
    }
  }
  else if ( (unsigned __int16)*(_DWORD *)a2 )
  {
    v8 = a3;
    do
    {
      v9 = *(_DWORD *)(a2 + 16LL * ((v6 + v3) >> 1) + 16);
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v9, &v8) > 0 )
        v6 = (v6 + v3) >> 1;
      else
        v3 = (v6 + v3) >> 1;
    }
    while ( v3 + 1 != v6 );
  }
  return v6;
}
