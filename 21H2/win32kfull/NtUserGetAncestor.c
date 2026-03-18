/*
 * XREFs of NtUserGetAncestor @ 0x1C00DE610
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetParent @ 0x1C00DE714 (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // edi
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rax

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = (__int64 *)v5;
  if ( v5 )
  {
    if ( (unsigned int)(v3 - 1) > 2 )
    {
      UserSetLastError(87LL, v6);
      goto LABEL_13;
    }
    v7 = *(_QWORD *)(v5 + 24);
    if ( !v7 )
      goto LABEL_11;
    if ( v5 == *(_QWORD *)(v7 + 104) && v3 == 4 )
    {
LABEL_12:
      v8 = *v9;
      goto LABEL_13;
    }
    v10 = *(_QWORD *)(v7 + 8);
    if ( (!v10 || v9 != *(__int64 **)(v10 + 24)) && v9 != *(__int64 **)(v7 + 104) )
    {
LABEL_11:
      if ( v9[13] )
      {
        v11 = v3 - 1;
        if ( v11 )
        {
          v13 = v11 - 1;
          if ( v13 )
          {
            v18 = v13 - 1;
            if ( v18 )
            {
              if ( v18 == 1 )
              {
                while ( v9[13] )
                {
                  DesktopWindow = GetDesktopWindow((__int64)v9);
                  if ( v21 == (__int64 *)DesktopWindow )
                    break;
                  v7 = v9[3];
                  v22 = 0LL;
                  if ( v7 )
                    v22 = *(__int64 **)(v7 + 104);
                  if ( v9 == v22 )
                    break;
                  v9 = v21;
                }
              }
            }
            else
            {
              while ( 1 )
              {
                Parent = GetParent(v9);
                if ( !Parent )
                  break;
                v9 = (__int64 *)Parent;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v14 = v9[3];
              v15 = 0LL;
              if ( v14 )
              {
                v16 = *(_QWORD *)(v14 + 8);
                if ( v16 )
                  v15 = *(_QWORD *)(v16 + 24);
              }
              v7 = v9[13];
              if ( v7 == v15 )
                break;
              v17 = 0LL;
              if ( v14 )
                v17 = *(_QWORD *)(v14 + 104);
              if ( v7 == v17 )
                break;
              v9 = (__int64 *)v9[13];
            }
          }
        }
        else
        {
          v9 = (__int64 *)v9[13];
        }
        if ( v9 )
          goto LABEL_12;
      }
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
