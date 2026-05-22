/*
 * XREFs of ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18018DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BDC0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 */

void __fastcall MPCSixDofProcessor::OnGazeUpdate(__int64 this, struct InputInfo *a2)
{
  struct MPCGestureHandlerManager *Instance; // rdi
  _QWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  Instance = MPCGestureHandlerManager::GetInstance(this);
  v4 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v5,
         this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)Instance, v4);
}
