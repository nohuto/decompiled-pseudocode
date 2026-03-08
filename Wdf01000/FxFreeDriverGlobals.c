/*
 * XREFs of FxFreeDriverGlobals @ 0x1C0043CA4
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C002C650 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeDriverGlobals(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  _WDF_DRIVER_GLOBALS *v1; // rbx
  KIRQL v2; // al
  WDFDRIVER__ *Driver; // r8
  _WDF_DRIVER_GLOBALS **v4; // rdx
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  WDFDRIVER__ *v9; // rcx
  void *v10; // rcx

  v1 = DriverGlobals - 8;
  v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  Driver = v1->Driver;
  if ( *((_WDF_DRIVER_GLOBALS **)v1->Driver + 1) != v1 || (v4 = *(_WDF_DRIVER_GLOBALS ***)&v1->DriverFlags, *v4 != v1) )
    __fastfail(3u);
  *v4 = (_WDF_DRIVER_GLOBALS *)Driver;
  *((_QWORD *)Driver + 1) = v4;
  *(_QWORD *)&v1->DriverFlags = v1;
  v1->Driver = (WDFDRIVER__ *)v1;
  KeReleaseSpinLock(&SpinLock, v2);
  v5 = *(_QWORD *)&v1[1].DriverName[16];
  if ( v5 )
  {
    v6 = *(_QWORD **)(v5 + 400);
    while ( v6 )
    {
      v7 = v6;
      v6 = (_QWORD *)v6[49];
      ExFreePoolWithTag(v7, 0);
    }
    v8 = **(void ***)&v1[1].DriverName[16];
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      **(_QWORD **)&v1[1].DriverName[16] = 0LL;
    }
    *(_BYTE *)(*(_QWORD *)&v1[1].DriverName[16] + 432LL) = 0;
    ExFreePoolWithTag(*(PVOID *)&v1[1].DriverName[16], 0);
    *(_QWORD *)&v1[1].DriverName[16] = 0LL;
  }
  v9 = v1[6].Driver;
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)&v1[7].DriverName[16];
  v1->DisplaceDriverUnload = 0;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)&v1[7].DriverName[16] = 0LL;
  }
  ExFreePoolWithTag(v1, 0);
}
