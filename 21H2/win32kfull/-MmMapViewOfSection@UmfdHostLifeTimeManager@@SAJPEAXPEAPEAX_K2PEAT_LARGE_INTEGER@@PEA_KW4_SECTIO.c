/*
 * XREFs of ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C01059CC
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C000FAC4 (EngMapFontFileFDInternal.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0011304 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     cMapRemoteFonts @ 0x1C028769C (cMapRemoteFonts.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F1E4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmMapViewOfSection(
        void *a1,
        void **a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6,
        enum _SECTION_INHERIT a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 *a10)
{
  unsigned int v13; // ebx
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v15,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v13 = MmMapViewOfSection(a1, UmfdHostLifeTimeManager::s_UmfdHostProcess, a2, 0LL, a4, a5, a6, 2, 0x400000, 2);
    *a10 = UmfdHostLifeTimeManager::s_UmfdHostGenerationId;
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v15 )
  {
    GreReleasePushLockShared(v15);
    KeLeaveCriticalRegion();
  }
  return v13;
}
