/*
 * XREFs of ?NotifyTokenInFrame@CCompositionBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C007CD80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::NotifyTokenInFrame(CCompositionBuffer *this, const struct CToken *a2, bool *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  *a3 = 0;
  v3 = -1073741823;
  v4 = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( v4 != 1 && v4 != 3 && v4 != 6 )
    return (unsigned int)-1073741811;
  return v3;
}
