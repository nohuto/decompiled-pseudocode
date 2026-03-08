/*
 * XREFs of NtUserGetAncestor @ 0x1C00C84D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00C85CC (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // r8
  __int64 v9; // rax
  int v10; // edi
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rax

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (__int64 *)v5;
  if ( v5 )
  {
    if ( (unsigned int)(v3 - 1) > 2 )
    {
      UserSetLastError(87);
      goto LABEL_13;
    }
    v6 = *(_QWORD *)(v5 + 24);
    if ( !v6 )
      goto LABEL_11;
    if ( v5 == *(_QWORD *)(v6 + 104) && v3 == 4 )
    {
LABEL_12:
      v7 = *v8;
      goto LABEL_13;
    }
    v9 = *(_QWORD *)(v6 + 8);
    if ( (!v9 || v8 != *(__int64 **)(v9 + 24)) && v8 != *(__int64 **)(v6 + 104) )
    {
LABEL_11:
      if ( v8[13] )
      {
        v10 = v3 - 1;
        if ( v10 )
        {
          v12 = v10 - 1;
          if ( v12 )
          {
            v17 = v12 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                while ( v8[13] )
                {
                  DesktopWindow = GetDesktopWindow((__int64)v8);
                  if ( v20 == (__int64 *)DesktopWindow )
                    break;
                  v6 = v8[3];
                  v21 = 0LL;
                  if ( v6 )
                    v21 = *(__int64 **)(v6 + 104);
                  if ( v8 == v21 )
                    break;
                  v8 = v20;
                }
              }
            }
            else
            {
              while ( 1 )
              {
                Parent = GetParent(v8);
                if ( !Parent )
                  break;
                v8 = (__int64 *)Parent;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v13 = v8[3];
              v14 = 0LL;
              if ( v13 )
              {
                v15 = *(_QWORD *)(v13 + 8);
                if ( v15 )
                  v14 = *(_QWORD *)(v15 + 24);
              }
              v6 = v8[13];
              if ( v6 == v14 )
                break;
              v16 = 0LL;
              if ( v13 )
                v16 = *(_QWORD *)(v13 + 104);
              if ( v6 == v16 )
                break;
              v8 = (__int64 *)v8[13];
            }
          }
        }
        else
        {
          v8 = (__int64 *)v8[13];
        }
        if ( v8 )
          goto LABEL_12;
      }
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
