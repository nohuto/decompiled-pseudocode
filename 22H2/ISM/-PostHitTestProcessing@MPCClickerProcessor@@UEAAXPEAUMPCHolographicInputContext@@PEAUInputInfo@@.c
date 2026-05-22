/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180198AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084A7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 */

void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  char IsPrimary; // al
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  __int64 *Instance; // rbx
  _QWORD *v11; // rax
  const char *v12; // r9
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  IsPrimary = MPCInputProviderBase::IsPrimary(this);
  v7 = 0;
  if ( IsPrimary )
  {
    *(_DWORD *)(this + 4612) = *((_DWORD *)a3 + 179);
    if ( *((_BYTE *)a3 + 152) )
    {
      v8 = *((_DWORD *)a3 + 17);
      if ( v8 == 2 )
      {
        v7 = 1;
      }
      else if ( (unsigned int)(v8 - 4) <= 1 )
      {
        v7 = 2;
      }
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v6, (__int64)a3, v7);
      Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(v9);
      v11 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v13,
              this & -(__int64)(this != 24));
      MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v11, v12);
    }
  }
}
