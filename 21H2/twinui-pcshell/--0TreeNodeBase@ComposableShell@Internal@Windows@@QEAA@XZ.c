/*
 * XREFs of ??0TreeNodeBase@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x1802BC2A8
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800C8584 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1802C897C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIViewHostItem@Holographi_ea_1802C897C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *__fastcall Windows::Internal::ComposableShell::TreeNodeBase::TreeNodeBase(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *v3; // rax

  this->Ptr = &Windows::Internal::ComposableShell::TreeNodeBase::`vftable';
  this[2].Ptr = 0LL;
  LOBYTE(this[3].Ptr) = 0;
  this[4].Ptr = 0LL;
  v2 = this + 5;
  this[5].Ptr = 0LL;
  this[6].Ptr = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  v2->Ptr = v3;
  LODWORD(this[7].Ptr) = 1;
  this[8].Ptr = 0LL;
  InitializeSRWLock(this + 9);
  InitializeSRWLock(this + 10);
  return this;
}
