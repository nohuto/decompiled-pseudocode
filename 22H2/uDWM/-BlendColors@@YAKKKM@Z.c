/*
 * XREFs of ?BlendColors@@YAKKKM@Z @ 0x18003E31C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023290 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BlendColors(int a1, int a2, float a3)
{
  return (unsigned __int8)(int)(float)((float)((float)(unsigned __int8)a1 * (float)(1.0 - a3))
                                     + (float)((float)(unsigned __int8)a2 * a3)) | ((unsigned __int8)(int)(float)((float)((float)BYTE2(a1) * (float)(1.0 - a3)) + (float)((float)BYTE2(a2) * a3)) << 16) | ((unsigned __int8)(int)(float)((float)((float)BYTE1(a1) * (float)(1.0 - a3)) + (float)((float)BYTE1(a2) * a3)) << 8);
}
