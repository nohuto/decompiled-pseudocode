__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  struct tagCURSOR *v10; // rcx
  struct tagCURSOR *v11; // r9

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  v8 = HMValidateHandle(a1, 3u);
  if ( v8 )
  {
    v9 = HMValidateHandle(a2, 3u);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v8 + 80) & 0x1800) == 0
        && *(_QWORD *)(v9 + 48) == v9
        && !FindDPICursor((struct tagCURSOR *)v8, a3) )
      {
        LinkDpiCursor(v10, v11, a3);
        v6 = 1LL;
        goto LABEL_10;
      }
LABEL_9:
      UserSetLastError(87);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
