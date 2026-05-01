/*
 * XREFs of ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801C1260
 * Callers:
 *     <none>
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x1801B2798 (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1801B7DAC (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1801BDA04 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 */

void __fastcall CApplicationManager::SetForegroundWindowSafe(int **this, CApplicationManagerUtility *a2)
{
  DWORD WindowThreadProcessId; // ebx
  CApplicationManagerUtility *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( CIAMGlobals::IsCalledOnIAMThread((CIAMGlobals *)this)
    || (WindowThreadProcessId = GetWindowThreadProcessId((HWND)a2, 0LL), WindowThreadProcessId == GetCurrentThreadId()) )
  {
    CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___(this[70], (HWND)&v5);
  }
  else
  {
    lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator()(&v5);
  }
}
