/*
 * XREFs of Endpoint_AreTransfersPending @ 0x1C0039840
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C003BCF0 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     ESM_CheckingIfEndpointCanBeResetAfterHalt @ 0x1C0051590 (ESM_CheckingIfEndpointCanBeResetAfterHalt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Endpoint_AreTransfersPending(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( !*(_BYTE *)(a1 + 37) )
    return (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 56LL))();
  v2 = *(_QWORD *)(a1 + 136);
  v3 = 1;
  if ( !*(_DWORD *)(v2 + 8) )
    return 0;
  while ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(104LL * (unsigned int)(v3 - 1) + v2 + 48) + 32LL)
                                        + 56LL))() )
  {
    v2 = *(_QWORD *)(a1 + 136);
    if ( (unsigned int)++v3 > *(_DWORD *)(v2 + 8) )
      return 0;
  }
  return 1;
}
