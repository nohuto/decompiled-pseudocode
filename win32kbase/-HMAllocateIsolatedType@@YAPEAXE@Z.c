/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0078690
 * Callers:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0077BD8 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00296B0 (-Allocate@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C0078704 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00A8440 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00ACBC4 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PVOID __fastcall HMAllocateIsolatedType()
{
  int v0; // eax
  int v1; // eax
  __int64 v2; // rcx
  PVOID result; // rax

  v0 = HMTagToIsolatedType() - 1;
  if ( v0 )
  {
    v1 = v0 - 1;
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        result = 0LL;
        if ( *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24) )
          return (PVOID)NSInstrumentation::CTypeIsolation<81920,160>::Allocate();
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      v2 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16);
      result = 0LL;
      if ( v2 )
        return NSInstrumentation::CTypeIsolation<86016,336>::Allocate(v2);
    }
  }
  else
  {
    result = 0LL;
    if ( *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 8) )
      return (PVOID)NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  }
  return result;
}
