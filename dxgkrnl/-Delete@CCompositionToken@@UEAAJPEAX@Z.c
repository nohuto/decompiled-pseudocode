/*
 * XREFs of ?Delete@CCompositionToken@@UEAAJPEAX@Z @ 0x1C0014740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::Delete(CCompositionToken *this, void *a2)
{
  (*(void (__fastcall **)(char *, void *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, a2);
  return 0LL;
}
