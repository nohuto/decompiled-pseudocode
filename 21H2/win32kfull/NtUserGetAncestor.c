/*
 * XREFs of NtUserGetAncestor @ 0x1C00D3650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00D3774 (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r9
  __int64 v12; // rdx
  int v13; // edi
  int v15; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = (__int64 *)ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_28;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    UserSetLastError(87LL, v4, (__int64)v6);
LABEL_28:
    v8 = 0LL;
    goto LABEL_27;
  }
  v7 = v6[3];
  v8 = 0LL;
  v5 = 0LL;
  if ( v7 )
    v5 = *(__int64 **)(v7 + 104);
  if ( v6 == v5 && a2 == 4 )
    goto LABEL_25;
  v5 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      v5 = *(__int64 **)(v9 + 24);
  }
  if ( v6 != v5 )
  {
    v5 = 0LL;
    if ( v7 )
      v5 = *(__int64 **)(v7 + 104);
    if ( v6 != v5 && v6[13] )
    {
      if ( a2 == 2 )
      {
        while ( 1 )
        {
          v10 = v6[3];
          v5 = 0LL;
          v11 = (__int64 *)v6[13];
          if ( v10 )
          {
            v12 = *(_QWORD *)(v10 + 8);
            if ( v12 )
              v5 = *(__int64 **)(v12 + 24);
          }
          if ( v11 == v5 )
            break;
          v5 = 0LL;
          if ( v10 )
            v5 = *(__int64 **)(v10 + 104);
          if ( v11 == v5 )
            break;
          v6 = (__int64 *)v6[13];
        }
      }
      else
      {
        v13 = a2 - 1;
        if ( v13 )
        {
          v15 = v13 - 2;
          if ( v15 )
          {
            if ( v15 == 1 )
            {
              while ( v6[13] )
              {
                DesktopWindow = GetDesktopWindow((__int64)v6);
                if ( v18 == (__int64 *)DesktopWindow )
                  break;
                v5 = (__int64 *)v6[3];
                v19 = 0LL;
                if ( v5 )
                  v19 = (__int64 *)v5[13];
                if ( v6 == v19 )
                  break;
                v6 = v18;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              Parent = GetParent(v6);
              if ( !Parent )
                break;
              v6 = (__int64 *)Parent;
            }
          }
        }
        else
        {
          v6 = (__int64 *)v6[13];
        }
      }
LABEL_25:
      if ( v6 )
        v8 = *v6;
    }
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v5);
  return v8;
}
