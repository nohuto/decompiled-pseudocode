/*
 * XREFs of RawClose @ 0x1406F32E8
 * Callers:
 *     RawDispatch @ 0x1406F2E80 (RawDispatch.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x14028DD58 (RawInitiateDeleteVolume.c)
 */

__int64 __fastcall RawClose(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_Resource; // rsi

  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) & 0x100) == 0 )
  {
    p_Resource = (struct _FAST_MUTEX *)&AdvancedHeader[2].Resource;
    ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].Resource);
    --*(_DWORD *)&AdvancedHeader[1].Flags;
    --LODWORD(AdvancedHeader[1].Resource);
    if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
      ExReleaseFastMutex(p_Resource);
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
