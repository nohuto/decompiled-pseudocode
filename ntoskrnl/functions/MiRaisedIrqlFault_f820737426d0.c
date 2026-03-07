__int64 __fastcall MiRaisedIrqlFault(ULONG_PTR *a1)
{
  ULONG_PTR v2; // rcx
  _DWORD *MmInternal; // rcx
  int v4; // ecx
  ULONG_PTR v5; // rdx
  bool v7; // cc
  ULONG_PTR v8; // rcx
  _BYTE *v9; // rax
  ULONG_PTR v10; // rsi
  __int64 v11; // rbx
  _QWORD *i; // r14
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[2];
  if ( (v2 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(v2, 1LL) )
    return 3221225477LL;
  if ( (a1[10] & 0x10) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    v4 = MmInternal[3152];
    if ( v4 )
    {
      if ( KeGetCurrentIrql() != 2 )
        KeBugCheckEx(0x50u, *a1, a1[1], KeGetCurrentIrql(), 0xAuLL);
      if ( v4 != 1 )
      {
        if ( v4 != 2 || *a1 < 0xFFFFF68000000000uLL )
LABEL_22:
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xBuLL);
        v7 = *a1 <= 0xFFFFF6FFFFFFFFFFuLL;
        goto LABEL_14;
      }
      v5 = *a1;
      if ( (*a1 < 0xFFFFF6FB40000000uLL || v5 > 0xFFFFF6FB7FFFFFFFuLL)
        && (v5 < 0xFFFFF6FB7DA00000uLL || v5 > 0xFFFFF6FB7DBFFFF8uLL) )
      {
        if ( v5 < 0xFFFFF6FB7DBED000uLL )
          goto LABEL_22;
        v7 = v5 <= 0xFFFFF6FB7DBEDFF8uLL;
LABEL_14:
        if ( !v7 )
          goto LABEL_22;
      }
      return 3221225477LL;
    }
  }
  v8 = a1[2];
  v9 = (_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v8 & 1) != 0 )
  {
    if ( *v9 == 1 || *v9 == 3 || *v9 == 6 )
      return 3221225477LL;
  }
  else if ( (unsigned __int8)KeInvalidAccessAllowed(v8, 0LL) )
  {
    return 3221225477LL;
  }
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1) || (unsigned int)MiGenerateAccessViolation(a1) )
    return 3221225477LL;
  v10 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    v11 = 3LL;
    for ( i = a1 + 6; ; --i )
    {
      v13 = MI_READ_PTE_LOCK_FREE(*i);
      if ( (v13 & 1) == 0 )
        return 3489660934LL;
      if ( (v13 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v13 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v10, v13, a1[2], 0xFuLL);
        MiCheckSystemNxFault(a1, v13, 3LL);
        v17 = *a1;
        if ( *a1 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v17, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v11 )
        break;
      --v11;
    }
    v14 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v18 = v14;
    v15 = v14;
    if ( (v14 & 1) == 0 )
      return 3489660934LL;
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v14 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v14 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, v10, v14, a1[2], 0xAuLL);
    }
    MiCheckSystemNxFault(a1, v14, 0LL);
    v16 = MI_READ_PTE_LOCK_FREE(&v18);
    if ( *(_WORD *)(48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 32) > 1u
      || (*(_BYTE *)(48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 1) == 0
      || (*(_BYTE *)(48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 35) & 8) != 0 )
    {
      MiNoFaultFound(
        (__int64)a1,
        (volatile signed __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        *a1,
        a1[2],
        1u,
        v15);
      return 0LL;
    }
  }
  return 3489660934LL;
}
