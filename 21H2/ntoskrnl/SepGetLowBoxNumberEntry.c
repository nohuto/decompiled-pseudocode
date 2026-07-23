/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x1406C6708
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x1406C65AC (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     RtlInsertEntryHashTable @ 0x1402F5E00 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x1406C6834 (SepFindMatchingLowBoxNumberEntry.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  _RTL_DYNAMIC_HASH_TABLE *v3; // r13
  _RTL_BITMAP *v4; // r14
  unsigned int v6; // edi
  unsigned int v8; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rsi
  ULONG ClearBitsAndSet; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r8
  ULONG v16; // ebp
  unsigned int *v17; // r13
  _RTL_DYNAMIC_HASH_TABLE *v18; // [rsp+78h] [rbp+20h]

  v3 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v4 = (_RTL_BITMAP *)(a1 + 8);
  v18 = v3;
  v6 = 0;
  SepFindMatchingLowBoxNumberEntry(v3, a2);
  v8 = (4 * a2[1] + 67) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x734C6553u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = PoolWithTag + 7;
    RtlCopySid(v8 - 56, PoolWithTag + 7, a2);
    ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v16 = 2 * RtlNumberOfSetBits(v4);
      if ( v16 > 0x10000 )
        goto LABEL_15;
      v17 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v16 >> 3, 0x734C6553u);
      if ( !v17 )
        goto LABEL_15;
      ExFreePoolWithTag(v4->Buffer, 0);
      v4->SizeOfBitMap = v16;
      v4->Buffer = v17;
      RtlClearAllBits(v4);
      RtlSetBits(v4, 0, v16 >> 1);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
      if ( ClearBitsAndSet == -1 )
        goto LABEL_15;
      v3 = v18;
    }
    if ( ClearBitsAndSet != 0xFFFF )
    {
      v10[6] = 0LL;
      *((_DWORD *)v10 + 10) = ClearBitsAndSet + 1;
      v10[3] = 1LL;
      v12 = (unsigned int)a2[1] - 1;
      v13 = *(unsigned int *)&a2[4 * v12 + 8];
      v14 = v13 + 1;
      if ( (_DWORD)v13 )
        v14 = *(unsigned int *)&a2[4 * v12 + 8];
      if ( RtlInsertEntryHashTable(v3, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v10, v14, 0LL) )
      {
        *a3 = v10;
        return v6;
      }
      ExFreePoolWithTag(v10, 0);
      RtlClearBits(v4, 1u, ClearBitsAndSet);
      return (unsigned int)-1073741670;
    }
LABEL_15:
    ExFreePoolWithTag(v10, 0);
    return (unsigned int)-1073741670;
  }
  return 3221225626LL;
}
