/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x140739A38
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x1407398DC (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     RtlInsertEntryHashTable @ 0x1402989F0 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x140739B6C (SepFindMatchingLowBoxNumberEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  struct _RTL_DYNAMIC_HASH_TABLE *v3; // r13
  RTL_BITMAP *v4; // r14
  unsigned int v6; // ebx
  unsigned int v8; // edi
  __int64 Pool2; // rax
  __int64 v10; // rsi
  ULONG ClearBitsAndSet; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r8
  ULONG v16; // ebp
  __int64 v17; // r13
  struct _RTL_DYNAMIC_HASH_TABLE *v18; // [rsp+78h] [rbp+20h]

  v3 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v4 = (RTL_BITMAP *)(a1 + 8);
  v18 = v3;
  v6 = 0;
  SepFindMatchingLowBoxNumberEntry(v3, a2);
  v8 = (4 * a2[1] + 67) & 0xFFFFFFFC;
  Pool2 = ExAllocatePool2(256LL, v8, 1934386515LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = Pool2 + 56;
    RtlCopySid(v8 - 56, (PSID)(Pool2 + 56), a2);
    ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v16 = 2 * RtlNumberOfSetBits(v4);
      if ( v16 > 0x10000 )
        goto LABEL_15;
      v17 = ExAllocatePool2(256LL, (unsigned __int64)v16 >> 3, 1934386515LL);
      if ( !v17 )
        goto LABEL_15;
      ExFreePoolWithTag(v4->Buffer, 0);
      v4->SizeOfBitMap = v16;
      v4->Buffer = (unsigned int *)v17;
      RtlClearAllBits(v4);
      RtlSetBits(v4, 0, v16 >> 1);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
      if ( ClearBitsAndSet == -1 )
        goto LABEL_15;
      v3 = v18;
    }
    if ( ClearBitsAndSet != 0xFFFF )
    {
      *(_QWORD *)(v10 + 48) = 0LL;
      *(_DWORD *)(v10 + 40) = ClearBitsAndSet + 1;
      *(_QWORD *)(v10 + 24) = 1LL;
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
      ExFreePoolWithTag((PVOID)v10, 0);
      RtlClearBits(v4, 1u, ClearBitsAndSet);
      return (unsigned int)-1073741670;
    }
LABEL_15:
    ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)-1073741670;
  }
  return 3221225626LL;
}
