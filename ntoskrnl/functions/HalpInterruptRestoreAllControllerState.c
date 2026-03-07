void HalpInterruptRestoreAllControllerState()
{
  ULONG_PTR *v0; // rbx
  __int64 v1; // rcx
  int v2; // eax

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v0 != &HalpRegisteredInterruptControllers )
  {
    v1 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = HalpInterruptRestoreController(v1, 0);
    if ( v2 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 3uLL, v2);
  }
  HalpInterruptPicStateIntact = 1;
}
