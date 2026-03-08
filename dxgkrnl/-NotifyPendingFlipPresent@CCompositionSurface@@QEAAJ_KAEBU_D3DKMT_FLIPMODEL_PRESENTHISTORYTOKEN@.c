/*
 * XREFs of ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x1C007BDA0
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079CE0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::NotifyPendingFlipPresent(
        CCompositionSurface *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        bool *a4,
        bool *a5)
{
  unsigned int v6; // ebx
  struct CCompositionBuffer *v8; // rdi
  struct CCompositionBuffer *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  v10 = 0LL;
  if ( (int)CCompositionSurface::FindBuffer(this, a2, &v10) >= 0
    && (v8 = v10, (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v10 + 8LL))(v10) == 2) )
  {
    (*(void (__fastcall **)(struct CCompositionBuffer *, const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *, bool *, bool *))(*(_QWORD *)v8 + 72LL))(
      v8,
      a3,
      a4,
      a5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
