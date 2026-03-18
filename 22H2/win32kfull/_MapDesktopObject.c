/*
 * XREFs of _MapDesktopObject @ 0x1C004FDF0
 * Callers:
 *     NtUserMapDesktopObject @ 0x1C004FDB0 (NtUserMapDesktopObject.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     GetDesktopView @ 0x1C004FEC0 (GetDesktopView.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall MapDesktopObject(__int64 a1)
{
  __int64 v2; // rdi
  struct tagTHREADINFO *v3; // rsi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax
  __int64 result; // rax

  v2 = 0LL;
  v3 = PtiCurrentShared();
  v4 = *((_DWORD *)v3 + 387);
  *((_DWORD *)v3 + 387) = 0;
  v5 = HMValidateHandle(a1, 0xFFu);
  v6 = v5;
  if ( !v5 || (v8 = _HMPheFromObject(v5), (*(_BYTE *)(v8 + 25) & 0x40) != 0) )
  {
    result = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v6 + 24);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    DesktopView = GetDesktopView(CurrentProcessWin32Process, v9);
    if ( DesktopView )
      v2 = *(_QWORD *)v8 + *(_QWORD *)(DesktopView + 16);
    result = v2;
  }
  *((_DWORD *)v3 + 387) = v4;
  return result;
}
