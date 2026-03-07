__int64 __fastcall PoFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3) + 424LL) )
    PopFxBugCheck(0x600uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  return PopFxRegisterComponentPerfStates(BugCheckParameter2, a5, a6);
}
