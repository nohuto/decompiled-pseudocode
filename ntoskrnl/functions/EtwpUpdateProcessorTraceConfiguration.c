__int64 __fastcall EtwpUpdateProcessorTraceConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000000) != 0 )
    return 3221226243LL;
  if ( *(_QWORD *)(a1 + 1032) || (result = EtwpConstructIptData(a1), (int)result >= 0) )
  {
    if ( !**(_QWORD **)(a1 + 1032) )
    {
      _interlockedbittestandset(&KiCpuTracingFlags, 2u);
      result = (**(__int64 (__fastcall ***)(__int64))(*(_QWORD *)(a1 + 1032) + 16LL))(v3);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1032) + 8LL) = v3;
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x4000000u);
        return 0LL;
      }
      else
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        **(_QWORD **)(a1 + 1032) = 0LL;
      }
      return result;
    }
    return 3221226243LL;
  }
  return result;
}
