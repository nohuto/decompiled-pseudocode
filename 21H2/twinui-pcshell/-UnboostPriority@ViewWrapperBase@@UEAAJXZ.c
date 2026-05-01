/*
 * XREFs of ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180342510
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x1803188F4 (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 *     ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x18033C450 (--$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18033E56C (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::UnboostPriority(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rdi
  bool v3; // al
  char v4; // si
  __int16 v5; // dx
  unsigned int v6; // ecx
  int v7; // esi
  char v9; // [rsp+30h] [rbp+8h] BYREF
  bool v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 18) + 280LL);
  AcquireSRWLockExclusive(v2);
  v3 = (*((_DWORD *)this + 18) & 0x40) != 0;
  v9 = 0;
  v10 = v3;
  ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>((int *)this + 31, &v10, &v9);
  v4 = *((_DWORD *)this + 18);
  v5 = *((_WORD *)this + 166);
  v6 = *((_DWORD *)this + 18) & 0xFFFFFFBF;
  *((_DWORD *)this + 18) = v6;
  v7 = v4 & 0x40;
  if ( (v5 & 0xC0) == 0xC0 && (v6 & 0x100) == 0 )
  {
    *((_WORD *)this + 166) = v5 & 0xFFBF;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)((char *)this - 24));
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v7 )
    ViewEventDispatcher::UnboostShellPriority(*((RTL_SRWLOCK **)this + 18));
  return 0LL;
}
