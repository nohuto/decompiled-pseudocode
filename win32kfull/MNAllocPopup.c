// write access to const memory has been detected, the output may be wrong!
PVOID __fastcall MNAllocPopup(int a1)
{
  PVOID v1; // rbx
  __int64 **v2; // rcx

  if ( a1 || (gdwPUDFlags & 0x800000) != 0 )
  {
    v2 = (__int64 **)gpUserTypeIsolation[4];
    if ( !v2 )
      return 0LL;
    v1 = NSInstrumentation::CTypeIsolation<24576,96>::Allocate(v2);
  }
  else
  {
    gdwPUDFlags |= 0x800000u;
    v1 = gpopupMenu;
  }
  if ( v1 )
  {
    memset_0(v1, 0, 0x60uLL);
    if ( !InitLookAsideRef<tagPOPUPMENU>((__int64)v1) )
    {
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>((__int64)v1);
      return 0LL;
    }
  }
  return v1;
}
