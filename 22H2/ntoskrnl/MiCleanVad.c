/*
 * XREFs of MiCleanVad @ 0x14061ECB8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiVadDeleted @ 0x14025AB90 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x14055BD50 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x14061E840 (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(char *P)
{
  unsigned int v2; // edi
  _DWORD *v3; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) == 1 )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (v3[12] & 0x100000) != 0 )
  {
    MiDeleteVad(v3, 0LL, 0);
  }
  else
  {
    MiUnmapVad((__int64)v3, 0LL, 0);
  }
  return v2;
}
