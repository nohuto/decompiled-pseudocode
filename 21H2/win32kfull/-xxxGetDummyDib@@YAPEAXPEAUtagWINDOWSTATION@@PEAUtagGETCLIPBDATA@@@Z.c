/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219EB8
 * Callers:
 *     xxxGetClipboardData @ 0x1C014AE38 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _ConvertMemHandle @ 0x1C014641C (_ConvertMemHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014AA2C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C014AE38 (xxxGetClipboardData.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C021981C (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0219890 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 */

void *__fastcall xxxGetDummyDib(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  void *result; // rax
  struct tagCLIP *v7; // rax
  HSURF v8; // rax
  __int64 v9; // rdi
  struct tagBITMAPINFO *v10; // rax
  struct tagBITMAPINFO *v11; // rbp
  int v12; // eax
  __int64 v13; // r8
  struct tagCLIP *v14; // rax
  struct tagCLIP *v15; // rsi
  __int64 v16; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
  {
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      result = xxxGetClipboardData(a1, 17LL, (__int64)a2);
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
  v8 = (HSURF)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v8 )
    return 0LL;
  v9 = 0LL;
  v10 = xxxBMPtoDIB(v8, (__int64)ClipboardData, 0LL);
  v11 = v10;
  if ( v10 )
  {
    v12 = SizeOfDibColorTable(&v10->bmiHeader);
    v9 = ConvertMemHandle(
           v11,
           v11->bmiHeader.biSize
         + v12
         + abs32(v11->bmiHeader.biHeight)
         * (((v11->bmiHeader.biWidth * v11->bmiHeader.biBitCount + 31) >> 3) & 0xFFFFFFFC),
           v13);
    Win32FreePool(v11);
    if ( v9 )
    {
      v14 = FindClipFormat(a1, 8u, 1);
      v15 = v14;
      if ( v14 )
      {
        UT_FreeCBFormat(v14);
        *((_QWORD *)v15 + 1) = v9;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        v16 = HMValidateHandleNoRip(v9, 6);
        if ( v16 )
          HMUnlockDestroyObject(v16);
        return 0LL;
      }
    }
  }
  return (void *)v9;
}
