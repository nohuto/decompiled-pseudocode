/*
 * XREFs of ?_DisposeThis@AUTO_TGO@@CAXPEAX@Z @ 0x1C0192110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AUTO_TGO::_DisposeThis(_DWORD *a1)
{
  void (__fastcall **v1)(_DWORD *, _QWORD); // rax

  v1 = *(void (__fastcall ***)(_DWORD *, _QWORD))a1;
  a1[2] = 0;
  (*v1)(a1, 0LL);
}
