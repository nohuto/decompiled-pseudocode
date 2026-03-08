/*
 * XREFs of ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1801E9638
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x180117FD0 (-CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@FA@EAAJXZ @ 0x180117FF0 (-CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@FA@EAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801E9CA4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801EA094 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801EA180 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::CheckOcclusionState(struct CD3DDevice **this)
{
  CCaptureRenderTarget *v2; // rbp
  unsigned int v3; // edi
  struct CD3DDevice *D3DDeviceNoRef; // rax
  __int64 v5; // rcx
  struct CD3DDevice *v6; // rsi
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CCaptureRenderTarget *)(this - 264);
  v8 = 0;
  v3 = 142213121;
  D3DDeviceNoRef = CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                     this - 30,
                     (const struct _LUID *)this - 29,
                     *(this - 18));
  v5 = (__int64)*(this - 18);
  v6 = D3DDeviceNoRef;
  if ( v5
    && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, &v8) >= 0
    && v8
    && v6
    && *(this - 252)
    && ((*(this - 11) - *(this - 12)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
    && *(this - 18)
    && *((_BYTE *)this - 216)
    && (int)CCaptureRenderTarget::EnsureResources(v2, v6) >= 0
    && (int)CCaptureRenderTarget::GetNextBufferIndexAvailable(v2) >= 0 )
  {
    return 0;
  }
  return v3;
}
