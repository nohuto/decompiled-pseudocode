__int64 __fastcall GetLayeredWindowAttributes(__int64 a1, __int64 a2, BYTE *a3, unsigned int *a4)
{
  unsigned int SpriteAttributes; // edi
  int v8; // eax
  struct _BLENDFUNCTION v10; // [rsp+60h] [rbp+8h] BYREF

  SpriteAttributes = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
  {
    if ( (GetRedirectionFlags() & 1) != 0 )
    {
      v10 = 0;
      v8 = IsWindowDesktopComposed(a1);
      SpriteAttributes = GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, &v10, a4, v8);
      if ( SpriteAttributes )
        *a3 = v10.SourceConstantAlpha;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return SpriteAttributes;
}
