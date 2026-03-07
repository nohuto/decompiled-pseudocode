__int64 __fastcall UpdateSprite(
        HDEV a1,
        const struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int v15; // edi
  int v16; // eax
  _BYTE v18[144]; // [rsp+90h] [rbp-D8h] BYREF

  memset_0(v18, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v18);
  v15 = 0;
  if ( (GetProp(a2, (unsigned __int16)atomDispAffinity, 1LL) & 1) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 56LL);
  v16 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreUpdateSprite(
                         a1,
                         *(HWND *)a2,
                         0LL,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         (struct tagMINIWINDOWINFO *)v18,
                         v16,
                         0,
                         v15) == 0
       ? 0x803F0001
       : 0;
}
