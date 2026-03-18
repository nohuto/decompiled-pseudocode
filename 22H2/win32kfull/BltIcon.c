/*
 * XREFs of BltIcon @ 0x1C00274A8
 * Callers:
 *     _DrawIconEx @ 0x1C0028030 (_DrawIconEx.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022B810 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 * Callees:
 *     GreSetStretchBltMode @ 0x1C00276B0 (GreSetStretchBltMode.c)
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 */

__int64 __fastcall BltIcon(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  int v9; // esi
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v17; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+E8h] [rbp+40h]

  v9 = 0;
  if ( a8 == 1 )
  {
    v14 = a7;
LABEL_3:
    v15 = *(_QWORD *)(v14 + 88);
    goto LABEL_4;
  }
  if ( a8 == 3 )
  {
    v14 = a7;
    v15 = *(_QWORD *)(a7 + 128);
  }
  else
  {
    v14 = a7;
    v15 = *(_QWORD *)(a7 + 96);
    if ( !v15 )
    {
      v9 = *(_DWORD *)(a7 + 144) >> 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  GreSetBkColor(a1);
  v17 = GreSetTextColor(a1, 0LL);
  GreSetStretchBltMode(a1);
  v18 = GreSelectBitmap(a6, v15);
  if ( a8 == 3 )
  {
    LOBYTE(v19) = 0;
    HIWORD(v19) = 511;
    BYTE1(v19) = a9 < 0 ? 0 : 0x80;
    NtGdiAlphaBlend(a1, a2, a3, a4, a5, a6, 0, v9, *(_DWORD *)(v14 + 140), *(_DWORD *)(v14 + 144) >> 1, v19, 0LL);
  }
  else
  {
    GreStretchBltInternal(a1, a5, a6, 0, v9, *(_DWORD *)(v14 + 140), *(_DWORD *)(v14 + 144) >> 1, a9, -1, 0);
  }
  GreSetStretchBltMode(a1);
  GreSetTextColor(a1, v17);
  GreSetBkColor(a1);
  GreSelectBitmap(a6, v18);
  return 1LL;
}
