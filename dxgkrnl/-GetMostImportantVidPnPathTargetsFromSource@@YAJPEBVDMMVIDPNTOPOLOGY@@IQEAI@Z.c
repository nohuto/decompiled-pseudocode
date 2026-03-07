__int64 __fastcall GetMostImportantVidPnPathTargetsFromSource(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        unsigned int *const a3)
{
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  unsigned int v5; // ecx
  __int64 result; // rax

  if ( a3 )
  {
    MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(a1, a2);
    if ( MostImportantPathFromSource )
    {
      v5 = *(_DWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 24LL);
      result = 0LL;
      *a3 = v5;
    }
    else
    {
      return 3223192377LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  return result;
}
