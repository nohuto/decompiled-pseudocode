/*
 * XREFs of ?GetAdapterLuidAndGpuSync@CCompositionBuffer@@UEBAJPEAU_LUID@@PEAPEAX@Z @ 0x1C007CA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::GetAdapterLuidAndGpuSync(CCompositionBuffer *this, struct _LUID *a2, void **a3)
{
  struct _LUID v5; // rcx
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(struct _LUID *)(*(__int64 (__fastcall **)(CCompositionBuffer *, char *))(*(_QWORD *)this + 96LL))(this, &v7);
  result = 3221225474LL;
  *a2 = v5;
  *a3 = 0LL;
  return result;
}
