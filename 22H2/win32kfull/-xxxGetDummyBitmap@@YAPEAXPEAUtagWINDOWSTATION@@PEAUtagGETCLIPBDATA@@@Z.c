/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EA7C
 * Callers:
 *     xxxGetClipboardData @ 0x1C002D328 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023BCC (HMValidateHandleNoRip.c)
 *     xxxGetClipboardData @ 0x1C002D328 (xxxGetClipboardData.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C002F970 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C015C768 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C021E8F8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

HSURF __fastcall xxxGetDummyBitmap(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *v2; // rbx
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  HSURF result; // rax
  struct tagCLIP *v8; // rax
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  HSURF v12; // rbx
  struct tagCLIP *v13; // rax
  struct tagCLIP *v14; // rsi
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  ClipboardData = 0LL;
  v15[2] = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9u, (__int64)a2);
  ClipFormat = FindClipFormat(a1, 0x11u, 1);
  if ( ClipFormat
    && *((_QWORD *)ClipFormat + 1) != 2LL
    && (result = (HSURF)xxxGetClipboardData(a1, 0x11u, (__int64)a2), (v2 = result) != 0LL) )
  {
    *(_DWORD *)a2 = 17;
    *((_QWORD *)a2 + 1) = ClipboardData;
  }
  else
  {
    v8 = FindClipFormat(a1, 8u, 1);
    if ( v8 && *((_QWORD *)v8 + 1) != 2LL )
      v2 = xxxGetClipboardData(a1, 8u, (__int64)a2);
    if ( v2 && (v9 = HMValidateHandleNoRip((__int64)v2, 6)) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v15[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v15;
      v15[1] = v9;
      HMLockObject(v9);
      v12 = xxxDIBtoBMP((const struct tagBITMAPINFO *)(v9 + 20), (__int64)ClipboardData, *(_DWORD *)(v9 + 16));
      if ( v12 )
      {
        v13 = FindClipFormat(a1, 2u, 1);
        v14 = v13;
        if ( v13 )
        {
          UT_FreeCBFormat(v13);
          *((_QWORD *)v14 + 1) = v12;
          GreSetBitmapOwner(v12, 0LL);
          *(_DWORD *)a2 = 2;
        }
        else
        {
          GreDeleteObject(v12);
          v12 = 0LL;
        }
      }
      ThreadUnlock1(v11);
      return v12;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
