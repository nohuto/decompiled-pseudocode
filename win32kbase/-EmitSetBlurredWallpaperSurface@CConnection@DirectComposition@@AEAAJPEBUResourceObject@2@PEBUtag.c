/*
 * XREFs of ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0091508
 * Callers:
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x1C00913F0 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0091D10 (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0091610 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C00919E0 (UserReferenceDwmApiPort.c)
 *     GreLockDwmState @ 0x1C0091A70 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(
        DirectComposition::CConnection *this,
        const struct DirectComposition::ResourceObject *a2,
        const struct tagRECT *a3)
{
  void *v5; // rbx
  int v6; // ebx
  __int64 v7; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  GreLockDwmState();
  v5 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    v6 = CompositionObject::OpenDwmHandle(a2, &v9);
    if ( v6 < 0 )
      goto LABEL_6;
    v5 = v9;
  }
  v7 = UserReferenceDwmApiPort();
  if ( qword_1C02D6070 )
    v6 = qword_1C02D6070(v7, v5, a3);
  else
    v6 = -1073741637;
LABEL_6:
  GreUnlockDwmState();
  return (unsigned int)v6;
}
