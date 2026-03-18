/*
 * XREFs of ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010A58
 * Callers:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C000E280 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F99C (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C000FD14 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003A8B4 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003AEC8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003BCD8 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C003BEB0 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C003BFBC (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C003C094 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C003C3C8 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003C498 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C003C580 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007BC58 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxChildList::DrainFreeListHead(FxChildList *this, _LIST_ENTRY *FreeListHead, unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v8; // rbp
  unsigned __int64 ObjectHandleUnchecked; // rax
  void (__fastcall *v10)(unsigned __int64); // r8
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(unsigned __int64, _LIST_ENTRY *); // r8

  while ( 1 )
  {
    Flink = FreeListHead->Flink;
    if ( FreeListHead->Flink == FreeListHead )
      break;
    if ( Flink->Blink != FreeListHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    FreeListHead->Flink = v6;
    v6->Blink = FreeListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    if ( this->m_StaticList && (LODWORD(Flink[1].Flink) == 1 || LODWORD(Flink[3].Blink) == 5) )
    {
      Blink = Flink[1].Blink->Blink;
      if ( LODWORD(Flink[3].Blink) == 5 )
        LODWORD(Flink[3].Blink) = 0;
      LODWORD(Flink[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, a3);
    }
    else
    {
      v8 = Flink[1].Blink;
      if ( this->m_EvtAddressDescriptionCleanup && Flink[2].Flink )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
        v10(ObjectHandleUnchecked);
      }
      if ( this->m_EvtIdentificationDescriptionCleanup && v8 )
      {
        v11 = FxObject::GetObjectHandleUnchecked(this);
        v12(v11, v8);
      }
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))Flink[4].Blink->Flink[1].Flink)(
        Flink[4].Blink,
        Flink,
        77LL,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
      FxPoolFree((FX_POOL_TRACKER *)Flink);
    }
  }
}
