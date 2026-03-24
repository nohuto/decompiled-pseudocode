/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015C61C
 * Callers:
 *     xxxGetClipboardData @ 0x1C002D328 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023BCC (HMValidateHandleNoRip.c)
 *     xxxGetClipboardData @ 0x1C002D328 (xxxGetClipboardData.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C002F970 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _ConvertMemHandle @ 0x1C012BC90 (_ConvertMemHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C015C768 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C015C82C (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015C860 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 */

void *__fastcall xxxGetDummyDib(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  HPALETTE ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v6; // rax
  HBITMAP v7; // rax
  __int64 v8; // rdi
  struct tagBITMAPINFOHEADER *v9; // rax
  struct tagBITMAPINFOHEADER *v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // r8
  struct tagCLIP *v13; // rax
  struct tagCLIP *v14; // rsi
  void *result; // rax
  __int64 v16; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
  {
    ClipboardData = (HPALETTE)xxxGetClipboardData(a1, 9u, (__int64)a2);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      result = xxxGetClipboardData(a1, 0x11u, (__int64)a2);
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v6 = FindClipFormat(a1, 2u, 1);
  if ( !v6 )
    return 0LL;
  if ( *((_QWORD *)v6 + 1) == 2LL )
    return 0LL;
  v7 = (HBITMAP)xxxGetClipboardData(a1, 2u, (__int64)a2);
  if ( !v7 )
    return 0LL;
  v8 = 0LL;
  v9 = xxxBMPtoDIB(v7, ClipboardData, 0LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = SizeOfDibColorTable(v9);
    v8 = ConvertMemHandle(
           v10,
           v10->biSize + v11 + abs32(v10->biHeight) * (((v10->biWidth * v10->biBitCount + 31) >> 3) & 0xFFFFFFFC),
           v12);
    Win32FreePool(v10);
    if ( v8 )
    {
      v13 = FindClipFormat(a1, 8u, 1);
      v14 = v13;
      if ( v13 )
      {
        UT_FreeCBFormat(v13);
        *((_QWORD *)v14 + 1) = v8;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        v16 = HMValidateHandleNoRip(v8, 6);
        if ( v16 )
          HMUnlockDestroyObject(v16);
        return 0LL;
      }
    }
  }
  return (void *)v8;
}
