/*
 * XREFs of ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00BA5EC
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0061350 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0098B84 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00B9A24 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C00BA67C (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2)
{
  __int64 v2; // rcx
  DirectComposition::CAnimationTimeList *v3; // rdx
  __int64 v4; // rax
  bool v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(
    this,
    *((struct DirectComposition::CAnimationTimeList **)this + 9),
    a2,
    (unsigned __int64 *)this + 14,
    &v5,
    (__int64 *)this + 26,
    (unsigned __int64 *)this + 27);
  v3 = *(DirectComposition::CAnimationTimeList **)(v2 + 72);
  *(_BYTE *)(v2 + 200) ^= (*(_BYTE *)(v2 + 200) ^ (4 * v5)) & 4;
  v4 = *(_QWORD *)(v2 + 80);
  if ( v3 == (DirectComposition::CAnimationTimeList *)v4 )
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_BYTE *)(v4 + 28) = 0;
    *(_DWORD *)(v2 + 32) &= 0xFFFF3FFF;
  }
  else
  {
    *(_QWORD *)(v2 + 72) = *((_QWORD *)v3 + 2);
    DirectComposition::CAnimationTimeList::Release(v3);
  }
}
