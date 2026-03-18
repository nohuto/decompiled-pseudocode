/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C011AD24
 * Callers:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C00F7040 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C011AC00 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C011ACCC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManualResetEvent::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    EngFreeMem(v2);
  EngFreeMem(pv);
}
