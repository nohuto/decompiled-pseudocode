/*
 * XREFs of imp_WdfChildListBeginIteration @ 0x1C0020B90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C00239A8 (-BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfChildListBeginIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int8 v5; // dl
  FxChildList *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int Flags; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxChildList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v6 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x15u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v6 = pList;
  }
  if ( !Iterator )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( Iterator->Size != 40 )
  {
    WPP_IFR_SF_DDd(m_Globals, v5, 0xCu, 0x16u, WPP_FxChildListAPI_cpp_Traceguids, Iterator->Size, 40, -1073741820);
LABEL_7:
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  Flags = Iterator->Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 )
  {
    WPP_IFR_SF_DDd(m_Globals, v5, 0xCu, 0x17u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
    goto LABEL_7;
  }
  *(_OWORD *)Iterator->Reserved = 0LL;
  *(_OWORD *)&Iterator->Reserved[2] = 0LL;
  FxChildList::BeginIteration(v6, Iterator);
}
