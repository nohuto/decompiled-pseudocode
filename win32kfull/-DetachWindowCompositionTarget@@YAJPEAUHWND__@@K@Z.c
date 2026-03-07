__int64 __fastcall DetachWindowCompositionTarget(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  PETHREAD **v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = (PETHREAD **)v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v8, v7, v9);
    if ( CurrentProcess == PsGetThreadProcess(*v6[2]) )
      v14 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v6, a2) == 0 ? 0xC0000225 : 0;
    else
      v14 = -1073741790;
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    v14 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v14;
}
