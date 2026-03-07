void *__fastcall xxxGetDummyDib(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  void *result; // rax
  struct tagCLIP *v7; // rax
  HBRUSH v8; // rax
  __int64 v9; // rdi
  struct tagBITMAPINFOHEADER *v10; // rax
  struct tagBITMAPINFOHEADER *v11; // rbp
  int v12; // eax
  struct tagCLIP *v13; // rax
  struct tagCLIP *v14; // rsi
  __int64 v15; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
  {
    ClipboardData = xxxGetClipboardData(a1, 9u, a2);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      result = (void *)xxxGetClipboardData(a1, 0x11u, a2);
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v7 = FindClipFormat(a1, 2u, 1);
  if ( !v7 )
    return 0LL;
  if ( *((_QWORD *)v7 + 1) == 2LL )
    return 0LL;
  v8 = (HBRUSH)xxxGetClipboardData(a1, 2u, a2);
  if ( !v8 )
    return 0LL;
  v9 = 0LL;
  v10 = xxxBMPtoDIB(v8, ClipboardData, 0LL);
  v11 = v10;
  if ( v10 )
  {
    v12 = SizeOfDibColorTable(v10);
    v9 = ConvertMemHandle(
           v11,
           v11->biSize + v12 + abs32(v11->biHeight) * (((v11->biWidth * v11->biBitCount + 31) >> 3) & 0xFFFFFFFC));
    Win32FreePool(v11);
    if ( v9 )
    {
      v13 = FindClipFormat(a1, 8u, 1);
      v14 = v13;
      if ( v13 )
      {
        UT_FreeCBFormat(v13);
        *((_QWORD *)v14 + 1) = v9;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        v15 = HMValidateHandleNoRip(v9, 6);
        if ( v15 )
          HMUnlockDestroyObject(v15);
        return 0LL;
      }
    }
  }
  return (void *)v9;
}
