/*
 * XREFs of PspDeleteCreateProcessContext @ 0x14063D884
 * Callers:
 *     NtCreateThreadEx @ 0x14063D5C0 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x1406986F4 (PspBuildCreateProcessContext.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspDestroyProcessParameterOverrides @ 0x14063DA20 (PspDestroyProcessParameterOverrides.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspDeleteCreateProcessContext(__int64 a1)
{
  void *v2; // rcx
  struct _DMA_ADAPTER *v3; // rcx
  struct _DMA_ADAPTER *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _DMA_ADAPTER *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  PVOID *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  unsigned __int64 v17; // rdi
  PVOID *v18; // rdx
  void *v19; // rcx

  v2 = *(void **)(a1 + 168);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = *(struct _DMA_ADAPTER **)(a1 + 176);
  if ( v3 )
    HalPutDmaAdapter(v3);
  v4 = *(struct _DMA_ADAPTER **)(a1 + 152);
  if ( v4 )
    HalPutDmaAdapter(v4);
  v5 = *(void **)(a1 + 128);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x72437350u);
  v6 = *(void **)(a1 + 184);
  if ( v6 )
    ObCloseHandle(v6, 0);
  v7 = *(void **)(a1 + 192);
  if ( v7 )
    ObCloseHandle(v7, 0);
  v8 = *(struct _DMA_ADAPTER **)(a1 + 200);
  if ( v8 )
    HalPutDmaAdapter(v8);
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0);
  v9 = *(void **)(a1 + 280);
  if ( v9 && v9 != (void *)(a1 + 264) )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 296);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(PVOID **)(a1 + 400);
  if ( v11 )
  {
    v17 = 0LL;
    if ( *(_DWORD *)(a1 + 412) )
    {
      v18 = *(PVOID **)(a1 + 400);
      do
      {
        if ( v11[v17] )
        {
          ObfDereferenceObjectWithTag(v11[v17], 0x6C4A7350u);
          v11 = *(PVOID **)(a1 + 400);
          v18 = v11;
        }
        ++v17;
      }
      while ( v17 < *(unsigned int *)(a1 + 412) );
      v11 = v18;
    }
    ExFreePoolWithTag(v11, 0x6C4A7350u);
  }
  v12 = *(void **)(a1 + 392);
  if ( v12 )
  {
    memset(v12, 0, *(unsigned int *)(a1 + 408));
    ExFreePoolWithTag(*(PVOID *)(a1 + 392), 0);
  }
  v13 = *(void **)(a1 + 424);
  if ( v13 )
  {
    memset(v13, 0, *(unsigned int *)(a1 + 432));
    ExFreePoolWithTag(*(PVOID *)(a1 + 424), 0);
  }
  v14 = *(_QWORD *)(a1 + 440);
  if ( v14 )
  {
    v19 = *(void **)(v14 + 8);
    if ( v19 || (v19 = *(void **)(v14 + 24)) != 0LL )
      ExFreePoolWithTag(v19, 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 440), 0);
  }
  v15 = *(void **)(a1 + 472);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 472) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 232));
  return PspDestroyProcessParameterOverrides(*(_QWORD *)(a1 + 512));
}
