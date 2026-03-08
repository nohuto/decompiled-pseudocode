/*
 * XREFs of ?MulEndDxInterop@@YAHPEAU_SURFOBJ@@HPEAHPEAX@Z @ 0x1C02B2040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulEndDxInterop(struct _SURFOBJ *a1, __int64 a2, int *a3, void *a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(__int64, __int64, int *, void *); // rax

  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *((unsigned int *)a1->dhsurf + 4));
  v6 = *(unsigned int (__fastcall **)(__int64, __int64, int *, void *))(*(_QWORD *)(v5 + 24) + 3464LL);
  if ( v6 )
    return v6(v5, a2, a3, a4);
  return v4;
}
