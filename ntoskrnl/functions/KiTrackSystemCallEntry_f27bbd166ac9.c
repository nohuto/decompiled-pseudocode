__int64 __fastcall KiTrackSystemCallEntry(unsigned __int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax

  if ( (unsigned int)KeIsTraceCallbackAllowed(KeGetCurrentThread()->PreviousMode) )
  {
    v8 = *(_QWORD *)KiSystemServiceTraceCallbackTable;
    if ( (*(_BYTE *)(KiSystemServiceTraceCallbackTable + 8) & 1) != 0 && v8 )
      v8 ^= KiSystemServiceTraceCallbackTable;
    v9 = *(_BYTE *)(KiSystemServiceTraceCallbackTable + 8) & 1;
    while ( v8 )
    {
      v10 = KiSystemServiceTraceTableCompareFunction(a1, v8);
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
          break;
        v11 = *(_QWORD *)(v8 + 8);
      }
      else
      {
        v11 = *(_QWORD *)v8;
      }
      if ( v9 && v11 )
        v8 ^= v11;
      else
        v8 = v11;
    }
    if ( v8 && *(_BYTE *)(v8 + 40) && KiDynamicTraceEnabled )
    {
      _InterlockedIncrement(&KiSystemServiceTraceCallbacksActive);
      if ( *(_BYTE *)(v8 + 40) )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, int, __int64))qword_140D1F270)(
          *(_QWORD *)(v8 + 24),
          *(_QWORD *)(v8 + 48),
          *(unsigned int *)(v8 + 32),
          a2,
          a3,
          a4);
      _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( (BYTE8(PerfGlobalGroupMask[0]) & 0x40) != 0 )
    PerfInfoLogSysCallEntry(a1);
  return v8;
}
