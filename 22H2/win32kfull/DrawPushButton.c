/*
 * XREFs of DrawPushButton @ 0x1C00286BC
 * Callers:
 *     DrawThumb2 @ 0x1C0014D68 (DrawThumb2.c)
 *     DrawFrameControl @ 0x1C01197C0 (DrawFrameControl.c)
 * Callees:
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     FillRect @ 0x1C0028BEC (FillRect.c)
 *     DrawEdge @ 0x1C002995C (DrawEdge.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v7; // esi
  int v8; // ebp
  int v10; // r14d
  HBRUSH v11; // rbx
  int result; // eax
  int *v13; // rax
  RECT v14; // [rsp+20h] [rbp-28h] BYREF

  v14 = *a2;
  v7 = 0;
  v8 = 0;
  DrawEdge(a1);
  v10 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    v13 = (int *)(gpsi + 4648LL);
    if ( *(_WORD *)(gpsi + 6996LL) < 8u || *v13 == 0xFFFFFF )
    {
      v11 = *(HBRUSH *)(gpsi + 4944LL);
      v7 = GreSetBkColor(a1, *v13);
      v8 = GreSetTextColor((__int64)a1, *(_DWORD *)(gpsi + 4628LL));
      v10 = 1;
    }
    else
    {
      v11 = *(HBRUSH *)(gpsi + 4856LL);
    }
  }
  else
  {
    v11 = *(HBRUSH *)(gpsi + 4816LL);
  }
  result = FillRect(a1, &v14, v11);
  if ( v10 )
  {
    GreSetBkColor(a1, v7);
    result = GreSetTextColor((__int64)a1, v8);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v14;
  return result;
}
