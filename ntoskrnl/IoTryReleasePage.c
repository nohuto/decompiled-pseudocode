/*
 * XREFs of IoTryReleasePage @ 0x14055C684
 * Callers:
 *     MiRequestIoPageMdlCacheRelease @ 0x1403D146C (MiRequestIoPageMdlCacheRelease.c)
 * Callees:
 *     IopMcDereferenceBufferEntry @ 0x14055CAC0 (IopMcDereferenceBufferEntry.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14055CBA4 (IopMcFindNextTableEntryForUnlock.c)
 *     IopMcTryUnlockMdl @ 0x14055D00C (IopMcTryUnlockMdl.c)
 */

__int64 __fastcall IoTryReleasePage(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // di
  ULONG_PTR NextTableEntryForUnlock; // rsi
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = -1073741275;
  v3 = 1;
  _InterlockedAdd(&dword_140C5D2E0, 1u);
  v7 = 0LL;
  v6[2] = 0LL;
  v6[1] = 0LL;
  v6[0] = a2;
  NextTableEntryForUnlock = IopMcFindNextTableEntryForUnlock(v6, &v7);
  if ( NextTableEntryForUnlock )
  {
    do
    {
      if ( *(_DWORD *)(NextTableEntryForUnlock + 48) )
        v3 = 0;
      else
        v3 &= IopMcTryUnlockMdl(NextTableEntryForUnlock, v7);
      IopMcDereferenceBufferEntry(NextTableEntryForUnlock);
      NextTableEntryForUnlock = IopMcFindNextTableEntryForUnlock(v6, &v7);
    }
    while ( NextTableEntryForUnlock );
    return v3 == 0 ? 0x40000019 : 0;
  }
  return v2;
}
