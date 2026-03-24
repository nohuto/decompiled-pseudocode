/*
 * XREFs of ?IsAllocationBusy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00CADD8
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C007B700 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C007CAF0 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00C8C20 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<917504,3584>::IsAllocationBusy(__int64 ***a1, unsigned __int64 a2)
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
    v8 = NSInstrumentation::CSectionBitmapAllocator<917504,3584>::CheckAllocationStatus(i[4], a2);
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
