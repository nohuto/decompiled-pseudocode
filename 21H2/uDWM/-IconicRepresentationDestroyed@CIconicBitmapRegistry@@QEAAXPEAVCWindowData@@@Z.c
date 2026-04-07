/*
 * XREFs of ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180045B5C
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180027AB4 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x180044250 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180045B9C (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180089E7C (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::IconicRepresentationDestroyed(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  *((_BYTE *)a2 + 610) &= ~0x20u;
  CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
  if ( *((_QWORD *)a2 + 47) )
    CIconicBitmapRegistry::RegisterBitmapInUse(this, a2, 0);
}
