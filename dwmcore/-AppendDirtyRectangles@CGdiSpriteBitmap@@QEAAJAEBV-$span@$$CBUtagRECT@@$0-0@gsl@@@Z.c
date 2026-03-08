/*
 * XREFs of ?AppendDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x1801C0CAC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CGdiSpriteBitmap::AppendDirtyRectangles(CGdiSpriteBitmap *this, __int64 a2)
{
  return CGdiSpriteBitmap::SetDirtyRectangles(this, a2);
}
