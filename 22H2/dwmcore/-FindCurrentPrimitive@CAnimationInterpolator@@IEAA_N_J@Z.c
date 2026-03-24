/*
 * XREFs of ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x18021FB5C
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18021FDA0 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18021FF1C (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 */

bool __fastcall CAnimationInterpolator::FindCurrentPrimitive(CAnimationInterpolator *this, __int64 a2)
{
  unsigned int v4; // edx
  unsigned int i; // edi

  v4 = *((_DWORD *)this + 2);
  if ( v4 != -1 && *((_QWORD *)CAnimationInterpolator::GetPrimitiveAtIndex(this, v4) + 1) > a2 )
    *((_DWORD *)this + 2) = -1;
  for ( i = *((_DWORD *)this + 2);
        ++i < (unsigned __int64)(***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
     && *((_QWORD *)CAnimationInterpolator::GetPrimitiveAtIndex(this, i) + 1) <= a2;
        *((_DWORD *)this + 2) = i )
  {
    ;
  }
  return *((_DWORD *)this + 2) != -1;
}
