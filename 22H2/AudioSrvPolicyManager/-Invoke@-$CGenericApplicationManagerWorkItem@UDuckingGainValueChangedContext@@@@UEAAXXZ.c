/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ @ 0x180008F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::Invoke(__int64 a1)
{
  LPVOID *v2; // rbx

  (*(void (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  v2 = *(LPVOID **)(a1 + 16);
  if ( v2 )
  {
    CoTaskMemFree(*v2);
    *v2 = 0LL;
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
}
