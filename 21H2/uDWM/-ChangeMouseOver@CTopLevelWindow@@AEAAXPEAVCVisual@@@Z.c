/*
 * XREFs of ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x18002B0E4
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18002AE54 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002B06C (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::ChangeMouseOver(CTopLevelWindow *this, struct CVisual *a2)
{
  CBaseObject *v2; // rbx
  __int64 v4; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 92);
  if ( a2 != v2 )
  {
    *((_QWORD *)this + 92) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v2 )
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v2 + 120LL))(v2);
    v4 = *((_QWORD *)this + 92);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4);
    if ( v2 )
      CBaseObject::Release(v2);
  }
}
