/*
 * XREFs of ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC
 * Callers:
 *     GreGetClipBox @ 0x1C001BC60 (GreGetClipBox.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0062ED0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C016A2C8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C016B0B8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0175868 (GreSetMagicColors.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

DLODCOBJ *__fastcall DLODCOBJ::DLODCOBJ(DLODCOBJ *this)
{
  char *v1; // rdi

  *(_QWORD *)this = 0LL;
  v1 = (char *)this + 16;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      v1,
      (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64),
      UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  *((_WORD *)this + 24) = 256;
  return this;
}
