/*
 * XREFs of ?_CalcThumbnailRect@CSwitchItemElement@@IEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x180411268
 * Callers:
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x180411434 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSwitchItemElement::_CalcThumbnailRect(__int64 a1, _DWORD *a2, int *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v12; // [rsp+34h] [rbp+Ch]

  v3 = *(_QWORD *)(a1 + 656);
  v5 = a3[2] - *a3;
  v7 = a3[3] - a3[1];
  if ( (double)(int)v3 / (double)SHIDWORD(v3) < (double)v5 / (double)v7 )
  {
    if ( SHIDWORD(v3) >= v7 )
    {
      v12 = a3[3] - a3[1];
      v5 = MulDiv(v7, v3, SHIDWORD(v3));
      goto LABEL_7;
    }
LABEL_6:
    v12 = HIDWORD(v3);
    v5 = v3;
    goto LABEL_7;
  }
  if ( (int)v3 < v5 )
    goto LABEL_6;
  v12 = MulDiv(v5, SHIDWORD(v3), v3);
LABEL_7:
  v8 = *a3;
  v9 = a3[1];
  v10 = a3[2] - *a3 - v5;
  a2[1] = v9;
  *a2 = v8 + v10 / 2;
  a2[2] = v5 + v8 + v10 / 2;
  a2[3] = v9 + v12;
  return a2;
}
