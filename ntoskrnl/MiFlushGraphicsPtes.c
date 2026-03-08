/*
 * XREFs of MiFlushGraphicsPtes @ 0x140623FF8
 * Callers:
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiDeleteVaTail @ 0x140323460 (MiDeleteVaTail.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402149F0 (KeInvalidateRangeAllCachesNoIpi.c)
 */

char __fastcall MiFlushGraphicsPtes(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = MEMORY[0x48] & 0x300;
  if ( v2 == 256 )
  {
    _InterlockedOr(v6, 0);
  }
  else
  {
    v3 = a1 << 25 >> 16;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v4 = a2 / (unsigned int)(1 << MEMORY[0x48]);
      if ( a2 % (unsigned int)(1 << MEMORY[0x48]) )
        LODWORD(v4) = v4 + 1;
    }
    else
    {
      LODWORD(v4) = a2 * (1 << (9 - MEMORY[0x48]));
    }
    LOBYTE(v2) = KeInvalidateRangeAllCachesNoIpi(0LL, 8 * v4);
  }
  return v2;
}
