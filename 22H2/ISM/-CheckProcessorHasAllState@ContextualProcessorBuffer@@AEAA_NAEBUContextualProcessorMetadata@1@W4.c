/*
 * XREFs of ?CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4ContextualProcessorState@@@Z @ 0x18014B640
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B670 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ContextualProcessorBuffer::CheckProcessorHasAllState(__int64 a1, __int64 a2, int a3)
{
  __int64 **v3; // rcx
  __int64 *i; // rax

  v3 = *(__int64 ***)(a2 + 16);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 5) != a3 )
      return 0;
  }
  return 1;
}
