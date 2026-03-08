/*
 * XREFs of PpInitializeBootDDB @ 0x140B5A6EC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     PpBootDDBHelper @ 0x14081D504 (PpBootDDBHelper.c)
 *     PiInitializeDDBCache @ 0x140B5A928 (PiInitializeDDBCache.c)
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
    BYTE1(NlsMbCodePageTag) = 1;
    return 0LL;
  }
  return result;
}
