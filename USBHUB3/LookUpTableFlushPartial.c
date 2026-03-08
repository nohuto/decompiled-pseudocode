/*
 * XREFs of LookUpTableFlushPartial @ 0x1C008FF90
 * Callers:
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C008FC50 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00904A0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 * Callees:
 *     FlushLookUpTableBucket @ 0x1C00446A8 (FlushLookUpTableBucket.c)
 */

void __fastcall LookUpTableFlushPartial(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  unsigned int v4; // esi
  _QWORD *v5; // rax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    v3 = *(_DWORD *)(a1 + 260);
    v4 = v3;
    do
    {
      if ( *(_QWORD *)(a1 + 8LL * v4) )
        v1 += FlushLookUpTableBucket(a1, v4);
      v4 = ((_BYTE)v4 + 1) & 0x1F;
    }
    while ( v4 != v3 && v1 < 0x10 );
    *(_DWORD *)(a1 + 260) = v4;
    if ( v1 )
    {
      v5 = (_QWORD *)(a1 + 296);
      if ( *(_DWORD *)(a1 + 312) > v1 || !*v5 )
        *(_DWORD *)(a1 + 312) = v1;
      if ( *(_DWORD *)(a1 + 308) < v1 )
        *(_DWORD *)(a1 + 308) = v1;
      ++*v5;
      *(_QWORD *)(a1 + 288) += v1;
    }
  }
}
