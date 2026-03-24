/*
 * XREFs of ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00D796C
 * Callers:
 *     CleanupIAMAccess @ 0x1C00D78F0 (CleanupIAMAccess.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00D7884 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00DAB90 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C0240054 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 */

void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *this)
{
  struct tagWND *v2; // r8
  struct tagDESKTOP *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct tagDESKTOP *v7; // rsi
  struct tagDESKTOP **v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 36) )
  {
    *((_QWORD *)this + 36) = 0LL;
    HMAssignmentUnlock((char *)this + 296);
    HMAssignmentUnlock((char *)this + 304);
    v3 = (struct tagDESKTOP *)*((_QWORD *)this + 39);
    if ( v3 )
    {
      while ( v3 != (struct tagDESKTOP *)((char *)this + 312) )
      {
        v6 = *(_QWORD *)v3;
        v7 = v3;
        v3 = (struct tagDESKTOP *)v6;
        if ( *(struct tagDESKTOP **)(v6 + 8) != v7 || (v8 = (struct tagDESKTOP **)*((_QWORD *)v7 + 1), *v8 != v7) )
          __fastfail(3u);
        *v8 = (struct tagDESKTOP *)v6;
        *(_QWORD *)(v6 + 8) = v8;
        HMAssignmentUnlock((char *)v7 + 16);
        Win32FreePool(v7);
      }
    }
    ShellWindowManagement::SetWindow(this, 0LL, v2);
    v4 = ***((_QWORD ***)this + 1);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
    if ( (unsigned __int8)anonymous_namespace_::GroupManagementEnabledForDesktop(v4) )
      CWindowGroupManager::Cleanup(v5, 1LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  }
}
