__int64 __fastcall KiAbThreadRemoveBoostsSlow(ULONG_PTR BugCheckParameter1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (a3 & 0x40000000) != 0 )
      result = KiAbThreadUnboostIoPriority(BugCheckParameter1, 0LL);
    if ( a3 < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 864));
      result = PsBoostThreadIoQoS(BugCheckParameter1, 1);
    }
    if ( (a3 & 0x3FFFFFFF) != 0 )
      result = KiAbThreadUnboostCpuPriority(BugCheckParameter1);
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      return EtwTraceAutoBoostClearFloor(BugCheckParameter1, a2, (unsigned int)a3);
  }
  return result;
}
