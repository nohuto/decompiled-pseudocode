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
