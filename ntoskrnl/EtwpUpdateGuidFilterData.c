/*
 * XREFs of EtwpUpdateGuidFilterData @ 0x14068FCB8
 * Callers:
 *     EtwpUpdateGuidEnableInfo @ 0x14068FA30 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140695580 (EtwpClearSessionAndUnreferenceEntry.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1403008E0 (KeGenericCallDpc.c)
 *     EtwpFreeEventNameFilter @ 0x1409F2488 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateEventFilterAndFree @ 0x1409F24B8 (EtwpUpdateEventFilterAndFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateGuidFilterData(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int32 v4; // ebp
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // rcx
  void *v10; // r13
  void *v11; // r12
  char v12; // cl
  __int64 Pool2; // rax
  __int64 v15; // rdi
  __int32 v16; // esi
  __int64 v17; // rdx
  PVOID v18; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+28h] [rbp-40h]
  PVOID v20; // [rsp+70h] [rbp+8h]
  char v21; // [rsp+78h] [rbp+10h]
  PVOID v22; // [rsp+88h] [rbp+20h]

  v21 = a2;
  v4 = *(_DWORD *)a4;
  v5 = 0;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 384);
  P = 0LL;
  v10 = 0LL;
  v18 = 0LL;
  v11 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  if ( v8 )
    goto LABEL_8;
  v12 = 1;
  if ( v4 )
    v12 = a3;
  if ( v12 )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, 832LL, 1182233669LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 384) = Pool2;
LABEL_8:
    v15 = 104 * v7;
    v16 = _InterlockedExchange((volatile __int32 *)(v15 + v8), 0);
    if ( (v16 & 0x80000004) == 0x80000004 || (v4 & 0x80000004) == 0x80000004 )
      EtwpUpdateEventFilterAndFree(v15 + *(_QWORD *)(a1 + 384) + 8LL, a4 + 8);
    if ( (v16 & 0x80000008) == 0x80000008 || (v4 & 0x80000008) == 0x80000008 )
      EtwpUpdateEventFilterAndFree(v15 + *(_QWORD *)(a1 + 384) + 16LL, a4 + 16);
    if ( (v16 & 0x80000010) == 0x80000010 || (v4 & 0x80000010) == 0x80000010 )
      EtwpUpdateEventFilterAndFree(v15 + *(_QWORD *)(a1 + 384) + 24LL, a4 + 24);
    if ( (v16 & 0x80000020) == 0x80000020 || (v4 & 0x80000020) == 0x80000020 )
      EtwpUpdateEventFilterAndFree(v15 + *(_QWORD *)(a1 + 384) + 32LL, a4 + 32);
    if ( (v16 & 0x80008000) == 0x80008000 || (v4 & 0x80008000) == 0x80008000 )
      EtwpUpdateEventFilterAndFree(v15 + *(_QWORD *)(a1 + 384) + 40LL, a4 + 40);
    if ( (v16 & 0x80001000) == 0x80001000 || (v4 & 0x80001000) == 0x80001000 )
    {
      P = (PVOID)_InterlockedExchange64((volatile __int64 *)(v15 + *(_QWORD *)(a1 + 384) + 48), *(_QWORD *)(a4 + 48));
      *(_QWORD *)(a4 + 48) = 0LL;
    }
    if ( (v16 & 0x80000200) == 0x80000200 || (v4 & 0x80000200) == 0x80000200 )
    {
      v18 = (PVOID)_InterlockedExchange64((volatile __int64 *)(v15 + *(_QWORD *)(a1 + 384) + 72), *(_QWORD *)(a4 + 72));
      *(_QWORD *)(a4 + 72) = 0LL;
    }
    if ( (v16 & 0x80000400) == 0x80000400 || (v4 & 0x80000400) == 0x80000400 )
    {
      v22 = (PVOID)_InterlockedExchange64((volatile __int64 *)(v15 + *(_QWORD *)(a1 + 384) + 96), *(_QWORD *)(a4 + 96));
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    if ( (v16 & 0x80002000) == 0x80002000 || (v4 & 0x80002000) == 0x80002000 )
    {
      v10 = (void *)_InterlockedExchange64((volatile __int64 *)(v15 + *(_QWORD *)(a1 + 384) + 56), *(_QWORD *)(a4 + 56));
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    if ( (v16 & 0x80004000) == 0x80004000 || (v4 & 0x80004000) == 0x80004000 )
    {
      v20 = (PVOID)_InterlockedExchange64((volatile __int64 *)(v15 + *(_QWORD *)(a1 + 384) + 64), *(_QWORD *)(a4 + 64));
      *(_QWORD *)(a4 + 64) = 0LL;
    }
    if ( (v16 & 0x80000100) == 0x80000100 || (v4 & 0x80000100) == 0x80000100 )
    {
      v11 = (void *)_InterlockedExchange64((volatile __int64 *)(v15 + *(_QWORD *)(a1 + 384) + 80), *(_QWORD *)(a4 + 80));
      *(_QWORD *)(a4 + 80) = 0LL;
    }
    v17 = a4 + 88;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + v15 + 88) || *(_QWORD *)v17 )
    {
      if ( *(_QWORD *)v17 )
        *(_QWORD *)(*(_QWORD *)v17 + 8LL) = 1LL << v21;
      EtwpUpdateEventFilterAndFree(v15 + *(_QWORD *)(a1 + 384) + 88LL, v17);
    }
    _InterlockedExchange((volatile __int32 *)(v15 + *(_QWORD *)(a1 + 384)), v4);
    if ( P || v18 || v22 || v10 || v20 || v11 )
    {
      KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      if ( v22 )
        EtwpFreeEventNameFilter(v22);
      if ( v10 )
        EtwpFreeEventNameFilter(v10);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(v11, 0);
      }
    }
    return v5;
  }
  return (unsigned int)-1073741801;
}
