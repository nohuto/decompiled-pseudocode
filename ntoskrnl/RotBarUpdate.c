/*
 * XREFs of RotBarUpdate @ 0x14054C56C
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x14054C410 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     InbvGetDisplayState @ 0x14054C18C (InbvGetDisplayState.c)
 *     FadePalette @ 0x14054C32C (FadePalette.c)
 */

void RotBarUpdate()
{
  int v0; // ecx
  int v1; // ecx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ebx

  if ( PltRotBarStatus )
  {
    if ( PltRotBarStatus == 1 )
    {
      v5 = PaletteNum;
      FadePalette(PaletteNum);
      *((_DWORD *)PalettePtr + 1) = 0;
      PaletteNum = v5 + 1;
      if ( v5 + 1 >= 20 )
      {
        PltRotBarStatus = 2;
        PaletteNum = 1;
      }
      goto LABEL_25;
    }
    if ( PltRotBarStatus != 2 )
    {
      if ( PltRotBarStatus == 3 )
        return;
      goto LABEL_25;
    }
    if ( !AnimBarPos )
    {
      v3 = 371LL;
      v2 = 376LL;
      goto LABEL_20;
    }
    if ( AnimBarPos == 1 )
    {
      v4 = 259LL;
    }
    else
    {
      if ( AnimBarPos != 2 )
      {
        if ( AnimBarPos == 16 )
        {
          VidBufferToScreenBlt(&Square1, 363LL, 354LL, 6LL, 9, 4);
          VidBufferToScreenBlt(&Square2, (unsigned int)(8 * AnimBarPos + 243), 354LL, 6LL, 9, 4);
        }
        else
        {
          if ( AnimBarPos != 17 )
          {
            VidBufferToScreenBlt(&Square1, (unsigned int)(8 * AnimBarPos + 235), 354LL, 6LL, 9, 4);
            VidBufferToScreenBlt(&Square2, (unsigned int)(8 * AnimBarPos + 243), 354LL, 6LL, 9, 4);
            VidBufferToScreenBlt(&Square3, (unsigned int)(8 * AnimBarPos + 251), 354LL, 6LL, 9, 4);
            v0 = AnimBarPos;
            if ( AnimBarPos <= 3 )
              goto LABEL_21;
            goto LABEL_12;
          }
          VidBufferToScreenBlt(&Square1, 371LL, 354LL, 6LL, 9, 4);
        }
        v0 = AnimBarPos;
LABEL_12:
        v1 = (v0 + 16) % 18;
        v2 = (unsigned int)(8 * v1 + 248);
        v3 = (unsigned int)(8 * v1 + 243);
LABEL_20:
        VidSolidColorFill(v3, 354LL, v2, 362LL, 0);
LABEL_21:
        if ( ++AnimBarPos > 17 )
          AnimBarPos = 0;
LABEL_25:
        if ( !(unsigned int)InbvGetDisplayState() )
          VidBitBlt(&PaletteBmp, 0LL, 480LL);
        return;
      }
      VidBufferToScreenBlt(&Square2, 259LL, 354LL, 6LL, 9, 4);
      v4 = (unsigned int)(8 * AnimBarPos + 251);
    }
    VidBufferToScreenBlt(&Square3, v4, 354LL, 6LL, 9, 4);
    goto LABEL_21;
  }
}
