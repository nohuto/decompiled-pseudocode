/*
 * XREFs of NtUserSetSystemCursor @ 0x1C02024D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D3BEC (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall NtUserSetSystemCursor(unsigned __int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagCURSOR *v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 3u);
  v6 = 0LL;
  v7 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v11[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v11;
    v11[1] = v7;
    HMLockObject(v7);
    v6 = (unsigned __int8)zzzSetSystemCursor(v7, a2);
    ThreadUnlock1(v9);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
