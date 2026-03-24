/*
 * XREFs of ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C025D860
 * Callers:
 *     GetMonitorMenuRect @ 0x1C025D9AC (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025D9F0 (GetMonitorMenuRectForWindow.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C00428B0 (GetMonitorRectForDpiContext.c)
 *     ScaleDPIRect @ 0x1C0042960 (ScaleDPIRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025D794 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRectForDpiContext(
        struct tagRECT *__return_ptr retstr,
        const struct tagMONITOR *a2,
        unsigned int a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  struct tagRECT *MonitorMenuRectForDpi; // rax
  struct tagRECT v7; // xmm0
  struct tagRECT v9; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 0xF) != 2 || (a3 & 0x20000000) == 0 )
  {
    MonitorMenuRectForDpi = GetMonitorMenuRectForDpi(&v9, a2, (a3 >> 8) & 0x1FF);
    goto LABEL_7;
  }
  v9 = *(struct tagRECT *)((char *)a2 + 296);
  if ( IsRectEmptyInl(&v9) )
  {
    MonitorMenuRectForDpi = (struct tagRECT *)GetMonitorRectForDpiContext(&v9, v4, v5);
LABEL_7:
    v7 = *MonitorMenuRectForDpi;
    goto LABEL_8;
  }
  ScaleDPIRect(
    &v9,
    (__m128i *)&v9,
    *(_WORD *)(*(_QWORD *)(v4 + 40) + 68LL),
    *(_WORD *)(*(_QWORD *)(v4 + 40) + 64LL),
    *(_QWORD *)(*(_QWORD *)(v4 + 40) + 72LL),
    *(_QWORD *)(*(_QWORD *)(v4 + 40) + 28LL));
  v7 = v9;
LABEL_8:
  *retstr = v7;
  return retstr;
}
