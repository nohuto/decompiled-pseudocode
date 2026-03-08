/*
 * XREFs of ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00241C0
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0023720 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0023ED4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00243F4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C0024EA0 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C002525C (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0025424 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00255CC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C0025D80 (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C00261C4 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C00264EC (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C00265BC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C00266A4 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
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
