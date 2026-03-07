__int64 __fastcall ViFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3, int a4)
{
  ULONG_PTR v6; // rsi
  __int64 *v7; // rbx
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // r15
  union _SLIST_HEADER *v10; // rbp
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rsi
  volatile signed __int32 *v13; // r9
  unsigned int v14; // r12d
  volatile signed __int32 *v15; // r8
  volatile signed __int64 *v16; // rdx
  __int64 result; // rax

  v6 = BugCheckParameter3;
  if ( a4 == 1 )
  {
    v7 = (__int64 *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)
                   + (-(__int64)((BugCheckParameter2 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF028uLL)
                   + 4072);
  }
  else if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v6 = BugCheckParameter3 - 16;
    v7 = (__int64 *)(BugCheckParameter3 - 16 + BugCheckParameter2 - 8);
  }
  else
  {
    v7 = (__int64 *)(BugCheckParameter2 + BugCheckParameter3 - 8);
  }
  v8 = *v7;
  v9 = *v7 & 0xFFFFFFFFFFFFF000uLL;
  v10 = *(union _SLIST_HEADER **)(v9 + 8);
  if ( (VfRuleClasses & 1) != 0 )
  {
    if ( (v8 & 3) != 0 || !MmIsAddressValidEx(*v7) )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13AuLL, BugCheckParameter2, v8, (__int64)v7);
    if ( *(_QWORD *)(v9 + 16) != 556929861LL )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13BuLL, BugCheckParameter2, v9 + 16, (__int64)v7);
    if ( ((unsigned __int8)v10 & 3) != 0 || !MmIsAddressValidEx((__int64)&v10[2].Region) )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13CuLL, BugCheckParameter2, (ULONG_PTR)v10, v9 + 8);
    if ( v10[2].Region != 2557876544 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13DuLL, BugCheckParameter2, (ULONG_PTR)&v10[2].Region, 2557876544LL);
    if ( *(_QWORD *)v8 != BugCheckParameter2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13EuLL, BugCheckParameter2, *(_QWORD *)v8, v8);
    v11 = (_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v8 + 16) != v6 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13FuLL, BugCheckParameter2, v6, v8 + 16);
  }
  else
  {
    v11 = (_QWORD *)(v8 + 16);
  }
  *v11 |= 1uLL;
  RtlpInterlockedPushEntrySList(v10 + 5, (PSLIST_ENTRY)v8);
  v12 = -(__int64)v6;
  v13 = (volatile signed __int32 *)&v10[7];
  v14 = a3 & 1;
  if ( !v14 )
    v13 = (volatile signed __int32 *)&v10[7].HeaderX64 + 1;
  v15 = &dword_140C13864;
  if ( !v14 )
    v15 = &dword_140C13868;
  v16 = &qword_140C13878;
  if ( !v14 )
    v16 = &qword_140C13880;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[8].Alignment + (v14 ^ 1LL), v12);
  _InterlockedDecrement(v13);
  _InterlockedExchangeAdd64(v16, v12);
  _InterlockedDecrement(v15);
  _InterlockedIncrement(&dword_140C13850);
  return result;
}
