/*
 * XREFs of ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01F6448
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     VirtualizeFullKeyboardStates @ 0x1C01E8870 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     LockProcessByClientId @ 0x1C009DDA8 (LockProcessByClientId.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F44EC (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates(IVRootDeliver::Keyboard *this)
{
  __int64 v1; // rbx
  const struct CONTAINER_ID *v2; // rdx
  __int64 ProcessWin32Process; // rbx
  int v4; // eax
  int v5; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v1 = (int)this;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_KeyboardInputVirtualization__private_reporting,
    18837801LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  if ( isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)gpKeyboardSensor + 318)) )
  {
    Object = 0LL;
    if ( (int)LockProcessByClientId(v1, &Object) >= 0
      && (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), ProcessWin32Process) )
    {
      v4 = *(_DWORD *)(ProcessWin32Process + 1088);
    }
    else
    {
      v4 = 0;
    }
    v5 = v4;
    if ( v4 )
      IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v5, v2);
  }
}
