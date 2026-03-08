/*
 * XREFs of MiCleanVad @ 0x1407D36F8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x14065E678 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x1406A2850 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 */

__int64 __fastcall MiCleanVad(PVOID P)
{
  unsigned int v2; // edi
  unsigned int *v3; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (v3[12] & 0x200000) != 0 )
  {
    MiDeleteVad(v3, 0LL, 0);
  }
  else
  {
    MiUnmapVad(v3, 0LL, 0LL);
  }
  return v2;
}
