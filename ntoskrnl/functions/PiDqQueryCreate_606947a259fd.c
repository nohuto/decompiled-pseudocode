__int64 __fastcall PiDqQueryCreate(char a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax
  __int64 v6; // rbx
  signed __int64 v7; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 232LL, 1483763280LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 212) = 1;
    v7 = _InterlockedIncrement64(&PiDqSequenceNumber);
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 224) = v7;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(v6 + 72),
      PiDqCompareAddresses,
      PiDqAllocateGenericTableEntry,
      PiDqFreeGenericTableEntry,
      0LL);
    *(_QWORD *)(v6 + 200) = v6 + 192;
    *(_QWORD *)(v6 + 192) = v6 + 192;
    if ( a1 )
      *(_DWORD *)(v6 + 216) |= 2u;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v6 + 32));
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
