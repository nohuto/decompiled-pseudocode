/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x140392344
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x14054E504 (IoProvisionCrashDumpKey.c)
 *     KeCapturePersistentThreadState @ 0x140551EC0 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x140834B28 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_140C64954;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140C64998 == 1;
    v1 = dword_140C649A0;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}
