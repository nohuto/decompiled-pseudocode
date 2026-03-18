/*
 * XREFs of NtUserMoveWindow @ 0x1C00F9EB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxMoveWindow @ 0x1C00FA07C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  struct tagWND *v13; // r13
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+48h] [rbp-18h] BYREF
  int v25; // [rsp+4Ch] [rbp-14h]
  int v26; // [rsp+50h] [rbp-10h]
  int v27; // [rsp+54h] [rbp-Ch]

  v23 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = (struct tagWND *)v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      *((_QWORD *)&v22 + 1) = v10;
      HMLockObject(v10);
      if ( a2 > 0x7FFF )
      {
        a2 = 0x7FFF;
      }
      else if ( a2 < -32768 )
      {
        a2 = -32768;
      }
      if ( a3 > 0x7FFF )
      {
        a3 = 0x7FFF;
      }
      else if ( a3 < -32768 )
      {
        a3 = -32768;
      }
      if ( a4 < 0 )
      {
        a4 = 0;
      }
      else if ( a4 > 0x7FFF )
      {
        a4 = 0x7FFF;
      }
      v14 = a5;
      if ( a5 >= 0 )
      {
        if ( a5 > 0x7FFF )
          v14 = 0x7FFF;
        v12 = v14;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v16 + 224) & 0x20) == 0 )
        {
          v17 = *(_DWORD *)(*((_QWORD *)v13 + 5) + 288LL);
          if ( (((unsigned __int16)(v17 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v16,
                                                                                   v15) >> 8)) & 0x1FF) != 0 )
          {
            v24 = a2;
            v26 = a4 + a2;
            v25 = a3;
            v27 = a3 + v12;
            TransformRectBetweenCoordinateSpaces(&v24, &v24, v13, 0LL);
            v12 = v27 - v25;
          }
        }
      }
      v12 = xxxMoveWindow(v13, v12, a6);
      ThreadUnlock1(v19, v18, v20);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
