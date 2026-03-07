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
