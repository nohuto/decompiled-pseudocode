/*
 * XREFs of ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0223064
 * Callers:
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C023D57C (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C00341DC (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00355A0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00376B4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0038E6C (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenComponentRemoved(
        PriorityBoostCUI *this,
        struct tagWND *a2,
        struct tagWND *a3)
{
  __int64 v5; // rcx
  struct tagWND *TopLevelHost; // rax
  struct tagWND *v7; // rbx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v8, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
  v5 = *((_QWORD *)a2 + 2);
  if ( v5 == gptiForeground )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(this);
    v7 = TopLevelHost;
    if ( TopLevelHost )
      anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)TopLevelHost + 2), 1);
    CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(v7);
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 820LL) & 0x60000) != 0 )
  {
    anonymous_namespace_::RequestPriorityUpdate(v5, 1);
  }
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
