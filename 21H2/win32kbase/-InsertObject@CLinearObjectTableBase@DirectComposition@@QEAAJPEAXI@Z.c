/*
 * XREFs of ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C00150D4
 * Callers:
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0015178 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C005837C (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0016048 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CLinearObjectTableBase::InsertObject(
        DirectComposition::CLinearObjectTableBase *this,
        void *a2,
        unsigned int a3)
{
  int v3; // ebx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  size_t v8; // r8
  void *Src; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v6 = *((_QWORD *)this + 3);
  v7 = a3 - 1;
  if ( a3 <= v6 )
  {
    if ( *(_QWORD *)(v7 * *((_QWORD *)this + 4) + *(_QWORD *)this) )
      return (unsigned int)-1073741790;
    goto LABEL_4;
  }
  v3 = DirectComposition::CDCompDynamicArrayBase::Grow(this, a3 - v6, 0x746C4344u);
  if ( v3 >= 0 )
  {
LABEL_4:
    v8 = *((_QWORD *)this + 4);
    Src = a2;
    memmove((void *)(*(_QWORD *)this + v8 * v7), &Src, v8);
    ++*((_QWORD *)this + 5);
  }
  return (unsigned int)v3;
}
