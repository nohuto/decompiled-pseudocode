/*
 * XREFs of ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C0159654
 * Callers:
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0159600 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 * Callees:
 *     GreGradientFill @ 0x1C00B6084 (GreGradientFill.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall FillGradient(HDC a1, const struct tagRECT *a2, int a3, int a4)
{
  struct _TRIVERTEX v4; // [rsp+30h] [rbp-58h] BYREF
  LONG right; // [rsp+40h] [rbp-48h]
  LONG bottom; // [rsp+44h] [rbp-44h]
  __int16 v7; // [rsp+48h] [rbp-40h]
  __int16 v8; // [rsp+4Ah] [rbp-3Eh]
  __int16 v9; // [rsp+4Ch] [rbp-3Ch]

  v4.Red = (unsigned __int8)a3 << 8;
  v4.Green = a3 & 0xFF00;
  v4.Blue = BYTE2(a3) << 8;
  v7 = (unsigned __int8)a4 << 8;
  v8 = a4 & 0xFF00;
  v9 = BYTE2(a4) << 8;
  v4.x = a2->left;
  v4.y = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  GreGradientFill(a1, &v4, 2u, dword_1C0332AA0, 1u, 0);
}
