/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C01FE4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0024D48 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01D3F74 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  struct tagCURSOR *v12; // rcx
  struct tagCURSOR *v13; // r9

  EnterCrit(0LL, 1LL);
  v8 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  v10 = HMValidateHandle(a1, 3u);
  if ( v10 )
  {
    v11 = HMValidateHandle(a2, 3u);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v10 + 80) & 0x1800) == 0
        && *(_QWORD *)(v11 + 48) == v11
        && !FindDPICursor((struct tagCURSOR *)v10, a3) )
      {
        LinkDpiCursor(v12, v13, a3);
        v8 = 1LL;
        goto LABEL_10;
      }
LABEL_9:
      UserSetLastError(87LL, v6, v7);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
