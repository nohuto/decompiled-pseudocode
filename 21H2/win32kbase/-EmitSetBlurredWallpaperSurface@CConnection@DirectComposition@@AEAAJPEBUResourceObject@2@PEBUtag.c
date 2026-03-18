/*
 * XREFs of ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0212E40
 * Callers:
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00803A0 (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x1C0213654 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0030A10 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0030A50 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00908E0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C0090B20 (UserReferenceDwmApiPort.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(
        DirectComposition::CConnection *this,
        const struct DirectComposition::ResourceObject *a2,
        const struct tagRECT *a3)
{
  void *v5; // rbx
  int v6; // ebx
  PVOID v7; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  GreLockDwmState();
  v5 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    v6 = CompositionObject::OpenDwmHandle(a2, &v9);
    if ( v6 < 0 )
      goto LABEL_7;
    v5 = v9;
  }
  v7 = UserReferenceDwmApiPort();
  if ( qword_1C029B868 )
    v6 = qword_1C029B868(v7, v5, a3);
  else
    v6 = -1073741637;
LABEL_7:
  GreUnlockDwmState();
  return (unsigned int)v6;
}
