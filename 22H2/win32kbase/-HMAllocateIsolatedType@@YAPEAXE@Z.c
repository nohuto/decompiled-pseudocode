/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C004FA30
 * Callers:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C004EF58 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C004FAA4 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C008D9A8 (-Allocate@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0099E70 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C009DE94 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

void *__fastcall HMAllocateIsolatedType()
{
  int v0; // eax
  int v1; // eax
  void *result; // rax

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
          return (void *)NSInstrumentation::CTypeIsolation<81920,160>::Allocate();
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      result = 0LL;
      if ( *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16) )
        return (void *)NSInstrumentation::CTypeIsolation<86016,336>::Allocate();
    }
  }
  else
  {
    result = 0LL;
    if ( *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 8) )
      return (void *)NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  }
  return result;
}
