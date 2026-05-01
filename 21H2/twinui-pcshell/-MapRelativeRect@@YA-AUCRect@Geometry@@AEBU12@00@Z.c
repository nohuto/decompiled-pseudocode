/*
 * XREFs of ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180495688
 * Callers:
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180496CF8 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x18049A7F0 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x18049BBF4 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x180492730 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 */

int *__fastcall MapRelativeRect(int *a1, int *a2, _OWORD *a3, int *a4)
{
  int v6; // r8d
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int *result; // rax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a1 = *a3;
  v6 = a2[1];
  v7 = *a2;
  *a1 -= *a2;
  a1[2] -= v7;
  a1[3] -= v6;
  a1[1] -= v6;
  *(_OWORD *)a1 = *(_OWORD *)Geometry::CRect::MulDiv(v11, a1, a4[3] - a4[1], a2[3] - a2[1]);
  v8 = *a4;
  v9 = a4[1];
  *a1 += *a4;
  a1[2] += v8;
  result = a1;
  a1[3] += v9;
  a1[1] += v9;
  return result;
}
