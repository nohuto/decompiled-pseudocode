/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x140393FC4
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x1405509A4 (IoProvisionCrashDumpKey.c)
 *     KeCapturePersistentThreadState @ 0x140554360 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x1408347D8 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x14094BA98 (IoCaptureLiveDump.c)
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
    *(_BYTE *)a1 = byte_140C64DD4;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140C64E18 == 1;
    v1 = dword_140C64E20;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}
