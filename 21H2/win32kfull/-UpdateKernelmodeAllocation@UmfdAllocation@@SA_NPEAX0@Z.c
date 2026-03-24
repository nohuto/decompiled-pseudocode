/*
 * XREFs of ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DF17C
 * Callers:
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C2848 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C009F5AC (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C009F668 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00D23FC (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C01E8CF8 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 */

char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, char *a2)
{
  char *v2; // rsi
  char *v4; // rdi
  PVOID v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  NSInstrumentation::CPointerHashTable *v9; // rcx
  const void *v10; // rdx
  PVOID v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1 - 28;
  v4 = a2 - 28;
  if ( a1 - 28 == a2 - 28 )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(a2);
    return 1;
  }
  v6 = UmfdAllocation::s_allocationLookupLock;
  v11 = UmfdAllocation::s_allocationLookupLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  if ( *((_DWORD *)v2 + 1) == *((_DWORD *)v4 + 1) && *((_DWORD *)v2 + 6) == *((_DWORD *)v4 + 6) && *(_DWORD *)v4 <= 1u )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v7 = *((_QWORD *)v2 + 2);
      if ( v7 )
      {
        v12 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(
          (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
          v7,
          &v12);
      }
      v8 = *((_QWORD *)v4 + 2);
      if ( v8 )
      {
        v12 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(
          (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
          v8,
          &v12);
      }
    }
    v9 = (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup;
    *((_QWORD *)v2 + 1) = *((_QWORD *)v4 + 1);
    v10 = (const void *)*((_QWORD *)v4 + 2);
    *((_QWORD *)v2 + 2) = v10;
    if ( NSInstrumentation::CPointerHashTable::Insert(v9, v10, a1) )
    {
      EngFreeMem(v4);
      NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v11);
      return 1;
    }
  }
  NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v11);
  return 0;
}
