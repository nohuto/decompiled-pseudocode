/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1C00592DC
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0059170 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C005950C (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, unsigned int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PETHREAD **v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = (PETHREAD **)v6;
  if ( v6 && (v8 = *(_QWORD *)(v6 + 40), v7 = (*(_WORD *)(v8 + 42) & 0x2FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v6;
    HMLockObject(v6);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v13, v12, v14);
    if ( CurrentProcess == PsGetThreadProcess(*v11[2]) )
      v19 = _AttachWindowCompositionTarget((struct tagWND *)v11, a2, a3);
    else
      v19 = -1073741790;
    ThreadUnlock1(v17, v16, v18);
  }
  else
  {
    v19 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v19;
}
