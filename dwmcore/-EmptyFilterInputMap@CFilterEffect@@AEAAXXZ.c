/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180218E44
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1801BEC48 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180219C30 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEIN.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x180217F5C (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  InternalFilterInput *v4; // rcx

  v1 = *((int *)this + 38);
  if ( v1 > 0 )
  {
    for ( i = 0LL; i < v1; ++i )
    {
      CResource::UnRegisterNotifierInternal(
        this,
        *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * i) + 24LL));
      v4 = *(InternalFilterInput **)(*((_QWORD *)this + 18) + 8 * i);
      if ( v4 )
        InternalFilterInput::`scalar deleting destructor'(v4);
    }
  }
  CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll((__int64)this + 136);
}
