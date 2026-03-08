/*
 * XREFs of ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C00541E0
 * Callers:
 *     DxgkFlipOverlay @ 0x1C0331B90 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0332170 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0332840 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 */

COREOVERLAYACCESS *__fastcall COREOVERLAYACCESS::COREOVERLAYACCESS(
        COREOVERLAYACCESS *this,
        struct DXGOVERLAY *const a2)
{
  COREOVERLAYACCESS *v2; // r9
  COREOVERLAYACCESS *result; // rax
  __int64 v4; // r8

  COREACCESS::COREACCESS(
    (COREOVERLAYACCESS *)((char *)this + 8),
    *(struct DXGADAPTER *const *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL));
  result = v2;
  *((_QWORD *)v2 + 9) = v4;
  return result;
}
