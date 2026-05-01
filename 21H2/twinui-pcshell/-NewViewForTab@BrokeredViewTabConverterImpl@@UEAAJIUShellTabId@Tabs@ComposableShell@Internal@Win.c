/*
 * XREFs of ?NewViewForTab@BrokeredViewTabConverterImpl@@UEAAJIUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802D2730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::NewViewForTab(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(__int64 **)(a1 + 64);
  v4 = *v3;
  v6 = *a3;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *))(v4 + 80))(v3, a2, &v6);
}
