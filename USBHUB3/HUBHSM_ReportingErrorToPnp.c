__int64 __fastcall HUBHSM_ReportingErrorToPnp(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (_QWORD *)(v1 + 16);
  if ( *(_DWORD *)(v1 + 2596) )
    HUBMISC_ReportPnPFailureProblem(*v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 696))(WdfDriverGlobals, *v2, 2LL);
  return 2053LL;
}
