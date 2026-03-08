/*
 * XREFs of ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x1C0005094
 * Callers:
 *     ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C0005050 (--_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000511C (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DXGK_GAMMA_RAMP::~DXGK_GAMMA_RAMP(DXGK_GAMMA_RAMP *this)
{
  void *v2; // rcx

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &DXGK_GAMMA_RAMP::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  ReferenceCounted::~ReferenceCounted(this);
}
