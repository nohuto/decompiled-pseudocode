/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00ECC0C
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00EC8B0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00ECD24 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v8, v7, v9);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v6 + 16)) )
      v12 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v6, a2) != 0 ? 0x803E0006 : 0;
    else
      v12 = -1073741790;
    ThreadUnlock1(v11);
  }
  else
  {
    v12 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v12;
}
