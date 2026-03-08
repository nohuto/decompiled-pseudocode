/*
 * XREFs of ??1DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@IEAA@XZ @ 0x1C035BE60
 * Callers:
 *     ?Delete@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ @ 0x1C035CE50 (-Delete@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::~DXG_GUEST_COMPOSITIONOBJECTCHANNEL(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
