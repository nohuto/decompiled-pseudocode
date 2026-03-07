__int64 __fastcall FxPkgIo::ConfigureDynamicDispatching(
        FxPkgIo *this,
        unsigned __int8 MajorFunction,
        FX_POOL *CxDeviceInfo,
        FX_POOL *EvtDeviceWdmIrpDispatch,
        FX_POOL *DriverContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int v8; // eax
  unsigned __int8 v9; // dl
  char v10; // cl
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int v13; // ebx
  char OldIrql; // cl
  FX_POOL *i; // rdi
  _LIST_ENTRY *Blink; // rax
  bool v17; // zf
  ULONG Tag; // ecx
  void *v19; // rax
  FxDriver *Flink; // rcx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v22; // dl
  unsigned int v23; // r8d
  unsigned __int16 v24; // r9
  char id; // r10
  FX_POOL **v26; // rax
  FX_POOL **v27; // rsi
  __int64 v28; // rcx
  FX_POOL *m_Lock; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+38h] [rbp-30h]
  __m128i v33; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  m_Globals = this->m_Globals;
  v8 = FxIrpDynamicDispatchInfo::Mj2Index(MajorFunction);
  v12 = v8;
  if ( v8 >= 4 )
  {
    v13 = -1073741811;
    WPP_IFR_SF_cd(m_Globals, v9, 0xDu, 0x15u, WPP_FxPkgIo_cpp_Traceguids, v10);
    return v13;
  }
  if ( CxDeviceInfo )
    OldIrql = CxDeviceInfo->PagedLock.m_Lock.OldIrql;
  else
    OldIrql = 0;
  for ( i = *(FX_POOL **)(v11 + 376); ; i = *(FX_POOL **)&i->NonPagedLock.m_DbgFlagIsInitialized )
  {
    if ( i == (FX_POOL *)(v11 + 376) )
    {
LABEL_13:
      v17 = m_Globals->FxPoolTrackingOn == 0;
      Tag = m_Globals->Tag;
      v33.m128i_i64[0] = 0LL;
      v33.m128i_i64[1] = 64LL;
      if ( v17 )
        v19 = 0LL;
      else
        v19 = retaddr;
      v26 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v33, 0x58uLL, Tag, v19);
      v27 = v26;
      if ( !v26 )
      {
        v13 = -1073741670;
        WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0x17u, WPP_FxPkgIo_cpp_Traceguids, 0xC000009A);
        return v13;
      }
      `vector constructor iterator'(
        (char *)v26 + 16,
        0x10uLL,
        4uLL,
        (void *(__fastcall *)(void *))FxIrpDynamicDispatchInfo::Info::Info);
      v27[1] = (FX_POOL *)v27;
      *v27 = (FX_POOL *)v27;
      memset(v27 + 2, 0, 0x40uLL);
      v27[10] = CxDeviceInfo;
      v28 = 2 * v12;
      v27[v28 + 3] = DriverContext;
      v27[v28 + 2] = EvtDeviceWdmIrpDispatch;
      m_Lock = (FX_POOL *)i->NonPagedLock.m_Lock;
      if ( *(FX_POOL **)&m_Lock->NonPagedLock.m_DbgFlagIsInitialized != i )
        __fastfail(3u);
      *v27 = i;
      v27[1] = m_Lock;
      *(_QWORD *)&m_Lock->NonPagedLock.m_DbgFlagIsInitialized = v27;
      i->NonPagedLock.m_Lock = (unsigned __int64)v27;
      return 0;
    }
    Blink = i->PagedLock.m_Lock.Event.Header.WaitListHead.Blink;
    if ( Blink )
      LOBYTE(Blink) = Blink[5].Blink;
    if ( OldIrql == (_BYTE)Blink )
      break;
    if ( OldIrql > (char)Blink )
      goto LABEL_13;
  }
  if ( !*((_QWORD *)&i->NonPagedHead.Flink + 2 * v12) )
  {
    *((_QWORD *)&i->NonPagedHead.Blink + 2 * v12) = DriverContext;
    *((_QWORD *)&i->NonPagedHead.Flink + 2 * v12) = EvtDeviceWdmIrpDispatch;
    return 0;
  }
  v13 = -1073741811;
  if ( CxDeviceInfo )
    Flink = (FxDriver *)CxDeviceInfo->NonPagedHead.Flink;
  else
    Flink = *(FxDriver **)(*(_QWORD *)(v11 + 96) + 136LL);
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Flink);
  WPP_IFR_SF_qcd(m_Globals, v22, v23, v24, _a1, ObjectHandleUnchecked, id, v32);
  return v13;
}
