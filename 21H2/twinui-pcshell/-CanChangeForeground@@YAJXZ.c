/*
 * XREFs of ?CanChangeForeground@@YAJXZ @ 0x18005AFDC
 * Callers:
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x18005AF00 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1800822E0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1801B7DAC (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801C4784 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z @ 0x1801F6630 (-s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C0284 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 CanChangeForeground(void)
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)CanBrokerForceForeground(&v1) )
    return v1 == 0 ? 0x8007139F : 0;
  result = ResultFromKnownLastError();
  if ( (int)result >= 0 )
    return v1 == 0 ? 0x8007139F : 0;
  return result;
}
