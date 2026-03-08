/*
 * XREFs of ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F7CC
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F598 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F890 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 */

void __fastcall DT_DrawJustifiedLine(
        HDC a1,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  int v10; // edx
  int v11; // eax

  v10 = *(_DWORD *)a6;
  if ( (a5 & 3) != 0 )
  {
    v10 = *((_DWORD *)a6 + 2) - (*((_DWORD *)a6 + 14) + DT_DrawStr(a1, v10, a2, a3, a4, 0, a5, a6, -1));
    if ( (a5 & 1) != 0 )
      v10 = *(_DWORD *)a6 + ((v10 - *(_DWORD *)a6) >> 1);
  }
  v11 = *((_DWORD *)a6 + 14) + DT_DrawStr(a1, v10, a2, a3, a4, 1, a5, a6, -1);
  if ( v11 > *((_DWORD *)a6 + 9) )
    *((_DWORD *)a6 + 9) = v11;
}
