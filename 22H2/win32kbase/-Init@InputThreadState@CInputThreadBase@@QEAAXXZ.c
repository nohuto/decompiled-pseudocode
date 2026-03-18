/*
 * XREFs of ?Init@InputThreadState@CInputThreadBase@@QEAAXXZ @ 0x1C0084B28
 * Callers:
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C0084A30 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall CInputThreadBase::InputThreadState::Init(CInputThreadBase::InputThreadState *this)
{
  struct tagTHREADINFO *v2; // rax
  __int64 CurrentThreadWin32Thread; // rax

  v2 = PtiCurrentShared();
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 2) = *(_QWORD *)v2;
  *((_DWORD *)this + 6) = (unsigned int)PsGetCurrentThreadId();
  *(_DWORD *)this = 1;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    *(_DWORD *)(CurrentThreadWin32Thread + 44) |= 2u;
}
