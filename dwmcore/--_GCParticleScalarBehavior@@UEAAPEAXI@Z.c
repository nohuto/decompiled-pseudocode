/*
 * XREFs of ??_GCParticleScalarBehavior@@UEAAPEAXI@Z @ 0x1801C0380
 * Callers:
 *     ??_ECParticleScalarBehavior@@WHA@EAAPEAXI@Z @ 0x180117B50 (--_ECParticleScalarBehavior@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A0B0 (--1CResource@@MEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CParticleScalarBehavior *__fastcall CParticleScalarBehavior::`scalar deleting destructor'(
        CParticleScalarBehavior *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 17) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 8 * ((__int64)(*((_QWORD *)this + 13) - (_QWORD)v5) >> 3));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
