/*
 * XREFs of PktMonDetachProvider @ 0x1C00C7660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

__int64 PktMonDetachProvider()
{
  __int64 v0; // rax
  _QWORD *v1; // rcx
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // r8

  byte_1C00E4FD0 = 0;
  ExWaitForRundownProtectionReleaseCacheAware(RunRefCacheAware);
  xmmword_1C00E4FE8 = 0LL;
  KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
  while ( (__int64 *)PktMonCompList != &PktMonCompList )
  {
    v0 = qword_1C00E4EE8;
    if ( *(__int64 **)qword_1C00E4EE8 != &PktMonCompList
      || (v1 = *(_QWORD **)(qword_1C00E4EE8 + 8), *v1 != qword_1C00E4EE8) )
    {
LABEL_11:
      __fastfail(3u);
    }
    --PktMonCompCount;
    qword_1C00E4EE8 = (__int64)v1;
    *v1 = &PktMonCompList;
    v2 = (_QWORD *)(v0 + 16);
    while ( (_QWORD *)*v2 != v2 )
    {
      v3 = *(_QWORD *)(v0 + 24);
      if ( *(_QWORD **)v3 != v2 )
        goto LABEL_11;
      v4 = *(_QWORD **)(v3 + 8);
      if ( *v4 != v3 )
        goto LABEL_11;
      *(_QWORD *)(v0 + 24) = v4;
      *v4 = v2;
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 32) = 0LL;
    }
    *(_OWORD *)v0 = 0LL;
    *(_OWORD *)(v0 + 16) = 0LL;
    *(_OWORD *)(v0 + 32) = 0LL;
    *(_QWORD *)(v0 + 48) = 0LL;
  }
  KeReleaseMutex(&PktMonCompMutex, 0);
  if ( qword_1C00E4FE0 )
    qword_1C00E4FE0();
  return 0LL;
}
