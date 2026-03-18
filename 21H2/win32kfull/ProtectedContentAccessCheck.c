/*
 * XREFs of ProtectedContentAccessCheck @ 0x1C0075B9C
 * Callers:
 *     ValidateNewParent @ 0x1C0075A78 (ValidateNewParent.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     IsWindowContentProtected @ 0x1C0077D48 (IsWindowContentProtected.c)
 */

_BOOL8 __fastcall ProtectedContentAccessCheck(__int64 a1)
{
  __int64 TopLevelWindow; // rax
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax

  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = TopLevelWindow;
  if ( !TopLevelWindow || !(unsigned int)IsWindowContentProtected(TopLevelWindow) )
    return 1LL;
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_QWORD *)(v3 + 16);
  v7 = *(_QWORD *)(v6 + 424);
  if ( *(char *)(v5 + 232) < 0 )
  {
    v8 = *(_QWORD *)(v6 + 1400);
    if ( v8 )
      v7 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL);
  }
  return v7 == PsGetCurrentProcessWin32Process(v5)
      || *(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL)
      && (*(_DWORD *)(gptiCurrent + 1256LL) & 0x40000) != 0;
}
