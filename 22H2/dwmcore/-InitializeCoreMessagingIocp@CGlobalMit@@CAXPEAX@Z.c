/*
 * XREFs of ?InitializeCoreMessagingIocp@CGlobalMit@@CAXPEAX@Z @ 0x1800ADB64
 * Callers:
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x1800AD970 (-Run@CGlobalMit@@MEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlobalMit::InitializeCoreMessagingIocp(void *a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)CMit::s_pMessageSession + 40LL))(
    CMit::s_pMessageSession,
    &v2);
  (*(void (__fastcall **)(__int64, void *, __int64 (__fastcall *)(void *, void *, void *), _QWORD))(*(_QWORD *)v2 + 64LL))(
    v2,
    a1,
    CGlobalMit::CompletionHandler,
    0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
