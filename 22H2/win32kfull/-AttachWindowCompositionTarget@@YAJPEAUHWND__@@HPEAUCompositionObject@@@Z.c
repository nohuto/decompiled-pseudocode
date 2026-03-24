/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C00EC9F4
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00EC8B0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00ECB14 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( v6 && (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9, v11);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v8 + 16)) )
      v14 = _AttachWindowCompositionTarget((struct tagWND *)v8, a2, a3);
    else
      v14 = -1073741790;
    ThreadUnlock1(v13);
  }
  else
  {
    v14 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v14;
}
