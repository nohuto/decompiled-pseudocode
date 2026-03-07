__int64 __fastcall SmmIoMmuUpdatePfn(__int64 a1, __int64 a2, char a3)
{
  _DWORD *Page; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  Page = *(_DWORD **)a1;
  v11 = a2;
  v7 = 0;
  while ( Page )
  {
    v8 = SmmIoMmuCompareIoMmuPagePfn(&v11, (__int64)Page);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      Page = (_DWORD *)*((_QWORD *)Page + 1);
    }
    else
    {
      Page = *(_DWORD **)Page;
    }
  }
  if ( a3 )
  {
    if ( !Page )
    {
      Page = SmmIoMmuAllocatePage(a1, a2);
      if ( !Page )
        return 3221225495LL;
      v7 = 259;
    }
    ++Page[6];
  }
  else
  {
    if ( !Page )
      WdLogSingleEntry5(0LL, 275LL, 45LL, a2, 0LL, 0LL);
    if ( Page[6]-- == 1 )
    {
      RtlAvlRemoveNode(a1, Page);
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 16), Page);
      return 259;
    }
  }
  return v7;
}
