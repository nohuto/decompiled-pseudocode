/*
 * XREFs of ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DBF8C
 * Callers:
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C11D8 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C000B670 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C000B73C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00DDDA0 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C01E33A4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 */

char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, char *a2)
{
  char *v2; // rsi
  char *v4; // rdi
  PVOID v6; // rbx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
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
      v8 = *((_QWORD *)v2 + 2);
      if ( v8 )
      {
        v12 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v7, v8, &v12);
      }
      v9 = *((_QWORD *)v4 + 2);
      if ( v9 )
      {
        v12 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v7, v9, &v12);
      }
    }
    *((_QWORD *)v2 + 1) = *((_QWORD *)v4 + 1);
    v10 = (const void *)*((_QWORD *)v4 + 2);
    *((_QWORD *)v2 + 2) = v10;
    if ( NSInstrumentation::CPointerHashTable::Insert(v7, v10, a1) )
    {
      EngFreeMem(v4);
      NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v11);
      return 1;
    }
  }
  NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v11);
  return 0;
}
