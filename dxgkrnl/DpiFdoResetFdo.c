/*
 * XREFs of DpiFdoResetFdo @ 0x1C0398754
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0396F80 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiFdoCleanupMipiDsi @ 0x1C0024208 (DpiFdoCleanupMipiDsi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiFdoCleanupDP @ 0x1C005E8E4 (DpiFdoCleanupDP.c)
 *     DpiRequestIoPowerState @ 0x1C01E2390 (DpiRequestIoPowerState.c)
 *     DxgkFreeUnicodeString @ 0x1C020EA5C (DxgkFreeUnicodeString.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C02BE328 (DxgkReleaseAdapterFdoReference.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C0396550 (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  void *v4; // rcx
  DXGADAPTER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(_QWORD); // rax
  __int64 v14; // rax
  void *v15; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 1368) )
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741823LL);
  ExDeleteResourceLite((PERESOURCE)(v1 + 3808));
  ExDeleteResourceLite((PERESOURCE)(v1 + 3320));
  if ( *(_QWORD *)(v1 + 3944) )
    DpiRequestIoPowerState(a1, 7, v3, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4768));
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4784));
  DxgkFreeUnicodeString(v1 + 4864);
  v4 = *(void **)(v1 + 2728);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 2728) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v1);
  DpiFdoCleanupMipiDsi(v1);
  DpiFdoCleanupDP((_QWORD *)v1);
  v5 = *(DXGADAPTER **)(v1 + 3912);
  if ( v5 )
  {
    DxgkReleaseAdapterFdoReference(v5);
    *(_QWORD *)(v1 + 3912) = 0LL;
  }
  v6 = *(void **)(v1 + 3312);
  *(_DWORD *)(v1 + 3296) = 0;
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v1 + 3312) = 0LL;
  }
  v7 = *(void **)(v1 + 3304);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 3304) = 0LL;
  }
  v8 = *(void **)(v1 + 4832);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 4832) = 0LL;
  }
  v9 = *(void **)(v1 + 4840);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 4840) = 0LL;
  }
  v10 = *(void **)(v1 + 2752);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  v11 = *(void **)(v1 + 2768);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v1 + 2768) = 0LL;
  }
  v12 = *(_QWORD *)(v1 + 4880);
  if ( v12 )
  {
    v13 = *(void (__fastcall **)(_QWORD))(v12 + 32);
    if ( v13 )
    {
      v13(*(_QWORD *)(v12 + 16));
      v14 = *(_QWORD *)(v1 + 4880);
      *(_OWORD *)(v14 + 8) = 0LL;
      *(_OWORD *)(v14 + 24) = 0LL;
      *(_OWORD *)(v14 + 40) = 0LL;
      *(_QWORD *)(v14 + 56) = 0LL;
    }
    v15 = *(void **)(v1 + 4880);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)(v1 + 4880) = 0LL;
    }
  }
}
