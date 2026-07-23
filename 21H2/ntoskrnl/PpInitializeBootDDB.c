/*
 * XREFs of PpInitializeBootDDB @ 0x140A54088
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     PpBootDDBHelper @ 0x1407A4120 (PpBootDDBHelper.c)
 *     PiInitializeDDBCache @ 0x140A54128 (PiInitializeDDBCache.c)
 */

__int64 __fastcall PpInitializeBootDDB(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  void *v5; // rcx

  if ( a2 )
    return 0LL;
  PpDDBHandle = 0LL;
  PpBootDDB = 0LL;
  PpDDBPatchHandle = 0LL;
  PpBootDDBPatch = 0LL;
  ExInitializeResourceLite(&PiDDBLock);
  PiInitializeDDBCache();
  if ( InitIsWinPEMode )
    return 3221225473LL;
  result = PpBootDDBHelper(
             *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
             &PpBootDDB,
             (__int64 *)&PpDDBHandle);
  if ( (int)result >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 240);
    v5 = *(void **)(v4 + 80);
    if ( v5 )
      PpBootDDBHelper(v5, *(unsigned int *)(v4 + 88), &PpBootDDBPatch, (__int64 *)&PpDDBPatchHandle);
    PpBootDDBInitialized = 1;
    return 0LL;
  }
  return result;
}
