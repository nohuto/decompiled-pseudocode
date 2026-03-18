/*
 * XREFs of ??_GCParticleBaseBehavior@@UEAAPEAXI@Z @ 0x1801C3380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A260 (--1CResource@@MEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CParticleBaseBehavior *__fastcall CParticleBaseBehavior::`scalar deleting destructor'(
        CParticleBaseBehavior *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 8 * ((__int64)(*((_QWORD *)this + 13) - (_QWORD)v4) >> 3));
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
