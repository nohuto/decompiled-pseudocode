int __fastcall FxPkgPdo::Initialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // dl
  unsigned __int8 *v7; // r8
  unsigned __int64 _a2; // rbx
  FxString *DeviceID; // rax
  FxString *InstanceID; // rax
  FxString *ContainerID; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v13; // rax
  FX_POOL **v14; // rax
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // r9
  FxString *v18; // rdx
  size_t Length; // rbx
  FxString *v20; // rdx
  size_t v21; // rbx
  FxString *v22; // rdx
  size_t v23; // rbx
  unsigned __int8 Static; // al
  int v25; // r8d
  FxChildList *m_DeviceList; // rcx
  FxDeviceDescriptionEntry *DescriptionEntry; // rax
  __m128i v28; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    v5 = FxCalculateTotalStringSize(&DeviceInit->Pdo.HardwareIDs, 0, 0LL);
    _a2 = FxCalculateTotalStringSize(&DeviceInit->Pdo.CompatibleIDs, v6, v7) + v5;
    DeviceID = DeviceInit->Pdo.DeviceID;
    if ( DeviceID )
      _a2 += (unsigned __int16)(DeviceID->m_UnicodeString.Length + 2);
    InstanceID = DeviceInit->Pdo.InstanceID;
    if ( InstanceID )
      _a2 += (unsigned __int16)(InstanceID->m_UnicodeString.Length + 2);
    ContainerID = DeviceInit->Pdo.ContainerID;
    if ( ContainerID )
      _a2 += (unsigned __int16)(ContainerID->m_UnicodeString.Length + 2);
    m_Globals = this->m_Globals;
    v13 = retaddr;
    v28.m128i_i64[0] = 0LL;
    v28.m128i_i64[1] = 256LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v13 = 0LL;
    v14 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v28, _a2, m_Globals->Tag, v13);
    this->m_IDsAllocation = (wchar_t *)v14;
    if ( v14 )
    {
      this->m_HardwareIDs = (wchar_t *)v14;
      v15 = FxCopyMultiSz((wchar_t *)v14, &DeviceInit->Pdo.HardwareIDs);
      this->m_CompatibleIDs = v15;
      v16 = FxCopyMultiSz(v15, &DeviceInit->Pdo.CompatibleIDs);
      v17 = v16;
      if ( DeviceInit->Pdo.DeviceID )
      {
        this->m_DeviceID = v16;
        v18 = DeviceInit->Pdo.DeviceID;
        Length = v18->m_UnicodeString.Length;
        memmove(v16, v18->m_UnicodeString.Buffer, Length);
        this->m_DeviceID[(unsigned __int64)(unsigned int)Length >> 1] = 0;
        v17 = (wchar_t *)((char *)this->m_DeviceID + Length + 2);
      }
      if ( DeviceInit->Pdo.InstanceID )
      {
        this->m_InstanceID = v17;
        v20 = DeviceInit->Pdo.InstanceID;
        v21 = v20->m_UnicodeString.Length;
        memmove(v17, v20->m_UnicodeString.Buffer, v21);
        this->m_InstanceID[(unsigned __int64)(unsigned int)v21 >> 1] = 0;
        v17 = (wchar_t *)((char *)this->m_InstanceID + v21 + 2);
      }
      if ( DeviceInit->Pdo.ContainerID )
      {
        this->m_ContainerID = v17;
        v22 = DeviceInit->Pdo.ContainerID;
        v23 = v22->m_UnicodeString.Length;
        memmove(v17, v22->m_UnicodeString.Buffer, v23);
        this->m_ContainerID[v23 >> 1] = 0;
      }
      Static = DeviceInit->Pdo.Static;
      this->m_Static = Static;
      if ( Static )
      {
        v25 = 332;
        m_DeviceList = *(FxChildList **)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 1696LL);
      }
      else
      {
        DescriptionEntry = DeviceInit->Pdo.DescriptionEntry;
        v25 = 338;
        this->m_Description = DescriptionEntry;
        m_DeviceList = DescriptionEntry->m_DeviceList;
      }
      this->m_OwningChildList = m_DeviceList;
      FxObject::AddRef(m_DeviceList, this, v25, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
      return 0;
    }
    else
    {
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
        DeviceInit,
        _a2,
        -1073741670);
      return -1073741670;
    }
  }
  return result;
}
