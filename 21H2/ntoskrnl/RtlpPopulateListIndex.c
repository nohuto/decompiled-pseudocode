/*
 * XREFs of RtlpPopulateListIndex @ 0x1405943AC
 * Callers:
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140593B14 (RtlpHeapHandleError.c)
 *     RtlpHeapAddListEntry @ 0x140593FE8 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405942B8 (RtlpHeapRemoveListEntry.c)
 */

void __fastcall RtlpPopulateListIndex(ULONG_PTR a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 *i; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  int v12; // ebp
  unsigned int v13; // eax
  int v14; // eax

  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v4 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v5 = 2 * v4;
    if ( !*(_DWORD *)(a2 + 12) )
      v5 = v4;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v5) = 0LL;
    v6 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1) >> 5;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v6) &= ~(1 << ((*(_BYTE *)(a2 + 8) - *(_BYTE *)(a2 + 24) - 1) & 0x1F));
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, (ULONG_PTR)(i - 2));
    }
    v8 = *((unsigned __int16 *)i - 4);
    v9 = a2;
    v10 = *(unsigned int *)(a2 + 8);
    if ( v8 < v10 )
    {
LABEL_12:
      v12 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        if ( !*(_QWORD *)v9 )
          break;
        v9 = *(_QWORD *)v9;
        if ( v8 < *(unsigned int *)(v11 + 8) )
          goto LABEL_12;
      }
      v12 = *(_DWORD *)(v9 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v13 = v10 - 1;
      if ( (unsigned int)v8 < (unsigned int)v10 )
        v13 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, v10, i, v13, *((unsigned __int16 *)i - 4));
    }
    RtlpHeapAddListEntry(a1, v9, v10, (__int64)i, v12, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 4 * ((unsigned __int64)(unsigned int)(v12 - *(_DWORD *)(v9 + 24)) >> 5));
      if ( !_bittest(&v14, ((_BYTE)v12 - *(_BYTE *)(v9 + 24)) & 0x1F) )
      {
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        RtlpHeapHandleError();
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
}
