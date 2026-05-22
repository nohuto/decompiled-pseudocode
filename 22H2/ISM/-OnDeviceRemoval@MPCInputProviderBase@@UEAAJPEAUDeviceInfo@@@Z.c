/*
 * XREFs of ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180084740
 * Callers:
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007E4D0 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18018DC60 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180192920 (-OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180195FF0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B31C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800785C0 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z @ 0x1800843FC (-MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::OnDeviceRemoval(MPCInputProviderBase *this, struct DeviceInfo *a2)
{
  struct IMPCInputProviderBase *v2; // rdi
  __int64 v4; // rcx
  const char *v5; // r9
  MPCGestureHandlerManager *Instance; // rbx
  _QWORD *v7; // rax
  MPCHolographicInputManager *v8; // rax
  __int64 v9; // rcx
  int *v10; // rbx
  __int64 v11; // rcx
  ISMTracing *v12; // rcx
  struct MPCHolographicInputManager *v13; // rax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (MPCInputProviderBase *)((char *)this + 24);
  if ( *(_DWORD *)a2 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 88LL))((char *)this + 24) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      264LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      v5);
    JUMPOUT(0x180084833LL);
  }
  Instance = MPCGestureHandlerManager::GetInstance(v4);
  v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v17,
         (__int64)v2);
  MPCGestureHandlerManager::DetachProvider(Instance, v7);
  v8 = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RemoveInputProvider(v8, v2);
  if ( (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v2 + 112LL))(v2) == 8 )
  {
    v10 = (int *)*((_QWORD *)this + 6);
    if ( ISMTracing::IsEnabled(v9) )
    {
      wil::details::static_lazy<ISMTracing>::get(v11, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCEyeGazeProcessor_DeviceDetached_(v12, *v10);
    }
    if ( *((struct IMPCInputProviderBase **)MPCHolographicInputManager::GetInstance() + 294) == v2 )
    {
      v13 = MPCHolographicInputManager::GetInstance();
      v14 = *((_QWORD *)v13 + 294);
      if ( v14 )
      {
        *((_QWORD *)v13 + 294) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  return 0LL;
}
