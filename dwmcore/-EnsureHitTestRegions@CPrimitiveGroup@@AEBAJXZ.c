/*
 * XREFs of ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180017050
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180016F64 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18001707C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureHitTestRegions(CPrimitiveGroup *this)
{
  unsigned int v1; // ebx
  int HitTestRegions; // eax
  unsigned int v4; // ecx

  v1 = 0;
  if ( !*((_BYTE *)this + 104) )
  {
    HitTestRegions = CPrimitiveGroup::CreateHitTestRegions(this);
    v1 = HitTestRegions;
    if ( HitTestRegions < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, HitTestRegions, 0x2EAu, 0LL);
  }
  return v1;
}
