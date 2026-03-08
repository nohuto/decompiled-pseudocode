/*
 * XREFs of ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x18001DA80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x18001DC4C (--1-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CAnimationTrigger *__fastcall CAnimationTrigger::`vector deleting destructor'(CAnimationTrigger *this, char a2)
{
  _QWORD **v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v7; // rbx

  std::_Deallocate<16,0>(
    *((_QWORD *)this + 20),
    (*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v4 = (_QWORD **)*((_QWORD *)this + 18);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( v5 )
  {
    do
    {
      v7 = (_QWORD *)*v5;
      std::_Deallocate<16,0>(v5, 24LL);
      v5 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*((_QWORD *)this + 18), 24LL);
  CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::~CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC8uLL);
    else
      operator delete(this);
  }
  return this;
}
