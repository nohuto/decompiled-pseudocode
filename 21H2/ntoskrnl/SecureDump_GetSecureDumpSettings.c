/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x1403C0350
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140504FC0 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x1407B7D08 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
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
    *(_BYTE *)a1 = byte_140C4C894;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140C4C8D8 == 1;
    v1 = dword_140C4C8E0;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}
