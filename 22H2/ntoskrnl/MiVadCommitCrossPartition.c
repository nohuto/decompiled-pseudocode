/*
 * XREFs of MiVadCommitCrossPartition @ 0x1402988BC
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x14063A910 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14063BD10 (MiDecommitRegion.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14027EA4C (MiLocateLockedVadEvent.c)
 *     MiIsVadLarge @ 0x1402988E4 (MiIsVadLarge.c)
 */

__int64 __fastcall MiVadCommitCrossPartition(__int64 a1)
{
  __int64 v1; // rcx
  __int64 **LockedVadEvent; // rax
  int v4; // edx

  if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0
    && (unsigned int)MiIsVadLarge(a1)
    && (LockedVadEvent = MiLocateLockedVadEvent(v1, 16)) != 0LL
    && LockedVadEvent[3] )
  {
    return (unsigned int)(v4 - 15);
  }
  else
  {
    return 0LL;
  }
}
