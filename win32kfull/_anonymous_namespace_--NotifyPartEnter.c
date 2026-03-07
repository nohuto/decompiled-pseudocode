__int64 __fastcall anonymous_namespace_::NotifyPartEnter(__int64 a1, unsigned __int16 a2)
{
  struct tagWND *TopLevelWindow; // r14
  int v5; // esi
  char v6; // di
  unsigned __int16 v7; // bx
  int WindowStateForPartNotification; // ecx
  unsigned __int16 v9; // ax
  __int64 result; // rax

  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  v5 = *(unsigned __int16 *)(gpsi + 4960LL) | (*(unsigned __int16 *)(gpsi + 4964LL) << 16);
  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) + 240LL);
  v7 = (4 * (v6 & 1)) | 1;
  if ( (v6 & 0x10) == 0 )
    v7 = 4 * (v6 & 1);
  WindowStateForPartNotification = (unsigned __int16)anonymous_namespace_::GetWindowStateForPartNotification(TopLevelWindow);
  v9 = v7 | 2;
  if ( (v6 & 4) == 0 )
    v9 = v7;
  result = anonymous_namespace_::NotifyShellSimplePayload(
             *(_QWORD *)TopLevelWindow,
             11,
             (a2 << 16) | v9 | WindowStateForPartNotification | 0x8000u,
             v5,
             0);
  if ( (_BYTE)result )
    *(_DWORD *)(a1 + 320) |= 1u;
  return result;
}
