/*
 * XREFs of ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C001F160
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqD @ 0x1C001E080 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qD @ 0x1C001F28C (WPP_IFR_SF_qD.c)
 */

void __fastcall FxDmaSystemTransaction::_SystemDmaCompletion(
        _DMA_ADAPTER *__formal,
        _DEVICE_OBJECT *a2,
        FxNonPagedObject *CompletionContext,
        unsigned int Status)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // r8
  char v8; // bp
  unsigned __int8 FxVerifierOn; // al
  const void *_a2; // rax
  unsigned __int8 v11; // dl
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int8 oldIrql; // [rsp+70h] [rbp+18h] BYREF

  m_Globals = CompletionContext->m_Globals;
  oldIrql = 0;
  FxNonPagedObject::Lock(CompletionContext, &oldIrql, (unsigned __int8)CompletionContext);
  if ( *(_QWORD *)&CompletionContext[2].m_SpinLock.m_DbgFlagIsInitialized )
  {
    HIDWORD(CompletionContext[2].m_SpinLock.m_Lock) = Status;
    v8 = 1;
    BYTE1(CompletionContext[2].m_SpinLock.m_Lock) = 1;
  }
  else
  {
    v8 = 0;
  }
  FxNonPagedObject::Unlock(CompletionContext, oldIrql, v7);
  FxVerifierOn = m_Globals->FxVerifierOn;
  if ( v8 == 1 )
  {
    if ( FxVerifierOn )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)FxObject::GetObjectHandleUnchecked(CompletionContext);
        WPP_IFR_SF_qD(m_Globals, v11, 0xFu, 0xCu, WPP_FxDmaTransactionSystem_cpp_Traceguids, _a2, Status);
      }
    }
  }
  else
  {
    if ( FxVerifierOn && m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(CompletionContext);
      WPP_IFR_SF_qqqD(
        m_Globals,
        v13,
        v14,
        0xDu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        CompletionContext[2].m_DisposeSingleEntry.Next,
        CompletionContext[2].m_DeviceBase,
        ObjectHandleUnchecked,
        Status);
    }
    CompletionContext->__vftable[2].QueryInterface(CompletionContext, (FxQueryInterfaceParams *)Status);
  }
}
