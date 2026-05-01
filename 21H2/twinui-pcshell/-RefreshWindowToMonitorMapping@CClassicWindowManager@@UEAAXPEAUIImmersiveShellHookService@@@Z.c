/*
 * XREFs of ?RefreshWindowToMonitorMapping@CClassicWindowManager@@UEAAXPEAUIImmersiveShellHookService@@@Z @ 0x1801D3630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindowManager::RefreshWindowToMonitorMapping(
        CClassicWindowManager *this,
        struct IImmersiveShellHookService *a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 i; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  void (__fastcall *v9)(struct IImmersiveShellHookService *, __int64, __int64); // rbx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 16);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v7 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6) != 0 ? 4 : 0;
    v8 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v9 = *(void (__fastcall **)(struct IImmersiveShellHookService *, __int64, __int64))(*(_QWORD *)a2 + 40LL);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    v9(a2, v7 + 20, v10);
  }
}
