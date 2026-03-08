/*
 * XREFs of _GetAncestor @ 0x1C00EA498
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C003B404 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00EA2E0 (NtUserShutdownBlockReasonCreate.c)
 *     HasMessageRootWindow @ 0x1C01F3EF8 (HasMessageRootWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00C85CC (_GetParent.c)
 */

_QWORD *__fastcall GetAncestor(__int64 a1, int a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  _QWORD *v4; // r8
  __int64 DesktopWindow; // rax
  int v6; // edx
  __int64 v7; // r10
  _QWORD *v8; // rax
  int v9; // edx
  int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  int v14; // edx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 Parent; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = (_QWORD *)a1;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 104);
  if ( a1 == v3 && a2 == 4 )
    return v4;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v4 != (_QWORD *)DesktopWindow )
  {
    v8 = 0LL;
    if ( v7 )
      v8 = *(_QWORD **)(v7 + 104);
    if ( v4 != v8 && v4[13] )
    {
      v9 = v6 - 1;
      if ( !v9 )
        return (_QWORD *)v4[13];
      v11 = v9 - 1;
      if ( v11 )
      {
        v14 = v11 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            while ( v4[13] )
            {
              v15 = GetDesktopWindow((__int64)v4);
              if ( v16 == (_QWORD *)v15 )
                break;
              v17 = v4[3];
              v18 = 0LL;
              if ( v17 )
                v18 = *(_QWORD **)(v17 + 104);
              if ( v4 == v18 )
                break;
              v4 = v16;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            Parent = GetParent(v4);
            if ( !Parent )
              break;
            v4 = (_QWORD *)Parent;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = GetDesktopWindow((__int64)v4);
          if ( v13 == (_QWORD *)v12 )
            break;
          v20 = v4[3];
          v21 = 0LL;
          if ( v20 )
            v21 = *(_QWORD **)(v20 + 104);
          if ( v13 == v21 )
            break;
          v4 = v13;
        }
      }
      return v4;
    }
  }
  return 0LL;
}
