/*
 * XREFs of ?HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ @ 0x180467E80
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463C24 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabletModePositioner::HandleAutoRotationLock(TabletModePositioner *this)
{
  int v2; // eax
  char v3; // cl

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 64LL))(*((_QWORD *)this + 31));
  v3 = *((_BYTE *)this + 242);
  if ( v2 )
  {
    if ( !v3 )
      *((_BYTE *)this + 242) = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 40LL))(*((_QWORD *)this + 48)) >= 0;
  }
  else if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 48LL))(*((_QWORD *)this + 48));
    *((_BYTE *)this + 242) = 0;
  }
}
