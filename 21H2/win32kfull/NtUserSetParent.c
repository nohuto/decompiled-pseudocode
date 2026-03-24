/*
 * XREFs of NtUserSetParent @ 0x1C0119660
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct tagWND *DesktopWindow; // rdi
  struct tagWND *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int128 v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v4;
      HMLockObject(v4);
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v13 = *(_QWORD *)(v7 + 24);
          DesktopWindow = 0LL;
          if ( v13 )
            DesktopWindow = *(struct tagWND **)(v13 + 104);
        }
        else
        {
          DesktopWindow = (struct tagWND *)ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v8);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = (struct tagWND *)GetDesktopWindow(v7);
      }
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v16;
      *((_QWORD *)&v16 + 1) = DesktopWindow;
      if ( DesktopWindow )
        HMLockObject(DesktopWindow);
      v10 = xxxSetParentWorker((struct tagWND *)v7, DesktopWindow, 0LL, 0);
      if ( v10 )
        v6 = *(_QWORD *)v10;
      ThreadUnlock1(v11);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
