/*
 * XREFs of GrepSecureVirtualMemory @ 0x1C00CB2F0
 * Callers:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C007FE60 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C00ADA68 (EngAllocUserMemEx.c)
 *     EngSecureMem @ 0x1C014B370 (EngSecureMem.c)
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GrepSecureVirtualMemory(void *a1, SIZE_T a2, ULONG a3)
{
  if ( a2 )
    return MmSecureVirtualMemory(a1, a2, a3);
  else
    return 0LL;
}
