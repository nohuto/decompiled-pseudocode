/*
 * XREFs of ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00CA3D4
 * Callers:
 *     NtUserCountClipboardFormats @ 0x1C00CA370 (NtUserCountClipboardFormats.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014664C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01F6C70 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C0140C58 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C0219760 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall CountNumClipFormatForIL(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  int v5; // ebp
  _QWORD *v6; // r14

  v2 = *(unsigned int **)(a2 + 128);
  v3 = 0;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 136);
    if ( v5 )
    {
      v6 = v2 + 5;
      do
      {
        --v5;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(*v6, a1) || !(unsigned int)IsFmtBlocked(*v2) )
          ++v3;
        v2 += 8;
        v6 += 4;
      }
      while ( v5 );
    }
  }
  return v3;
}
