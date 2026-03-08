/*
 * XREFs of ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C024FD48
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F598 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C010FBEC (GreGetTextExtentW.c)
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x1C024F720 (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F9B8 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 */

__int64 __fastcall NeedsEndEllipsis(
        Gre::Base *a1,
        WCHAR *a2,
        int *a3,
        struct DRAWTEXTDATA *a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  int v6; // esi
  int v7; // edi
  int v11; // ebp
  int v12; // ebx
  int v13; // ebp
  signed int v14; // ebx
  int ExtentMinusPrefixes; // eax
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  struct tagSIZE v19; // [rsp+80h] [rbp+18h] BYREF

  v6 = *a3;
  v7 = 0;
  v19 = 0LL;
  if ( !v6 )
    return 0LL;
  v11 = *((_DWORD *)a4 + 8);
  v12 = *((_DWORD *)a4 + 14);
  if ( (int)DT_GetExtentMinusPrefixes(a1, a2, v6, a5, v17, a6, -1) <= v11
    || !(unsigned int)GreGetTextExtentW((HDC)a1, L"...", 3u, &v19) )
  {
    return 0LL;
  }
  v13 = v12 - v19.cx + v11;
  v14 = 1;
  if ( v13 > 0 )
  {
    v14 = v6;
    if ( v6 > 0 )
    {
      do
      {
        ExtentMinusPrefixes = DT_GetExtentMinusPrefixes(a1, a2, (v14 + v7 + 1) / 2, a5, v18, a6, -1);
        if ( ExtentMinusPrefixes >= v13 )
        {
          if ( ExtentMinusPrefixes <= v13 )
          {
            v14 = (v14 + v7 + 1) / 2;
            break;
          }
          v14 = (v14 + v7 + 1) / 2 - 1;
        }
        else
        {
          v7 = (v14 + v7 + 1) / 2;
        }
      }
      while ( v7 < v14 );
    }
    if ( v14 < 1 )
      v14 = 1;
  }
  *a3 = DT_AdjustBreakForSurrogatesAndVariationSelectors(a2, v14, v6);
  return 1LL;
}
