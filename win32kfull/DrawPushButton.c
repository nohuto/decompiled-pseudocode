/*
 * XREFs of DrawPushButton @ 0x1C0086E34
 * Callers:
 *     DrawThumb2 @ 0x1C0013FB8 (DrawThumb2.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 * Callees:
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 *     DrawEdge @ 0x1C0088404 (DrawEdge.c)
 *     GreSetBkColor @ 0x1C0113964 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0113D94 (GreSetTextColor.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  unsigned int v7; // ebp
  int v9; // r14d
  HBRUSH v10; // rbx
  int result; // eax
  RECT v12; // [rsp+20h] [rbp-28h] BYREF

  v12 = *a2;
  v7 = 0;
  DrawEdge(a1);
  v9 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF )
    {
      v10 = *(HBRUSH *)(gpsi + 4944LL);
      GreSetBkColor(a1);
      v7 = GreSetTextColor(a1, *(unsigned int *)(gpsi + 4628LL));
      v9 = 1;
    }
    else
    {
      v10 = *(HBRUSH *)(gpsi + 4856LL);
    }
  }
  else
  {
    v10 = *(HBRUSH *)(gpsi + 4816LL);
  }
  result = FillRect(a1, &v12, v10);
  if ( v9 )
  {
    GreSetBkColor(a1);
    result = GreSetTextColor(a1, v7);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v12;
  return result;
}
