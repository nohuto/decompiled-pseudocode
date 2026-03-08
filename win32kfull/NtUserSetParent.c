/*
 * XREFs of NtUserSetParent @ 0x1C00E0420
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagWND *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *DesktopWindow; // rdi
  __int64 v11; // r8
  struct tagWND *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int128 v20; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v18;
      *((_QWORD *)&v18 + 1) = v4;
      HMLockObject(v4);
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v17 = *((_QWORD *)v7 + 3);
          DesktopWindow = 0LL;
          if ( v17 )
            DesktopWindow = *(struct tagWND **)(v17 + 104);
        }
        else
        {
          DesktopWindow = (struct tagWND *)ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v9, v8, v11);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)v7);
      }
      *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v20;
      *((_QWORD *)&v20 + 1) = DesktopWindow;
      if ( DesktopWindow )
        HMLockObject(DesktopWindow);
      v12 = xxxSetParentWorker(v7, DesktopWindow, 0LL, 0);
      if ( v12 )
        v6 = *(_QWORD *)v12;
      ThreadUnlock1(v14, v13, v15);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
