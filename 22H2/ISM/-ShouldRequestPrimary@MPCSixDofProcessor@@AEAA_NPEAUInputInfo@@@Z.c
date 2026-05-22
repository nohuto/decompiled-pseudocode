/*
 * XREFs of ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18018F4D8
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E4A0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180076914 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x18018CA24 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z.c)
 */

char __fastcall MPCSixDofProcessor::ShouldRequestPrimary(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rdi
  const char *v5; // r9
  char v6; // bl

  Instance = MPCHolographicInputManager::GetInstance();
  v6 = 0;
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this + 24) )
    return 0;
  if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v5)
    || (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 322) + 48LL))(**((_QWORD **)Instance + 322)) == 0x2000
    || *((_DWORD *)a2 + 17) == 1
    && MPCHolographicInputManager::IsProviderPrimary(Instance, *((const struct IMPCInputProviderBase **)Instance + 293)) )
  {
    return 1;
  }
  return v6;
}
