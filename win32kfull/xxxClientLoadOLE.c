/*
 * XREFs of xxxClientLoadOLE @ 0x1C0234524
 * Callers:
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 * Callees:
 *     xxxUserModeCallback @ 0x1C02165AC (xxxUserModeCallback.c)
 */

__int64 __fastcall xxxClientLoadOLE(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 result; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (*(_DWORD *)(v3 + 12) & 0x100000) != 0 )
    return 0LL;
  result = xxxUserModeCallback(99LL, 0LL, 0, v2);
  if ( (int)result >= 0 )
    *(_DWORD *)(v3 + 12) |= 0x100000u;
  return result;
}
