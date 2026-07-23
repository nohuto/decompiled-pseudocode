/*
 * XREFs of ViFreeTrackedPool @ 0x1409D5298
 * Callers:
 *     VerifierFreeTrackedPool @ 0x1405A1BE0 (VerifierFreeTrackedPool.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
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
  _SLIST_HEADER *v10; // rbp
  unsigned int v11; // r13d
  unsigned __int64 v12; // rsi
  volatile signed __int64 *v13; // rax
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
  v10 = *(_SLIST_HEADER **)(v9 + 8);
  if ( (MmVerifierData & 0x800) != 0 )
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
  v11 = a3 & 1;
  v12 = -(__int64)v6;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[7].Region + (v11 ^ 1LL), v12);
  v13 = &qword_140C2A930;
  _InterlockedDecrement((volatile signed __int32 *)&v10[6].HeaderX64 + (v11 ^ 1LL) + 2);
  if ( !v11 )
    v13 = &qword_140C2A938;
  _InterlockedExchangeAdd64(v13, v12);
  result = &dword_140C2A920;
  if ( !v11 )
    result = &dword_140C2A924;
  _InterlockedDecrement(result);
  return result;
}
