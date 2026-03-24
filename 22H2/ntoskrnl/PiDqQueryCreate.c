/*
 * XREFs of PiDqQueryCreate @ 0x1406A7BF8
 * Callers:
 *     PiDqDispatch @ 0x1406A79D0 (PiDqDispatch.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14032D560 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x140413800 (memset.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryCreate(char a1, _QWORD *a2)
{
  unsigned int v4; // edi
  char *PoolWithTag; // rax
  char *v6; // rbx
  signed __int64 v7; // rax

  v4 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xE8uLL, 0x58706E50u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xE8uLL);
    *((_DWORD *)v6 + 53) = 1;
    v7 = _InterlockedIncrement64(&PiDqSequenceNumber);
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 28) = v7;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(v6 + 72),
      (PRTL_AVL_COMPARE_ROUTINE)PiDqCompareAddresses,
      (PRTL_AVL_ALLOCATE_ROUTINE)PiDqAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)PiDqFreeGenericTableEntry,
      0LL);
    *((_QWORD *)v6 + 25) = v6 + 192;
    *((_QWORD *)v6 + 24) = v6 + 192;
    if ( a1 )
      *((_DWORD *)v6 + 54) |= 2u;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)v6 + 1);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
