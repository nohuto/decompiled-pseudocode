void __fastcall __noreturn HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure(__int64 a1)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
  KeBugCheckEx(0x144u, 2uLL, v3, ((*(_DWORD *)(a1 + 1632) & 2) != 0) + 1LL, 0LL);
}
