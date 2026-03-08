/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00741DC
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C003CC64 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00783A4 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C0017868 (RtlStringCchPrintfW.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     LibraryLogEvent @ 0x1C002C8E8 (LibraryLogEvent.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C003C064 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0040930 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008131C (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 */

__int64 __fastcall FxPkgPnp::PostCreateDeviceInitialize(FxPkgPnp *this, __int64 a2, void *a3)
{
  signed int v4; // edi
  unsigned __int16 v5; // r9
  FxCompanionLibrary *v6; // rcx
  FxDevice *m_Device; // rdx
  char IsCompanionRequiredForDevice; // al
  FX_POOL_TRACKER *v9; // rsi
  int CompanionTarget; // eax
  int v11; // ebp
  unsigned int _a1; // [rsp+28h] [rbp-110h]
  const wchar_t *companionName; // [rsp+30h] [rbp-108h] BYREF
  wchar_t insertString[104]; // [rsp+40h] [rbp-F8h] BYREF

  this->m_PnpMachine.m_PkgPnp = this;
  this->m_PnpMachine.m_EventWorker = (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxPkgPnp::_PnpProcessEventInner;
  this->m_PnpMachine.m_EventWorkerContext = 0LL;
  v4 = MxWorkItem::Allocate(
         &this->m_PnpMachine.m_WorkItem,
         (_DEVICE_OBJECT *)WPP_GLOBAL_WDF_Control.DeviceExtension,
         a3);
  if ( v4 < 0 )
  {
    v5 = 31;
LABEL_3:
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, v5, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v4);
    return (unsigned int)v4;
  }
  v4 = FxThreadedEventQueue::Init(
         &this->m_PowerMachine,
         this,
         (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxPkgPnp::_PowerProcessEventInner,
         0LL);
  if ( v4 < 0 )
  {
    v5 = 32;
    goto LABEL_3;
  }
  v4 = FxThreadedEventQueue::Init(&this->m_PowerPolicyMachine, this, FxPkgPnp::_PowerPolicyProcessEventInner, 0LL);
  if ( v4 < 0 )
  {
    v5 = 33;
    goto LABEL_3;
  }
  m_Device = this->m_Device;
  companionName = 0LL;
  IsCompanionRequiredForDevice = FxCompanionLibrary::IsCompanionRequiredForDevice(
                                   v6,
                                   m_Device,
                                   (FX_POOL ***)&companionName);
  v9 = (FX_POOL_TRACKER *)companionName;
  if ( IsCompanionRequiredForDevice )
  {
    CompanionTarget = FxDevice::AllocateCompanionTarget(this->m_Device, &this->m_CompanionTarget);
    v11 = CompanionTarget;
    if ( CompanionTarget < 0 )
    {
      _a1 = CompanionTarget;
      if ( RtlStringCchPrintfW(
             insertString,
             0x64uLL,
             (wchar_t *)L"Service:%S, Companion:%s, Status:0x%x",
             this->m_Globals->Public.DriverName,
             v9,
             _a1) >= 0 )
        LibraryLogEvent(
          (_DRIVER_OBJECT *)WPP_GLOBAL_WDF_Control.DeviceExtension,
          -2147024893,
          v11,
          insertString,
          0LL,
          0);
    }
    else
    {
      FxObject::AddRef(
        this->m_CompanionTarget,
        this,
        1381,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    }
    this->m_CompanionTargetStatus = v11;
  }
  if ( v9 )
    FxPoolFree(v9);
  return (unsigned int)v4;
}
