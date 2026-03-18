/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00F7BD8
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001F138 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00F79F0 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F7AC8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00F7BC0 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2)
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(a1, a2);
}
