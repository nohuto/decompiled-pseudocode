/*
 * XREFs of ?SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z @ 0x18015BE24
 * Callers:
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18015D328 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::SetLinkFlags(struct IShellLinkW *a1)
{
  struct IShellLinkWVtbl *lpVtbl; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h] BYREF

  lpVtbl = a1->lpVtbl;
  v5 = 0;
  if ( ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_45e2b4ae_b1c3_11d0_b92f_00a0c90312e1,
         &v4) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 48LL))(v4, &v5) >= 0 )
    {
      v2 = v5;
      LODWORD(v2) = v5 | 0x800000;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, v2);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v5;
}
