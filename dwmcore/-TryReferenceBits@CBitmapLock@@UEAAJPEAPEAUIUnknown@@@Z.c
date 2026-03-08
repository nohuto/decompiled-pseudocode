/*
 * XREFs of ?TryReferenceBits@CBitmapLock@@UEAAJPEAPEAUIUnknown@@@Z @ 0x18027ECA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapLock::TryReferenceBits(CBitmapLock *this, struct IUnknown **a2)
{
  __int64 v3; // rcx
  struct IUnknown *v5; // rax
  char *v6; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = (struct IUnknown *)*((_QWORD *)this + 10);
LABEL_5:
    *a2 = v5;
    return 0LL;
  }
  if ( *((_BYTE *)this + 73) )
  {
    v6 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
    v5 = (struct IUnknown *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8);
    goto LABEL_5;
  }
  return 0LL;
}
