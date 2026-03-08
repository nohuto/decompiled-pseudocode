/*
 * XREFs of ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C007C270
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C007BE28 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C007C144 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C000D9C0 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C007D31C (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::PairBind(CCompositionSurface *this, struct CFlipExBuffer *a2)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp-548h] BYREF
  _BYTE v8[1312]; // [rsp+40h] [rbp-538h] BYREF

  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v4 = CFlipExBuffer::EnableCascadedSignaling(a2, (struct CSM_BUFFER_INFO *)v8);
  if ( v4 < 0
    || (LOBYTE(v5) = 1,
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64 *))(**((_QWORD **)this + 13) + 24LL))(
               *((_QWORD *)this + 13),
               v8,
               v5,
               &v7),
        v4 < 0) )
  {
    CFlipExBuffer::DisableCascadedSignaling(a2);
  }
  else
  {
    *((_QWORD *)a2 + 87) = v7;
  }
  return (unsigned int)v4;
}
