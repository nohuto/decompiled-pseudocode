/*
 * XREFs of ViFreeTrackedPool @ 0x140A90A7C
 * Callers:
 *     VerifierFreeTrackedPool @ 0x1405FF880 (VerifierFreeTrackedPool.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

volatile signed __int32 *__fastcall ViFreeTrackedPool(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        char a3,
        int a4)
{
  ULONG_PTR v6; // rsi
  __int64 *v7; // rbx
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // r15
  union _SLIST_HEADER *v10; // rbp
  unsigned __int64 v11; // rsi
  volatile signed __int32 *v12; // rdx
  unsigned int v13; // r13d
  volatile signed __int64 *v14; // rax
  volatile signed __int32 *result; // rax

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
    if ( *(_QWORD *)(v8 + 16) != v6 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13FuLL, BugCheckParameter2, v6, v8 + 16);
  }
  *(_QWORD *)(v8 + 16) |= 1uLL;
  RtlpInterlockedPushEntrySList(v10 + 5, (PSLIST_ENTRY)v8);
  v11 = -(__int64)v6;
  v12 = (volatile signed __int32 *)&v10[7];
  v13 = a3 & 1;
  if ( !v13 )
    v12 = (volatile signed __int32 *)&v10[7].HeaderX64 + 1;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[8].Alignment + (v13 ^ 1LL), v11);
  _InterlockedDecrement(v12);
  v14 = &qword_140C2A018;
  if ( !v13 )
    v14 = &qword_140C2A020;
  _InterlockedExchangeAdd64(v14, v11);
  result = &dword_140C2A004;
  if ( !v13 )
    result = &dword_140C2A008;
  _InterlockedDecrement(result);
  _InterlockedIncrement(&dword_140C29FF0);
  return result;
}
