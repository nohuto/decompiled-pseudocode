void *__fastcall xxxGetDummyDibV5(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rbx
  struct tagCLIP *ClipFormat; // rax
  __int64 ClipboardData; // rax
  __int64 v7; // rax
  struct tagBITMAPINFOHEADER *v8; // rsi
  struct tagCLIP *v9; // rax
  HBRUSH v10; // rsi
  __int64 v11; // rdx
  void *result; // rax
  int v13; // eax
  struct tagCLIP *v14; // rax
  struct tagCLIP *v15; // rdi
  __int64 v16; // rax

  v2 = 0LL;
  ClipFormat = FindClipFormat(a1, 8u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8u, a2);
      if ( ClipboardData )
      {
        v7 = HMValidateHandleNoRip(ClipboardData, 6);
        if ( v7 )
        {
          v8 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *)(v7 + 20));
          if ( v8 )
          {
LABEL_12:
            v13 = SizeOfDibColorTable(v8);
            v2 = ConvertMemHandle(
                   v8,
                   v8->biSize + v13 + abs32(v8->biHeight) * (((v8->biWidth * v8->biBitCount + 31) >> 3) & 0xFFFFFFFC));
            Win32FreePool(v8);
            if ( v2 )
            {
              v14 = FindClipFormat(a1, 0x11u, 1);
              v15 = v14;
              if ( v14 )
              {
                UT_FreeCBFormat(v14);
                *((_QWORD *)v15 + 1) = v2;
                *(_DWORD *)a2 = 17;
              }
              else
              {
                v16 = HMValidateHandleNoRip(v2, 6);
                if ( v16 )
                  HMUnlockDestroyObject(v16);
                return 0LL;
              }
            }
            return (void *)v2;
          }
        }
      }
    }
  }
  v9 = FindClipFormat(a1, 2u, 1);
  if ( !v9 )
    return (void *)v2;
  if ( *((_QWORD *)v9 + 1) == 2LL )
    return (void *)v2;
  v10 = (HBRUSH)xxxGetClipboardData(a1, 2u, a2);
  if ( !v10 )
    return (void *)v2;
  v11 = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) == 0
    || (result = (void *)xxxGetClipboardData(a1, 9u, a2), (v11 = (__int64)result) != 0) )
  {
    v8 = xxxBMPtoDIBV5(v10, v11);
    if ( v8 )
      goto LABEL_12;
    return (void *)v2;
  }
  return result;
}
