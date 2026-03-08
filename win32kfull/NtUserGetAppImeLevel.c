/*
 * XREFs of NtUserGetAppImeLevel @ 0x1C01D0EE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int Prop; // ebx
  __int64 v7; // rdi
  struct tagTHREADINFO *v8; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  Prop = 0;
  v7 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      v8 = PtiCurrentShared(gpsi);
      v5 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)(v5 + 424) == *((_QWORD *)v8 + 53) )
        Prop = GetProp(v7, (unsigned __int16)atomImeLevel, 1u);
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return Prop;
}
