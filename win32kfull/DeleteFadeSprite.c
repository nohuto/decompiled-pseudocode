// write access to const memory has been detected, the output may be wrong!
__int64 DeleteFadeSprite()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = 0LL;
  if ( (gfade[12] & 8) != 0 )
  {
    v1 = HMValidateHandleNoSecure(gfade[0], 1);
    v0 = v1;
    if ( v1 && (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) != 0 )
      UnsetLayeredWindow(v1, 0);
  }
  else
  {
    GreDeleteSprite(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, *(void **)gfade, 1);
  }
  *(_QWORD *)gfade = 0LL;
  return v0;
}
