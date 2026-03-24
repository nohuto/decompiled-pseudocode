/*
 * XREFs of PpmHeteroInitializeHgsSupport @ 0x1403CD544
 * Callers:
 *     PpmHeteroHgsBackupInit @ 0x1403CD504 (PpmHeteroHgsBackupInit.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1403547F0 (MmAllocatePagesForMdlEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmHeteroInitializeHgsSupport(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *p_Next; // rsi
  unsigned int v14; // ebx
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
        qword_140CFCE08 = (__int64)PpmHeteroHgsUpdateDpcRoutine;
        v14 = 0;
        LODWORD(PpmHeteroHgsUpdateDpc) = 787;
        PpmHeteroHgsUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmHeteroHgsUpdateWorker;
        qword_140CFCE10 = 0LL;
        qword_140CFCE28 = 0LL;
        qword_140CFCE00 = 0LL;
        PpmHeteroHgsUpdateWorkItem.Parameter = 0LL;
        PpmHeteroHgsUpdateWorkItem.List.Flink = 0LL;
        PpmHeteroHgsTableMdl = (__int64)p_Next;
        PpmHeteroHgsEnabled = 1;
        return v14;
      }
      v14 = -1073741670;
    }
    else
    {
      v14 = -1073741637;
    }
    if ( p_Next )
    {
      MiFreePagesFromMdl((ULONG_PTR)p_Next, 0, a3);
      ExFreePoolWithTag(p_Next, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v14;
}
