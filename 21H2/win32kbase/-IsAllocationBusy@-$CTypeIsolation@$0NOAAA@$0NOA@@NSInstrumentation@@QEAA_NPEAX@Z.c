/*
 * XREFs of ?IsAllocationBusy@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00DAFCC
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0089AF0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C008B120 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00D9B6C (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<909312,3552>::IsAllocationBusy(__int64 ***a1, unsigned __int64 a2)
{
  char v2; // di
  NSInstrumentation::CPlatformReaderWriterLock *v6; // rbx
  __int64 **i; // rsi
  int v8; // eax

  v2 = 0;
  if ( !a2 )
    return 0;
  v6 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v6);
  for ( i = *a1; i != (__int64 **)a1; i = (__int64 **)*i )
  {
    v8 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::CheckAllocationStatus(i[4], a2);
    if ( v8 == 1 )
    {
      v2 = 1;
      break;
    }
    if ( (unsigned int)(v8 - 2) <= 1 )
      break;
  }
  GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v6);
  return v2;
}
