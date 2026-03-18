/*
 * XREFs of _MapDesktopObject @ 0x1C007B8C0
 * Callers:
 *     NtUserMapDesktopObject @ 0x1C007B880 (NtUserMapDesktopObject.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetDesktopView @ 0x1C0078100 (GetDesktopView.c)
 */

__int64 __fastcall MapDesktopObject(__int64 a1)
{
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rbp
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *DesktopView; // rax
  __int64 result; // rax

  v2 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = *(_DWORD *)(ThreadWin32Thread + 1508);
  *(_DWORD *)(ThreadWin32Thread + 1508) = 0;
  v5 = HMValidateHandle(a1, 0xFFu);
  v6 = v5;
  if ( v5 )
  {
    v8 = _HMPheFromObject(v5);
    if ( (*(_BYTE *)(v8 + 25) & 0x40) == 0 )
    {
      v9 = *(_QWORD *)(v6 + 24);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      DesktopView = GetDesktopView(CurrentProcessWin32Process, v9);
      if ( DesktopView )
        v2 = *(_QWORD *)v8 + DesktopView[2];
    }
  }
  result = v2;
  *(_DWORD *)(ThreadWin32Thread + 1508) = v4;
  return result;
}
