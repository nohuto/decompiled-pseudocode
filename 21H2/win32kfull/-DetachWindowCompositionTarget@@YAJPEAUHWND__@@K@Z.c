/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1C00B359C
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00B3530 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C00B36BC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  PETHREAD **v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = (PETHREAD **)v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess == PsGetThreadProcess(*v6[2]) )
      v13 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v6, a2) == 0 ? 0xC0000225 : 0;
    else
      v13 = -1073741790;
    ThreadUnlock1(v11, v10, v12);
  }
  else
  {
    v13 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v13;
}
