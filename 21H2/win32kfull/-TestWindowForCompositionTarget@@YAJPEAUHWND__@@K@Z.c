/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1C00B5168
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00B4DF0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C00B5280 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  PETHREAD **v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = (PETHREAD **)v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v17 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v17;
    *((_QWORD *)&v17 + 1) = v7;
    HMLockObject(v7);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess == PsGetThreadProcess(*v7[2]) )
      v15 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v7, v3) != 0 ? 0x803E0006 : 0;
    else
      v15 = -1073741790;
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v15 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v15;
}
