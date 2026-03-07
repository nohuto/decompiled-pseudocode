__int64 __fastcall TestWindowForCompositionTarget(HWND a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  PETHREAD **v7; // rdi
  struct tagTHREADINFO *v8; // rax
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
  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = (PETHREAD **)v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v8 = PtiCurrentShared(v6);
    *(_QWORD *)&v18 = *((_QWORD *)v8 + 52);
    *((_QWORD *)v8 + 52) = &v18;
    *((_QWORD *)&v18 + 1) = v7;
    HMLockObject(v7);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9, v11);
    if ( CurrentProcess == PsGetThreadProcess(*v7[2]) )
      v16 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v7, v3) != 0 ? 0x803E0006 : 0;
    else
      v16 = -1073741790;
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    v16 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v16;
}
