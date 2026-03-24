/*
 * XREFs of MiRaisedIrqlFault @ 0x1402FB34C
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x140292848 (MiNoFaultFound.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeInvalidAccessAllowed @ 0x1402FB490 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140320C48 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x1405484A0 (MiGenerateAccessViolation.c)
 *     MiTransientCombineAddress @ 0x14055D164 (MiTransientCombineAddress.c)
 */

__int64 __fastcall MiRaisedIrqlFault(ULONG_PTR *a1)
{
  ULONG_PTR v2; // rcx
  _DWORD *MmInternal; // rcx
  ULONG_PTR v4; // rdx
  _BYTE *v6; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 *i; // r14
  ULONG_PTR v10; // rax
  __int64 v11; // r9
  ULONG_PTR v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  ULONG_PTR v18; // rdx
  ULONG_PTR v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[2];
  if ( (v2 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(v2, 1LL) == 1 )
    return 3221225477LL;
  if ( (a1[10] & 0x20) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal && MmInternal[3120] )
  {
    v4 = *a1;
    if ( KeGetCurrentIrql() != 2 )
      KeBugCheckEx(0x50u, v4, a1[1], KeGetCurrentIrql(), 0xAuLL);
    if ( v4 < 0xFFFFF6FB40000000uLL || v4 > 0xFFFFF6FB7FFFFFFFuLL )
      KeBugCheckEx(0x50u, v4, a1[1], a1[2], 0xBuLL);
    return 3221225477LL;
  }
  v6 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && *v6 == 1 )
    return 3221225477LL;
  if ( (a1[2] & 1) == 0 )
  {
    if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2], 0LL) != 1 )
      goto LABEL_20;
    return 3221225477LL;
  }
  if ( *v6 == 3 || *v6 == 6 )
    return 3221225477LL;
LABEL_20:
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1) == 1 )
    return 3221225477LL;
  v7 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    v8 = 3LL;
    for ( i = a1 + 6; ; --i )
    {
      v10 = MI_READ_PTE_LOCK_FREE(*i);
      if ( (v10 & 1) == 0 )
        goto LABEL_32;
      if ( (v10 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v10 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v7, v10, a1[2], 0xFuLL);
        MiCheckSystemNxFault(a1, v10, 3LL, v11);
        v18 = *a1;
        if ( *a1 >= 0xFFFFF68000000000uLL && v18 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v18, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v8 )
        break;
      --v8;
    }
    v12 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v19 = v12;
    v14 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( (a1[1] & 2) != 0 )
      {
        if ( (v12 & 0x200) != 0 )
          return 3489660934LL;
        if ( (v12 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v7, v12, a1[2], 0xAuLL);
      }
      MiCheckSystemNxFault(a1, v19, 0LL, v13);
      if ( MiPteInShadowRange((unsigned __int64)&v19)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v19 >> 3) & 0x1FF));
          if ( (v16 & 0x20) != 0 )
            v14 |= 0x20uLL;
          if ( (v16 & 0x42) != 0 )
            v14 |= 0x42uLL;
        }
        else
        {
          v14 = v19;
        }
      }
      v17 = (v14 >> 12) & 0xFFFFFFFFFLL;
      if ( *(_WORD *)(48 * v17 - 0x58000000000LL + 32) > 1u
        || (*(_BYTE *)(48 * v17 - 0x58000000000LL) & 1) == 0
        || (*(_BYTE *)(48 * v17 - 0x58000000000LL + 35) & 8) != 0 )
      {
        MiNoFaultFound(
          (__int64)a1,
          (volatile signed __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          *a1,
          a1[2],
          1,
          v19);
        return 0LL;
      }
    }
LABEL_32:
    if ( (unsigned int)MiGenerateAccessViolation(a1) )
      return 3221225477LL;
  }
  return 3489660934LL;
}
