/*
 * XREFs of ?MulAccumulateD3DDirtyRect@@YAHPEAU_SURFOBJ@@PEAUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x1C014E370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulAccumulateD3DDirtyRect(struct _SURFOBJ *a1, struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(__int64, struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *, _QWORD); // rax

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *((unsigned int *)a1->dhsurf + 4));
  v4 = *(unsigned int (__fastcall **)(__int64, struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *, _QWORD))(*(_QWORD *)(v3 + 24)
                                                                                                  + 3448LL);
  if ( v4 )
    return v4(v3, a2, 0LL);
  return v2;
}
