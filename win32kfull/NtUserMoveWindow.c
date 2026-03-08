/*
 * XREFs of NtUserMoveWindow @ 0x1C0025910
 * Callers:
 *     <none>
 * Callees:
 *     xxxMoveWindow @ 0x1C0025A90 (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  struct tagWND *v13; // r13
  int v14; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h]
  int v24; // [rsp+50h] [rbp-10h]
  int v25; // [rsp+54h] [rbp-Ch]

  v21 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = (struct tagWND *)v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v20;
      *((_QWORD *)&v20 + 1) = v10;
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
      if ( a5 < 0 )
      {
        v14 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v14 = 0x7FFF;
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(4294934528LL);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v13, CurrentThreadDpiAwarenessContext) )
      {
        v22 = a2;
        v24 = a4 + a2;
        v23 = a3;
        v25 = a3 + v14;
        TransformRectBetweenCoordinateSpaces(&v22, &v22, v13, 0LL);
        v14 = v25 - v23;
      }
      v12 = xxxMoveWindow(v13, v14, a6);
      ThreadUnlock1(v17, v16, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
