/*
 * XREFs of ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C0028CB8
 * Callers:
 *     imp_WdfWmiInstanceFireEvent @ 0x1C0027D20 (imp_WdfWmiInstanceFireEvent.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x1C0028414 (-GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z.c)
 */

__int64 __fastcall FxWmiInstance::FireEvent(FxWmiInstance *this, void *EventBuffer, unsigned int EventBufferSize)
{
  unsigned int v5; // edi
  __int64 Pool2; // rax
  _DWORD *v7; // rbx
  FxWmiProvider *m_Provider; // rcx
  _GUID m_Guid; // xmm0
  FxWmiIrpHandler *m_Parent; // rcx
  ULONG v11; // eax
  FxWmiProvider *v12; // rcx
  unsigned __int8 v13; // r8
  NTSTATUS v14; // edi
  const void *_a1; // rax

  v5 = EventBuffer != 0LL ? EventBufferSize : 0;
  Pool2 = ExAllocatePool2(64LL, v5 + 64, this->m_Globals->Tag);
  v7 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    m_Provider = this->m_Provider;
    m_Guid = m_Provider->m_Guid;
    m_Parent = m_Provider->m_Parent;
    *(_GUID *)(Pool2 + 24) = m_Guid;
    v11 = IoWMIDeviceObjectToProviderId(m_Parent->m_DeviceBase->m_DeviceObject.m_DeviceObject);
    *v7 = v5 + 64;
    v7[1] = v11;
    v12 = this->m_Provider;
    *((_QWORD *)v7 + 2) = MEMORY[0xFFFFF78000000014];
    v7[11] = 138;
    v7[13] = FxWmiProvider::GetInstanceIndex(v12, (_LIST_ENTRY **)this, v13);
    v7[15] = v5;
    v7[14] = 64;
    if ( EventBuffer )
      memmove(v7 + 16, EventBuffer, v5);
    v14 = IoWMIWriteEvent(v7);
    if ( v14 < 0 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v14 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxWmiInstance_cpp_Traceguids, _a1, -1073741670);
  }
  return (unsigned int)v14;
}
