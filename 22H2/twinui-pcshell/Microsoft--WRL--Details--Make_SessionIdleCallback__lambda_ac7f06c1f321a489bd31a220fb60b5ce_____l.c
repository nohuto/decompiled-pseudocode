/*
 * XREFs of Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce_____lambda_ac7f06c1f321a489bd31a220fb60b5ce__&_ @ 0x1804E6094
 * Callers:
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x1804E64EC (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180087AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___::SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___ @ 0x1804E6124 (SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___--SessionIdleCallback__lambda_ac7.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce_____lambda_ac7f06c1f321a489bd31a220fb60b5ce____(
        __int64 *a1,
        __int64 *a2)
{
  void *v4; // rbx
  __int64 v5; // rcx
  volatile int *v6; // rdx
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    v9[0] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v9[1] = a2[1];
    v7 = SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___::SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___(
           v4,
           v9);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
        *a1,
        v6);
    *a1 = v7;
  }
  return a1;
}
