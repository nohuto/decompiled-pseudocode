/*
 * XREFs of ?IsAllocationBusy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00D3344
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 * Callees:
 *     RIMLockShared @ 0x1C0096B30 (RIMLockShared.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0096F70 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00D1B34 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<917504,3584>::IsAllocationBusy(__int64 ***a1, unsigned __int64 a2)
{
  char v2; // di
  __int64 v6; // rbx
  __int64 **i; // rsi
  int v8; // eax

  v2 = 0;
  if ( !a2 )
    return 0;
  v6 = (__int64)a1[2];
  RIMLockShared(v6);
  for ( i = *a1; i != (__int64 **)a1; i = (__int64 **)*i )
  {
    v8 = NSInstrumentation::CSectionBitmapAllocator<917504,3584>::CheckAllocationStatus(i[4], a2);
    if ( v8 == 1 )
    {
      v2 = 1;
      break;
    }
    if ( (unsigned int)(v8 - 2) < 2 )
      break;
  }
  GreLeaveCriticalRegionAndReleasePushLockShared(v6);
  return v2;
}
