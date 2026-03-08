/*
 * XREFs of ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00140F0
 * Callers:
 *     DrawThumb2 @ 0x1C0013FB8 (DrawThumb2.c)
 * Callees:
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 *     DrawEdge @ 0x1C0088404 (DrawEdge.c)
 */

void __fastcall DrawGroove(HDC a1, HBRUSH a2, struct tagRECT *a3)
{
  HDC v4; // rdi
  const RECT *v5; // rdx
  RECT v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  if ( a2 == *(HBRUSH *)(gpsi + 4856LL) || a2 == *(HBRUSH *)(gpsi + 4944LL) )
  {
    v5 = a3;
  }
  else
  {
    v6 = *a3;
    DrawEdge(a1);
    v5 = &v6;
    a1 = v4;
  }
  FillRect(a1, v5, a2);
}
