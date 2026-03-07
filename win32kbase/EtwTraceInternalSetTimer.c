__int64 __fastcall EtwTraceInternalSetTimer(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return McTemplateK0pqqqq_EtwWriteTransfer(
             a1,
             (unsigned int)&TimerInternalSetTimerCoalescing,
             a3,
             *(_QWORD *)(a1 + 88),
             *(_DWORD *)(a1 + 96),
             *(_DWORD *)(a1 + 52),
             *(_DWORD *)(a1 + 44),
             *(_DWORD *)(a1 + 48));
  return result;
}
