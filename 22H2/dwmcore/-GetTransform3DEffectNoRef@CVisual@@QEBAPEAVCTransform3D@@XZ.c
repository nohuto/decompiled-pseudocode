/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800539F8
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B6F4 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800C3B8C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E8118 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800C3C54 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  __int64 v1; // rbx
  struct CEffect *EffectInternal; // rdi

  v1 = 0LL;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           187LL) )
    {
      return EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                EffectInternal,
                58LL) )
    {
      return (struct CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
  }
  return (struct CTransform3D *)v1;
}
