/*
 * XREFs of RootHub_ReleaseHardware @ 0x1C007A350
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0079480 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_ReleaseHardware(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rcx
  unsigned int i; // esi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v4 = *(char **)(a1 + 48);
  if ( v4 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v6 = 120LL * i;
      v7 = *(_QWORD *)&v4[v6 + 40];
      if ( v7 )
      {
        LOBYTE(a3) = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          v7,
          a3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + v6 + 40));
      }
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + v6 + 72);
      if ( v8 )
      {
        LOBYTE(a3) = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          v8,
          a3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + v6 + 72));
      }
      v4 = *(char **)(a1 + 48);
      v9 = *(_QWORD *)&v4[v6 + 80];
      if ( v9 )
      {
        LOBYTE(a3) = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          v9,
          a3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + v6 + 80));
        v4 = *(char **)(a1 + 48);
      }
    }
    ExFreePoolWithTag(v4, 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
