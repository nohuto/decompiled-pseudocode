void __fastcall CInputThreadBase::InputThreadState::Init(
        CInputThreadBase::InputThreadState *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // [rsp+20h] [rbp-8h]

  v5 = PtiCurrentShared((__int64)this, a2, a3, a4);
  *((_QWORD *)this + 1) = v5;
  *((_QWORD *)this + 2) = *(_QWORD *)v5;
  *((_DWORD *)this + 6) = (unsigned int)PsGetCurrentThreadId();
  *(_DWORD *)this = 1;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6, v8, v9, v11);
  if ( CurrentThreadWin32Thread )
    *(_DWORD *)(CurrentThreadWin32Thread + 44) |= 2u;
}
