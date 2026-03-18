/*
 * XREFs of RawCleanupVcb @ 0x14074B878
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402D2BD8 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1403770A8 (RawCheckForDeleteVolume.c)
 *     RawMountVolume @ 0x14074C2EC (RawMountVolume.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x1402D2AA0 (ExFreeCacheAwareRundownProtection.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407B1200 (FsRtlTeardownPerStreamContexts.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall RawCleanupVcb(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  void *Oplock; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx

  Oplock = AdvancedHeader[1].Oplock;
  if ( Oplock )
  {
    ExFreePoolWithTag(Oplock, 0);
    AdvancedHeader[1].Oplock = 0LL;
  }
  else if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 8) != 0 )
  {
    ExFreePoolWithTag(AdvancedHeader[1].FileContextSupportPointer, 0);
    AdvancedHeader[1].FileContextSupportPointer = 0LL;
  }
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 0x10) != 0 )
    FsRtlTeardownPerStreamContexts(AdvancedHeader);
  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)&AdvancedHeader[2].NodeTypeCode;
  if ( v3 )
    ExFreeCacheAwareRundownProtection(v3);
  *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = 0LL;
}
