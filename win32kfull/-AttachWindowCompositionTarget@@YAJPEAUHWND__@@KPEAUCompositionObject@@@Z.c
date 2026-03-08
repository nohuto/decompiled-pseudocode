/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1C007D8CC
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C007D760 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C007DAFC (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, unsigned int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  PETHREAD **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = (PETHREAD **)v6;
  if ( v6 && (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v6;
    HMLockObject(v6);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9, v11);
    if ( CurrentProcess == PsGetThreadProcess(*v8[2]) )
      v16 = _AttachWindowCompositionTarget((struct tagWND *)v8, a2, a3);
    else
      v16 = -1073741790;
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    v16 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v16;
}
