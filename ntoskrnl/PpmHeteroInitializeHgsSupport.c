/*
 * XREFs of PpmHeteroInitializeHgsSupport @ 0x1403A6784
 * Callers:
 *     PpmHeteroHgsBackupInit @ 0x1403A6744 (PpmHeteroHgsBackupInit.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_HgsPlusSupportRequired__private_ReportDeviceUsage @ 0x14040BA08 (Feature_HgsPlusSupportRequired__private_ReportDeviceUsage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PpmHeteroInitializeHgsSupport()
{
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r14^1
  int v12; // r15d
  int v13; // ebp
  unsigned int v14; // ebx
  PMDL PagesForMdl; // rax
  _QWORD *p_Next; // rsi
  PVOID MappedSystemVa; // r8
  int v18; // ecx
  unsigned int i; // edi
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]

  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 6 )
    return (unsigned int)-1073741637;
  _RAX = 6LL;
  __asm { cpuid }
  v10 = _RDX;
  v11 = BYTE1(_RCX);
  v12 = _RAX;
  if ( (_RAX & 0x80000) == 0 )
    return (unsigned int)-1073741637;
  v13 = _RDX & 1;
  if ( (_RDX & 1) != 0 && (_RDX & 2) != 0 )
  {
    v14 = 0;
    PagesForMdl = MmAllocatePagesForMdlEx(
                    0LL,
                    (PHYSICAL_ADDRESS)-1LL,
                    0LL,
                    ((((unsigned int)_RDX >> 8) & 0xF) + 1) << 12,
                    MmCached,
                    0x24u);
    p_Next = &PagesForMdl->Next;
    if ( PagesForMdl )
    {
      if ( (PagesForMdl->MdlFlags & 5) != 0 )
        MappedSystemVa = PagesForMdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      if ( MappedSystemVa )
      {
        __writemsr(0x17D0u, (p_Next[6] << 12) | 1LL);
        qword_140D1F618 = (__int64)PpmHeteroHgsUpdateDpcRoutine;
        PpmHeteroHgsUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmHeteroHgsUpdateWorker;
        v18 = 0;
        LODWORD(PpmHeteroHgsUpdateDpc) = 787;
        qword_140D1F620 = 0LL;
        qword_140D1F638 = 0LL;
        qword_140D1F610 = 0LL;
        PpmHeteroHgsUpdateWorkItem.Parameter = 0LL;
        PpmHeteroHgsUpdateWorkItem.List.Flink = 0LL;
        for ( i = v10 >> 2; i; i >>= 1 )
          v18 += i & 1;
        if ( !PpmHeteroHgsThreadDisabled && (v12 & 0x800000) != 0 )
        {
          PpmHeteroWorkloadClasses = v11;
          if ( v11 > 0x20u )
          {
            PpmHeteroWorkloadClasses = 1;
            PpmHeteroHgsThreadDisabled = 1;
          }
        }
        v21 = 1LL;
        PpmHeteroHgsTableEntry = (__int64)MappedSystemVa;
        PpmHeteroHgsCapabilityBits = v18 + v13 + 1;
        PpmHeteroHgsInterface = (__int64)MappedSystemVa;
        PpmHeteroHgsTableMdl = (__int64)p_Next;
        PpmHeteroHgsEnabled = 1;
        Feature_HgsPlusSupportRequired__private_ReportDeviceUsage();
        if ( !PpmHeteroHgsThreadDisabled && (v12 & 0x800000) != 0 )
        {
          LODWORD(v21) = 3;
          PpmHeteroHgsThreadEnabled = 1;
        }
        __writemsr(0x17D1u, v21);
        if ( PpmHeteroHgsThreadEnabled )
          KiHgsPlusEnabled = 1;
      }
      else
      {
        v14 = -1073741670;
        MiFreePagesFromMdl((ULONG_PTR)p_Next, 0);
        ExFreePoolWithTag(p_Next, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v14;
}
