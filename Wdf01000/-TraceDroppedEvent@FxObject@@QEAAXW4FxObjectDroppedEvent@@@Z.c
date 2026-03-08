/*
 * XREFs of ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C0046564
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C00032C0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0003350 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003A80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0003E1C (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0005600 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0005698 (-AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 */

void __fastcall FxObject::TraceDroppedEvent(FxObject *this, FxObjectDroppedEvent Event)
{
  const void *_a2; // rax
  __int64 _a1; // r10
  unsigned int _a4; // edx

  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqdd(
      *(_FX_DRIVER_GLOBALS **)(_a1 + 16),
      4u,
      0x14u,
      0xBu,
      WPP_FxObject_hpp_Traceguids,
      (const void *)_a1,
      _a2,
      *(unsigned __int16 *)(_a1 + 26),
      _a4);
  }
}
