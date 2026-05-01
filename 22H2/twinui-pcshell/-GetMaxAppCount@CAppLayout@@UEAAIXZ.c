/*
 * XREFs of ?GetMaxAppCount@CAppLayout@@UEAAIXZ @ 0x1804F19F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0CC0 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetMaxAppCount(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v3; // rdx
  unsigned int v4; // ebx

  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  v4 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)&this[3], v3);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v4;
}
