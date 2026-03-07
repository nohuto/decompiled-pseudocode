unsigned __int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _DWORD *LeafSibling; // rax

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1));
    v6 = v5[1] - 4LL;
    v7 = *v5 + 16LL;
    v5[1] = v6;
    if ( v6 < v7 )
    {
      v5[1] = v7;
      LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                                a1,
                                a2,
                                2);
      if ( LeafSibling )
      {
        v3 = -1LL;
        if ( LeafSibling != (_DWORD *)-1LL )
        {
          v3 = (__int64)&LeafSibling[(unsigned __int16)*LeafSibling + 3];
          v5[1] = v3;
        }
      }
    }
    else
    {
      return v6;
    }
  }
  return v3;
}
