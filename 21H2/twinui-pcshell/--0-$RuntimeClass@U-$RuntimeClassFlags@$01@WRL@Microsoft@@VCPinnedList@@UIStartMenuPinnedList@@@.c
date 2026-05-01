/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCPinnedList@@UIStartMenuPinnedList@@@WRL@Microsoft@@QEAA@XZ @ 0x18014FE94
 * Callers:
 *     ??0CTaskbandPin@@QEAA@XZ @ 0x18014FF2C (--0CTaskbandPin@@QEAA@XZ.c)
 * Callees:
 *     ??0CPinnedList@@QEAA@XZ @ 0x1801529A8 (--0CPinnedList@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>(
        __int64 a1)
{
  CPinnedList::CPinnedList((CPinnedList *)a1);
  *(_DWORD *)(a1 + 124) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::Selector<CPinnedList,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CPinnedList>,IStartMenuPinnedList>>'};
  *(_QWORD *)(a1 + 8) = &CTaskbandPin::`vftable'{for `IContextMenu'};
  *(_QWORD *)(a1 + 16) = &CTaskbandPin::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IFlexibleTaskbarPinnedList,IPinnedList2,IPinnedList,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IPinnedList3,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `IPinnedList3'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *(_QWORD *)(a1 + 40) = &CTaskbandPin::`vftable'{for `IExplorerCommand'};
  *(_QWORD *)(a1 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *(_QWORD *)(a1 + 112) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CPinnedList,IStartMenuPinnedList>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStartMenuPinnedList>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CPinnedList>,IStartMenuPinnedList>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
