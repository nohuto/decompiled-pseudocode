/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::Run @ 0x1801C0310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::Run()
{
  char *v0; // rcx

  v0 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5;
  BYTE5(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) = 1;
  WakeByAddressAll(v0);
}
