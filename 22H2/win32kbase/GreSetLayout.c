/*
 * XREFs of GreSetLayout @ 0x1C00C2AA0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C003BC40 (GreCreateCompatibleDC.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00C2B00 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DC *v7[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
