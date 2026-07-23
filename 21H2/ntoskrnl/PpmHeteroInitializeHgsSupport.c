/*
 * XREFs of PpmHeteroInitializeHgsSupport @ 0x1403CDDB4
 * Callers:
 *     PpmHeteroHgsBackupInit @ 0x1403CDD74 (PpmHeteroHgsBackupInit.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402945E0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 PpmHeteroInitializeHgsSupport()
{
  _QWORD *p_Next; // rsi
  unsigned int v11; // ebx
  PMDL PagesForMdl; // rax
  PVOID MappedSystemVa; // rbx

  p_Next = 0LL;
  if ( PpmHeteroHgsDisabled )
    return (unsigned int)-1073741637;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 6 )
    return (unsigned int)-1073741637;
  _RAX = 6LL;
  __asm { cpuid }
  if ( (_RAX & 0x80000) != 0 )
  {
    if ( (_RDX & 1) != 0 && (_RDX & 2) != 0 )
    {
      PagesForMdl = MmAllocatePagesForMdlEx(
                      0LL,
                      (PHYSICAL_ADDRESS)-1LL,
                      0LL,
                      ((((unsigned int)_RDX >> 8) & 0xF) + 1) << 12,
                      MmCached,
                      0x24u);
      p_Next = &PagesForMdl->Next;
      if ( !PagesForMdl )
        return (unsigned int)-1073741670;
      if ( (PagesForMdl->MdlFlags & 5) != 0 )
        MappedSystemVa = PagesForMdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      if ( MappedSystemVa )
      {
        __writemsr(0x17D0u, (p_Next[6] << 12) | 1LL);
        __writemsr(0x17D1u, 1uLL);
        PpmHeteroHgsInterface = (__int64)MappedSystemVa;
        qword_140CFCE28 = (__int64)PpmHeteroHgsUpdateDpcRoutine;
        v11 = 0;
        LODWORD(PpmHeteroHgsUpdateDpc) = 787;
        PpmHeteroHgsUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmHeteroHgsUpdateWorker;
        qword_140CFCE30 = 0LL;
        qword_140CFCE48 = 0LL;
        qword_140CFCE20 = 0LL;
        PpmHeteroHgsUpdateWorkItem.Parameter = 0LL;
        PpmHeteroHgsUpdateWorkItem.List.Flink = 0LL;
        PpmHeteroHgsTableMdl = (__int64)p_Next;
        PpmHeteroHgsEnabled = 1;
        return v11;
      }
      v11 = -1073741670;
    }
    else
    {
      v11 = -1073741637;
    }
    if ( p_Next )
    {
      MiFreePagesFromMdl((ULONG_PTR)p_Next, 0);
      ExFreePoolWithTag(p_Next, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v11;
}
