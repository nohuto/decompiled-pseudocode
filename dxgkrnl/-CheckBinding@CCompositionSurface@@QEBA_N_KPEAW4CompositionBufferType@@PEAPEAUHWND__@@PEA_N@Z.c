/*
 * XREFs of ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C007B900
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079CE0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C007A170 (NtNotifyPresentToCompositionSurface.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::CheckBinding(
        CCompositionSurface *this,
        __int64 a2,
        enum CompositionBufferType *a3,
        HWND *a4,
        bool *a5)
{
  bool *v5; // r14
  bool *v8; // rbx

  v5 = a5;
  *(_DWORD *)a3 = 0;
  *a4 = 0LL;
  a5 = 0LL;
  *v5 = 0;
  if ( (int)CCompositionSurface::FindBuffer(this, a2, (struct CCompositionBuffer **)&a5) < 0 )
    return 0;
  v8 = a5;
  *(_DWORD *)a3 = (*(__int64 (__fastcall **)(bool *))(*(_QWORD *)a5 + 8LL))(a5);
  *a4 = (HWND)(*(__int64 (__fastcall **)(bool *))(*(_QWORD *)v8 + 32LL))(v8);
  *v5 = v8[40];
  return 1;
}
