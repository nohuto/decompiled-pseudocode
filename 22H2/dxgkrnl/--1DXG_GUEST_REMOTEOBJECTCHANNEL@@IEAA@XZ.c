/*
 * XREFs of ??1DXG_GUEST_REMOTEOBJECTCHANNEL@@IEAA@XZ @ 0x1C036093C
 * Callers:
 *     ?Delete@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x1C0361910 (-Delete@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::~DXG_GUEST_REMOTEOBJECTCHANNEL(DXG_GUEST_REMOTEOBJECTCHANNEL *this)
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
}
