/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C00897B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x1C00896C4 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::NotifyTokenInFrame(
        CCompositionSwapchainBuffer *this,
        const struct CToken *a2,
        bool *a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  *a3 = 0;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2) == 4 && a2 )
  {
    return (unsigned int)CCompositionSwapchainBuffer::NotifyFlipContentTokenInFrame(this, a2, a3);
  }
  else if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2) == 5 )
  {
    *a3 = *((_BYTE *)this + 736);
    *((_BYTE *)this + 736) = 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
