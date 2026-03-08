/*
 * XREFs of ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B81D8
 * Callers:
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B8280 (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801BE02C (--0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CGradientBrush *__fastcall CGradientBrush::CGradientBrush(CGradientBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  CGradientBrush *result; // rax
  char v4; // r10

  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_BYTE *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = v2 + 136;
  *(_QWORD *)(v2 + 120) = v2 + 136;
  *(_QWORD *)(v2 + 128) = v2 + 152;
  result = (CGradientBrush *)v2;
  *(_BYTE *)(v2 + 152) = 1;
  *(_DWORD *)(v2 + 156) = 1;
  *(_DWORD *)(v2 + 160) = 2;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_WORD *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 226) = v4;
  return result;
}
