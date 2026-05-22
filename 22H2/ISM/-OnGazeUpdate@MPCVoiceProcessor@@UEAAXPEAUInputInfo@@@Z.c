/*
 * XREFs of ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18018A120
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CBC8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084A7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 */

void __fastcall MPCVoiceProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  const char *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct MPCGestureHandlerManager *Instance; // rax
  unsigned __int64 v8; // rdx
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  const char *v11; // r9
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a2 + 152) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v4);
      __debugbreak();
    }
    *((_QWORD *)&v12 + 1) = 17LL;
    *(_QWORD *)&v12 = L"AllowDownleveling";
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            (__int64)MPCConstantManager::s_instance,
                            (__int64 *)(this & -(__int64)(this != 24)),
                            &v12) )
    {
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v5, (__int64)a2, 4);
      Instance = MPCGestureHandlerManager::GetInstance(v6);
      v8 = this & -(__int64)(this != 24);
      v9 = (__int64 *)Instance;
      v10 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v14,
              v8);
      MPCGestureHandlerManager::DownLevelTo2D(v9, (__int64)a2, v10, v11);
    }
  }
}
