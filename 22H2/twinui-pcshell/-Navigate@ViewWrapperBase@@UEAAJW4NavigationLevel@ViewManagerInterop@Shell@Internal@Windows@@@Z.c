/*
 * XREFs of ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18033F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18033E29C (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18033FCB4 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::Navigate(__int64 a1, int a2)
{
  int v4; // esi
  int v5; // r14d
  RTL_SRWLOCK *v6; // rdi
  HWND v7; // rbp
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 4;
  v5 = 4;
  if ( a2 != 5 )
    v5 = a2;
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
  AcquireSRWLockExclusive(v6);
  v7 = *(HWND *)(a1 + 264);
  v8 = *(_DWORD *)(a1 + 280);
  if ( v5 != v8 )
  {
    if ( !v8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D1,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)0x8007139FLL);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return 2147947423LL;
    }
    *(_DWORD *)(a1 + 280) = v5;
    if ( (*(_BYTE *)(a1 + 456) & 4) == 0 )
    {
      if ( (unsigned int)(v5 - 4) > 1 )
        v4 = 2;
      if ( v4 != ((*(unsigned __int16 *)(a1 + 348) >> 1) & 7) )
      {
        *(_WORD *)(a1 + 348) = (2 * v4) | *(_WORD *)(a1 + 348) & 0xFFF1;
        ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
      }
    }
    ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( a2 == 5 && v7 )
    SetForegroundWindow(v7);
  return 0LL;
}
