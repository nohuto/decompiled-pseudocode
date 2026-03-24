/*
 * XREFs of bDeleteSurface @ 0x1C001CE70
 * Callers:
 *     EngDeleteSurface @ 0x1C001CE50 (EngDeleteSurface.c)
 *     bDeleteBrush @ 0x1C001D7B0 (bDeleteBrush.c)
 *     GreDeleteObject @ 0x1C0039970 (GreDeleteObject.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00835D4 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00A32D0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B78A0 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0141800 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0032E40 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C920C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F580 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v6);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(a1, v2);
  v4 = 0;
  v7 = v3;
  if ( v3 )
    v4 = SURFREF::bDeleteSurface(v6, 0LL);
  SURFREF::~SURFREF((SURFREF *)v6);
  return v4;
}
