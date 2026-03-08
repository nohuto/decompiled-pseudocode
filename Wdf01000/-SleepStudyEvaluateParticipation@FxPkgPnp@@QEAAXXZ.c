/*
 * XREFs of ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C00793A8
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B820 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0079134 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0079228 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 *     ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1C008A398 (-MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P.c)
 */

void __fastcall FxPkgPnp::SleepStudyEvaluateParticipation(FxPkgPnp *this)
{
  bool v1; // zf
  _SLEEP_STUDY_INTERFACE *Pool2; // rax
  int (__fastcall *v4)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *); // r8
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v6; // r9
  const void *_a1; // rax
  int _a2; // r8d
  void *OutputBufferLength; // [rsp+20h] [rbp-19h]
  unsigned __int8 explicitlyEnabledForDevice; // [rsp+40h] [rbp+7h] BYREF
  _POWER_PLATFORM_INFORMATION platformInfo; // [rsp+41h] [rbp+8h] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp+Fh] BYREF
  _WNF_STATE_NAME wnfStateName; // [rsp+58h] [rbp+1Fh] BYREF
  wchar_t valueName_buffer[16]; // [rsp+60h] [rbp+27h] BYREF

  v1 = this->m_PowerPolicyMachine.m_Owner == 0LL;
  wnfStateName = WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED;
  valueName.Buffer = valueName_buffer;
  platformInfo.AoAc = 0;
  explicitlyEnabledForDevice = 0;
  wcscpy(valueName_buffer, L"SleepstudyState");
  *(_QWORD *)&valueName.Length = 2097182LL;
  if ( v1 )
    goto $Done_64;
  if ( unk_1C009FF61 == 1 )
    goto $Done_64;
  FxPkgPnp::ReadRegistryS0Idle(this, &valueName, (bool *)&explicitlyEnabledForDevice);
  if ( !explicitlyEnabledForDevice )
    goto $Done_64;
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, &platformInfo, 1u) < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v6 = 16;
    goto LABEL_12;
  }
  if ( platformInfo.AoAc )
  {
    Pool2 = (_SLEEP_STUDY_INTERFACE *)ExAllocatePool2(64LL, 32LL, 1397970260LL);
    if ( !Pool2 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v6 = 17;
LABEL_12:
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, v6, WPP_FxPkgPnpKM_cpp_Traceguids, ObjectHandleUnchecked);
      goto $Done_64;
    }
    this->m_SleepStudy = Pool2;
    if ( MxWnf::MxSubscribeWnfStateChange(&Pool2->WnfContext, &wnfStateName, v4, this, OutputBufferLength) >= 0 )
    {
      FxPkgPnp::SleepStudyEvaluateDripsConstraint(this, 1u);
      return;
    }
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x12u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
  }
$Done_64:
  this->m_SleepStudyTrackReferences = 0;
}
