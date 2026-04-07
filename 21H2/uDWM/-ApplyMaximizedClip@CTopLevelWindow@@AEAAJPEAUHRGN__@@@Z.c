/*
 * XREFs of ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x180021AE0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x1800211B0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x18003DA4C (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800BF52C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ApplyMaximizedClip(CTopLevelWindow *this, HRGN a2)
{
  signed int v2; // ebx
  LONG v5; // r9d
  int left; // eax
  LONG v7; // eax
  HRGN v8; // rsi
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  signed int LastError; // eax
  struct tagRECT v14; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)this + 240) & 4) != 0 )
  {
    v5 = *((_DWORD *)this + 163);
    left = *((_DWORD *)this + 30) - *((_DWORD *)this + 162);
    v14.left = *((_DWORD *)this + 161);
    v14.top = v5;
    if ( v14.left > left )
      left = v14.left;
    v14.right = left;
    v7 = *((_DWORD *)this + 31) - *((_DWORD *)this + 164);
    if ( v5 > v7 )
      v7 = v5;
    v14.bottom = v7;
    SetLastError(0);
    v8 = CreateRectRgnCoerceInvalid(&v14);
    if ( v8 )
    {
      SetLastError(0);
      if ( !CombineRgn(a2, a2, v8, 1) )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CC0D8, 11LL, v2, 0x11BAu);
      }
      DeleteObject(v8);
    }
    else
    {
      v9 = GetLastError();
      v2 = v9;
      if ( v9 > 0 )
        v2 = (unsigned __int16)v9 | 0x80070000;
      if ( v2 >= 0 )
        v2 = CheckGUIHandleQuota(v11, v10, v12);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CC0D8, 11LL, v2, 0x11B8u);
    }
  }
  return (unsigned int)v2;
}
