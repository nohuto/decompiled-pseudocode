/*
 * XREFs of xxxClearWakeMask @ 0x1C01B4860
 * Callers:
 *     NtUserClearWakeMask @ 0x1C01CE8E0 (NtUserClearWakeMask.c)
 * Callees:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C00719A0 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 */

__int64 xxxClearWakeMask()
{
  __int64 result; // rax

  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(gptiCurrent + 1216LL) )
    xxxUpdateInputHangInfo(0LL, 1);
  result = 1LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), 0);
  *(_DWORD *)(gptiCurrent + 1272LL) &= ~0x400u;
  return result;
}
