/*
 * XREFs of imp_WdfIoResourceListUpdateDescriptor @ 0x1C0049600
 * Callers:
 *     <none>
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0006030 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfIoResourceListUpdateDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v10; // r8
  FxNonPagedObject *v11; // r9
  _LIST_ENTRY *v12; // rbx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+70h] [rbp+18h] BYREF

  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !Descriptor )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  FxNonPagedObject::Lock(pList, &irql, v7);
  Entry = FxCollectionInternal::FindEntry(&pList->FxCollectionInternal, Index);
  if ( Entry )
    v12 = *Entry;
  else
    v12 = 0LL;
  FxNonPagedObject::Unlock(v11, irql, v10);
  if ( v12 )
  {
    *(_LIST_ENTRY *)((char *)v12 + 104) = *(_LIST_ENTRY *)&Descriptor->Option;
    *(_LIST_ENTRY *)((char *)v12 + 120) = *(_LIST_ENTRY *)&Descriptor->u.BusNumber.MaxBusNumber;
    pList->m_Changed = 1;
    pList->m_OwningList->m_Changed = 1;
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0xDu, WPP_FxResourceAPI_cpp_Traceguids, ResourceList, Index, pList->m_Count);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
