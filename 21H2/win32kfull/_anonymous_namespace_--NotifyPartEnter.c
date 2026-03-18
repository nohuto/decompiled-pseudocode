/*
 * XREFs of _anonymous_namespace_::NotifyPartEnter @ 0x1C0236504
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C007E9B8 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C00F4DAC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

bool __fastcall anonymous_namespace_::NotifyPartEnter(__int64 a1, unsigned __int16 a2)
{
  const struct tagWND *TopLevelWindow; // rdi
  __int64 v5; // r12
  char v6; // r8
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // r14
  __int64 v10; // rsi
  bool result; // al

  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
  v5 = *(unsigned __int16 *)(gpsi + 4960LL) | (*(unsigned __int16 *)(gpsi + 4964LL) << 16);
  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) + 232LL);
  v7 = (4 * (v6 & 1)) | 1;
  v8 = 0;
  if ( (v6 & 0x10) == 0 )
    v7 = 4 * (v6 & 1);
  v9 = v7 | 2;
  if ( (v6 & 4) == 0 )
    v9 = v7;
  if ( gpqForeground )
  {
    v10 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v10 )
    {
      if ( v10 == GetTopLevelWindow((__int64)TopLevelWindow) )
        v8 = 16;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)TopLevelWindow + 5) + 31LL) & 1) != 0 )
  {
    v8 |= 0x40u;
  }
  else if ( IsSemiMaximized(TopLevelWindow) )
  {
    v8 |= 0x20u;
  }
  result = anonymous_namespace_::NotifyShellSimplePayload(
             *(_QWORD *)TopLevelWindow,
             11,
             v8 | v9 | (a2 << 16) | 0x8000,
             v5);
  if ( result )
    *(_DWORD *)(a1 + 320) |= 1u;
  return result;
}
