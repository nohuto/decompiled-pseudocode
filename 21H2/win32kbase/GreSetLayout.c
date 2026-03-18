/*
 * XREFs of GreSetLayout @ 0x1C009E0A0
 * Callers:
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     GreCreateCompatibleDC @ 0x1C002E050 (GreCreateCompatibleDC.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C009E100 (-dwSetLayout@DC@@QEAAKJK@Z.c)
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
