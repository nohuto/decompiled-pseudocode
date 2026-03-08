/*
 * XREFs of NtUserSetCursor @ 0x1C003ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0042A88 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserSetCursor(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct tagCURSOR *v4; // rax
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rax

  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( a1 )
  {
    LOBYTE(v2) = 3;
    v4 = (struct tagCURSOR *)HMValidateHandle(a1, v2);
    if ( !v4 )
      goto LABEL_5;
  }
  else
  {
    v4 = 0LL;
  }
  v6 = zzzSetCursor(v4);
  if ( v6 )
    v3 = *(_QWORD *)v6;
LABEL_5:
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
