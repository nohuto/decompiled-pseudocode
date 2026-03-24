/*
 * XREFs of ??_GDXG_GUEST_REMOTEOBJECTCHANNEL@@IEAAPEAXI@Z @ 0x1C02B474C
 * Callers:
 *     ?Delete@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x1C02B5750 (-Delete@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

DXG_GUEST_REMOTEOBJECTCHANNEL *__fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::`scalar deleting destructor'(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  operator delete(this);
  return this;
}
