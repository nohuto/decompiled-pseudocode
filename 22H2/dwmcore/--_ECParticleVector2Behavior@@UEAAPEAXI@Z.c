/*
 * XREFs of ??_ECParticleVector2Behavior@@UEAAPEAXI@Z @ 0x18016D4A0
 * Callers:
 *     ??_ECParticleVector2Behavior@@WGI@EAAPEAXI@Z @ 0x1800F41D0 (--_ECParticleVector2Behavior@@WGI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A132C (--1CResource@@MEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CParticleVector2Behavior *__fastcall CParticleVector2Behavior::`vector deleting destructor'(
        CParticleVector2Behavior *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 20 * ((*((_QWORD *)this + 16) - (_QWORD)v4) / 20LL));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 24 * ((*((_QWORD *)this + 12) - (_QWORD)v5) / 24LL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x88);
    else
      operator delete(this);
  }
  return this;
}
