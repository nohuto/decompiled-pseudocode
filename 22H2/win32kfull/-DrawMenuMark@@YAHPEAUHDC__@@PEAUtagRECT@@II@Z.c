/*
 * XREFs of ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C011B670
 * Callers:
 *     DrawFrameControl @ 0x1C0045B98 (DrawFrameControl.c)
 * Callees:
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C0043424 (-GetCaptionChar@@YAGI@Z.c)
 *     GreSetTextColor @ 0x1C0044578 (GreSetTextColor.c)
 *     FillRect @ 0x1C0045694 (FillRect.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011B78C (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 */

__int64 __fastcall DrawMenuMark(HDC a1, LPCRECT a2, int a3, char a4)
{
  LONG top; // edi
  int v7; // r10d
  int v8; // r11d
  int v9; // r9d
  int v11; // r12d
  int v12; // ebx
  int v13; // edi
  unsigned __int16 CaptionChar; // ax
  int v16; // [rsp+20h] [rbp-38h]
  unsigned __int16 v17; // [rsp+70h] [rbp+18h] BYREF

  top = a2->top;
  v7 = a2->right - a2->left;
  v8 = a2->bottom - top;
  v9 = v7;
  if ( v7 >= v8 )
    v9 = a2->bottom - top;
  v11 = a2->left + (a2->right - a2->left - v9) / 2 - (v7 > 11);
  v12 = top + (v8 - v9) / 2;
  FillRect(a1, a2, ghbrWhite);
  v13 = GreSetTextColor(a1, 0);
  if ( a3 == 2 )
  {
    if ( (a4 & 1) != 0 )
    {
      CaptionChar = 97;
    }
    else if ( (a4 & 2) != 0 )
    {
      CaptionChar = 104;
    }
    else if ( (a4 & 4) != 0 )
    {
      CaptionChar = 119;
    }
    else
    {
      CaptionChar = 56;
    }
  }
  else
  {
    CaptionChar = GetCaptionChar(a4);
  }
  v17 = CaptionChar;
  FlipUserTextOutW(a1, v11, v12, &v17, v16);
  GreSetTextColor(a1, v13);
  return 1LL;
}
