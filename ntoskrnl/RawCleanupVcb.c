/*
 * XREFs of RawCleanupVcb @ 0x1406F3EA0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14028DD58 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1405A479C (RawCheckForDeleteVolume.c)
 *     RawMountVolume @ 0x1406F37D0 (RawMountVolume.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x14028E220 (ExFreeCacheAwareRundownProtection.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406F3F30 (FsRtlTeardownPerStreamContexts.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall RawCleanupVcb(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  void *Oplock; // rcx
  PFSRTL_ADVANCED_FCB_HEADER v3; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v4; // rcx

  Oplock = AdvancedHeader[1].Oplock;
  if ( Oplock )
  {
    ExFreePoolWithTag(Oplock, 0);
    AdvancedHeader[1].Oplock = 0LL;
    v3 = AdvancedHeader + 1;
  }
  else
  {
    v3 = AdvancedHeader + 1;
    if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 8) != 0 )
    {
      ExFreePoolWithTag(AdvancedHeader[1].FileContextSupportPointer, 0);
      AdvancedHeader[1].FileContextSupportPointer = 0LL;
    }
  }
  if ( (*(_DWORD *)&v3->NodeTypeCode & 0x10) != 0 )
    FsRtlTeardownPerStreamContexts(AdvancedHeader);
  v4 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)&AdvancedHeader[2].NodeTypeCode;
  if ( v4 )
    ExFreeCacheAwareRundownProtection(v4);
  *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = 0LL;
}
