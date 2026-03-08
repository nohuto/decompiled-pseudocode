/*
 * XREFs of imp_WdfIoResourceListRemoveByDescriptor @ 0x1C00494B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C004F208 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 */

void __fastcall imp_WdfIoResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v7; // r8
  FxIoResList *v8; // rcx
  FxObject *m_Object; // rdi
  FxCollectionInternal *v10; // rsi
  FxCollectionEntry *p_Blink; // rbx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int8 irql; // [rsp+50h] [rbp+20h] BYREF
  FxIoResList *pList; // [rsp+60h] [rbp+30h] BYREF

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
  if ( (pList->m_AccessFlags & 2) != 0 )
  {
    FxNonPagedObject::Lock(pList, &irql, v5);
    v8 = pList;
    m_Object = 0LL;
    v10 = &pList->FxCollectionInternal;
    p_Blink = (FxCollectionEntry *)&pList->m_ListHead.Flink[-1].Blink;
    if ( p_Blink != (FxCollectionEntry *)&pList->FxCollectionInternal )
    {
      while ( 1 )
      {
        m_Object = p_Blink->m_Object;
        if ( RtlCompareMemory(&p_Blink->m_Object[1], Descriptor, 0x20uLL) == 32 )
          break;
        m_Object = 0LL;
        p_Blink = (FxCollectionEntry *)&p_Blink->m_ListEntry.Flink[-1].Blink;
        if ( p_Blink == (FxCollectionEntry *)v10 )
          goto LABEL_9;
      }
      pList->m_Changed = 1;
      pList->m_OwningList->m_Changed = 1;
      FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
LABEL_9:
      v8 = pList;
    }
    FxNonPagedObject::Unlock(v8, irql, v7);
    if ( m_Object )
      m_Object->DeleteObject(m_Object);
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xFu, WPP_FxResourceAPI_cpp_Traceguids, ResourceList);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
