/*
 * XREFs of ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1804931D0
 * Callers:
 *     ?GetVisualRect@CDropFeedback@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1804922C0 (-GetVisualRect@CDropFeedback@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x18049A460 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x18049B864 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x1804923A0 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 */

void __fastcall ZoomRect(
        const struct Geometry::CRect *a1,
        const struct Geometry::CPointFloat *a2,
        int a3,
        struct tagRECT *a4)
{
  int v7; // edx
  float v8; // xmm1_4
  float v9; // xmm0_4
  int v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+34h] [rbp-14h]
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]

  Geometry::CRect::MulDiv(&v10, (int *)a1, a3, 100);
  v7 = (int)(float)((float)((float)((float)(*(float *)a2 - (float)*(int *)a1)
                                  / (float)(*((_DWORD *)a1 + 2) - *(_DWORD *)a1))
                          * (float)(v10 + *((_DWORD *)a1 + 2) - *(_DWORD *)a1 - v12))
                  + (float)*(int *)a1);
  v8 = (float)(*((float *)a2 + 1) - (float)*((int *)a1 + 1)) / (float)(*((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1));
  v9 = (float)(v11 + *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1) - v13);
  SetRect(
    a4,
    v7,
    (int)(float)((float)(v8 * v9) + (float)*((int *)a1 + 1)),
    v12 + v7 - v10,
    (int)(float)((float)(v8 * v9) + (float)*((int *)a1 + 1)) + v13 - v11);
}
