void __fastcall FxVerifierLock::DumpDetails(FxVerifierLock *Lock, _KTHREAD *curThread, FxVerifierLock *PerThreadList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxVerifierLock *v4; // rbx
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  m_Globals = Lock->m_Globals;
  v4 = PerThreadList;
  WPP_IFR_SF_qqDD(
    Lock->m_Globals,
    2u,
    (unsigned int)PerThreadList,
    0x1Au,
    WPP_FxVerifierLock_cpp_Traceguids,
    curThread,
    Lock->m_ParentObject,
    Lock->m_ParentObject->m_Type,
    Lock->m_Order);
  WPP_IFR_SF_DqD(
    m_Globals,
    v5,
    (unsigned int)v4->m_ParentObject,
    v6,
    traceGuid,
    v4->m_Order,
    v4->m_ParentObject,
    v4->m_ParentObject->m_Type);
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x1Cu, WPP_FxVerifierLock_cpp_Traceguids);
  do
  {
    WPP_IFR_SF_qDd(
      m_Globals,
      v4->m_ParentObject->m_Type,
      0x12u,
      0x1Du,
      WPP_FxVerifierLock_cpp_Traceguids,
      v4->m_ParentObject,
      v4->m_ParentObject->m_Type,
      v4->m_Order);
    v4 = v4->m_OwnedLink;
  }
  while ( v4 );
  FxVerifierDbgBreakPoint(m_Globals);
}
