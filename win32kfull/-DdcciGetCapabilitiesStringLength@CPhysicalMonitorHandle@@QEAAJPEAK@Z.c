/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C026BF38
 * Callers:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C026BEB4 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C026BE08 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x1C026C948 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(
        CPhysicalMonitorHandle *this,
        unsigned int *a2)
{
  int CapabilitiesStringInternal; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(CPhysicalMonitorHandle *))(*(_QWORD *)this + 16LL))(this) )
  {
    return (unsigned int)-1071774323;
  }
  else
  {
    CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(this);
    if ( CapabilitiesStringInternal >= 0 )
    {
      OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v6, (CPhysicalMonitorHandle *)((char *)this + 72));
      if ( CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(this) )
        *a2 = *((_DWORD *)this + 22);
      else
        CapabilitiesStringInternal = -1071774323;
      OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v6);
    }
  }
  return (unsigned int)CapabilitiesStringInternal;
}
