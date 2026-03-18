/*
 * XREFs of DeleteFadeSprite @ 0x1C01E24C0
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *DeleteFadeSprite()
{
  struct tagWND *v0; // rbx
  struct tagWND *v1; // rax

  v0 = 0LL;
  if ( (gfade[6] & 8) != 0 )
  {
    v1 = (struct tagWND *)HMValidateHandleNoSecure(gfade[0], 1);
    v0 = v1;
    if ( v1 && (*(_BYTE *)(*((_QWORD *)v1 + 5) + 26LL) & 8) != 0 )
      UnsetLayeredWindow(v1, 0);
  }
  else
  {
    GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), 0LL, (HSPRITE)gfade[0], 1);
  }
  gfade[0] = 0LL;
  return v0;
}
