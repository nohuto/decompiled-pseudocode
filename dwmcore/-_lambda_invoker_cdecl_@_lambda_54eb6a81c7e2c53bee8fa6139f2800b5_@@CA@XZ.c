/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_@@CA@XZ @ 0x1802A0AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x18019A5C0 (--_ECompositorTracing@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)CompositorTracing::`vector deleting destructor'((CompositorTracing *)Context, 0);
  }
  return result;
}
