/*
 * XREFs of bDeleteSurface @ 0x1C0029640
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C0029620 (EngDeleteSurface.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00A3CE0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00D3E60 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C017E448 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C018B1D0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0029684 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C009B410 (HmgShareLockCheckIgnoreStockBit.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheckIgnoreStockBit(a1, a2);
  v6 = v2;
  if ( v2 )
  {
    v4 = SURFREF::bDeleteSurface((SURFREF *)&v6, v3);
    v2 = v6;
  }
  else
  {
    v4 = 0;
  }
  if ( v2 )
    HmgDecrementShareReferenceCountEx(v2, 0LL);
  return v4;
}
