/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x1403B63E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalpMcUpdatePostUpdateFunc )
    return ((__int64 (*)(void))HalpMcUpdatePostUpdateFunc)();
  return result;
}
