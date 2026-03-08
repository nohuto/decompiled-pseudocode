/*
 * XREFs of BgpGxRectangleCreate @ 0x140AEAA94
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x14038204C (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x140AE942C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140AE94D8 (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x140AE97BC (BgpGxFindSubRectangle.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140AEB2AC (BgpTxtCreateRegion.c)
 *     BgpGxBlendRectangle @ 0x140AEF430 (BgpGxBlendRectangle.c)
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140383BDC (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x140384078 (GxpBitsToBytes.c)
 */

__int64 __fastcall BgpGxRectangleCreate(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 Memory; // rax

  v4 = 0;
  v7 = GxpBitsToBytes(a1[1] * *a1 * a2);
  Memory = BgpFwAllocateMemory((unsigned int)(v7 + 72));
  if ( Memory )
  {
    *(_DWORD *)Memory = a1[1];
    *(_DWORD *)(Memory + 4) = *a1;
    *(_QWORD *)(Memory + 24) = Memory + 72;
    *(_DWORD *)(Memory + 8) = a2;
    *(_DWORD *)(Memory + 16) = 0;
    *(_DWORD *)(Memory + 12) = v7;
    *a3 = Memory;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
