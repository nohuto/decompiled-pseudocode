/*
 * XREFs of ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C000D9C0
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C000B430 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000BAE4 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C007BE28 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C007C270 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C007C5B0 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C007D31C (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x1C007CE18 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 */

void __fastcall CFlipExBuffer::DisableCascadedSignaling(CFlipExBuffer *this)
{
  char *v1; // rdi
  __int64 v3; // rcx

  *((_DWORD *)this + 159) = 0;
  v1 = (char *)this + 680;
  *((_QWORD *)this + 88) = 0LL;
  v3 = *((_QWORD *)this + 85);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v3 + 40LL))(
      v3,
      *((_QWORD *)this + 80),
      *((unsigned int *)this + 162),
      *((_QWORD *)this + 83),
      *((_DWORD *)this + 168),
      *((_DWORD *)this + 164));
    *((_QWORD *)this + 80) = 0LL;
    *((_DWORD *)this + 162) = 0;
    *((_QWORD *)this + 83) = 0LL;
    *((_DWORD *)this + 168) = 0;
    *((_DWORD *)this + 164) = 0;
    ReleaseInterface<IAdapter>(v1);
  }
}
