/*
 * XREFs of ??0CInputGlobals@@AEAA@XZ @ 0x1C0097BCC
 * Callers:
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x1C0097B48 (-Initialize@CInputGlobals@@SAJXZ.c)
 * Callees:
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x1C009D2B0 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ApiSetGetUndimSourceInputTypeMask @ 0x1C0244B6C (ApiSetGetUndimSourceInputTypeMask.c)
 */

CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 42) = 0;
  *((_WORD *)this + 48) = 0;
  *((_BYTE *)this + 98) = 0;
  *((_DWORD *)this + 25) = 30;
  if ( qword_1C02D7F30 && (int)qword_1C02D7F30() >= 0 )
    CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(this);
  if ( qword_1C02D7F40 && (int)qword_1C02D7F40() >= 0 )
    *((_DWORD *)this + 26) = ApiSetGetUndimSourceInputTypeMask();
  return this;
}
