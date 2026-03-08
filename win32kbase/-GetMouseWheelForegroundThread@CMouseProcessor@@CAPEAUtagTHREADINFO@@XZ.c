/*
 * XREFs of ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C022D8A4
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C022B148 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C022E260 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C00F43EE (PtiKbdFromQ.c)
 */

struct tagTHREADINFO *CMouseProcessor::GetMouseWheelForegroundThread(void)
{
  struct tagTHREADINFO *result; // rax
  _QWORD *v1; // rcx
  __int64 v2; // rax

  if ( !gpqForeground )
    return 0LL;
  result = (struct tagTHREADINFO *)PtiKbdFromQ(gpqForeground);
  if ( !result )
  {
    v2 = v1[15];
    if ( v2 )
      return *(struct tagTHREADINFO **)(v2 + 16);
    v2 = v1[14];
    if ( v2 )
      return *(struct tagTHREADINFO **)(v2 + 16);
    else
      return (struct tagTHREADINFO *)v1[12];
  }
  return result;
}
