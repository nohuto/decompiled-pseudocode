/*
 * XREFs of IsModelessMenuNotificationWindow @ 0x1C00DCD20
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00DCB94 (xxxDWP_DoNCActivate.c)
 *     GetActiveTrackPwnd @ 0x1C01E1C6C (GetActiveTrackPwnd.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x1C00DCD44 (GetpwndNotifypMenuState.c)
 */

__int64 __fastcall IsModelessMenuNotificationWindow(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = GetpwndNotifypMenuState(a1);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 8) & 0x100) != 0;
  return v2;
}
