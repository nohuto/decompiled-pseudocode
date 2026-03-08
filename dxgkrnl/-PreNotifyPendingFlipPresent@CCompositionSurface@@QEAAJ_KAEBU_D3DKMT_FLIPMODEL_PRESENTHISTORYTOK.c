/*
 * XREFs of ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C007C330
 * Callers:
 *     NtNotifyPresentToCompositionSurface @ 0x1C007A170 (NtNotifyPresentToCompositionSurface.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000DB08 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::PreNotifyPendingFlipPresent(
        CCompositionSurface *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v4; // edi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v6; // rdx
  struct CCompositionBuffer *v7; // rbx

  v4 = 0;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v7 = ActiveBuffer;
  if ( ActiveBuffer
    && *((_QWORD *)ActiveBuffer + 2) == v6
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    (*(void (__fastcall **)(struct CCompositionBuffer *, const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *))(*(_QWORD *)v7 + 64LL))(
      v7,
      a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
