/*
 * XREFs of NtUserGetAppImeLevel @ 0x1C01CFE90
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int Prop; // ebx
  __int64 v10; // rdi
  struct tagTHREADINFO *v11; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  Prop = 0;
  v10 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      v11 = PtiCurrentShared(gpsi, v5, v7, v8);
      v6 = *(_QWORD *)(v10 + 16);
      if ( *(_QWORD *)(v6 + 424) == *((_QWORD *)v11 + 53) )
        Prop = GetProp(v10, (unsigned __int16)atomImeLevel, 1LL, v8);
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return Prop;
}
