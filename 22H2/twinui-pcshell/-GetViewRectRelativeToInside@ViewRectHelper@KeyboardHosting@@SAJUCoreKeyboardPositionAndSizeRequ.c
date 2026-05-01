/*
 * XREFs of ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x1803DCAF8
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1803DA6E0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(int *a1, float *a2, float *a3)
{
  int v3; // r9d

  v3 = a1[5];
  if ( (v3 & 0xC) != 0 )
  {
    if ( (a1[5] & 0xC) == 0xC )
    {
      *a3 = *a2;
    }
    else if ( (v3 & 4) != 0 )
    {
      *a3 = (float)a1[3] + *a2;
    }
    else if ( (v3 & 8) != 0 )
    {
      *a3 = (float)((float)(a2[2] + *a2) - (float)a1[2]) - (float)a1[3];
    }
  }
  else
  {
    *a3 = (float)((float)(a2[2] - (float)a1[2]) * 0.5) + *a2;
  }
  if ( (v3 & 3) != 0 )
  {
    if ( (v3 & 3) == 3 )
    {
      a3[1] = a2[1];
    }
    else if ( (v3 & 1) != 0 )
    {
      a3[1] = (float)a1[4] + a2[1];
    }
    else if ( (v3 & 2) != 0 )
    {
      a3[1] = (float)((float)(a2[3] + a2[1]) - (float)a1[1]) - (float)a1[4];
    }
  }
  else
  {
    a3[1] = (float)((float)(a2[3] - (float)a1[1]) * 0.5) + a2[1];
  }
  return 0LL;
}
