__int64 __fastcall HvpApplyLogEntryDataToFileBackedHive(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v12; // rsi
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 20) )
  {
    while ( 1 )
    {
      v12 = *(unsigned int *)(a3 + 8 * v7 + 4);
      if ( !HvpSetRangeProtection(BugCheckParameter2, *(unsigned int *)(a3 + 8 * v7), *(_DWORD *)(a3 + 8 * v7 + 4), 4) )
        return 3221225626LL;
      HvpCopyModifiedData(BugCheckParameter2);
      a4 += v12;
      v6 += v12;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)(a2 + 20) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = 1073741833LL;
    *a6 = v6;
  }
  return result;
}
