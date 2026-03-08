/*
 * XREFs of ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C00469D4
 * Callers:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_DqD @ 0x1C0047320 (WPP_IFR_SF_DqD.c)
 *     WPP_IFR_SF_qqDD @ 0x1C004740C (WPP_IFR_SF_qqDD.c)
 */

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
