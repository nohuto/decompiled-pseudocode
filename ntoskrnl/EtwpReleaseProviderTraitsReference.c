/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x140695900
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140693BC0 (EtwpDeleteRegistrationObject.c)
 *     EtwpSetProviderTraitsCommon @ 0x140695C68 (EtwpSetProviderTraitsCommon.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  _DWORD *v1; // rbx
  char v3; // si
  struct _FAST_MUTEX *v4; // rdi
  __int64 *v6; // rcx

  v1 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    v4 = &EtwpProviderTraitsKmMutex;
    if ( !v3 )
      v4 = &EtwpProviderTraitsUmMutex;
    ExAcquireFastMutex(v4);
    if ( v1[6]-- == 1 )
    {
      v6 = &EtwpProviderTraitsKmTree;
      if ( !v3 )
        v6 = &EtwpProviderTraitsUmTree;
      RtlRbRemoveNode((unsigned __int64 *)v6, (unsigned __int64)v1);
    }
    else
    {
      v1 = 0LL;
    }
    ExReleaseFastMutex(v4);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
