/*
 * XREFs of FreePointerDeviceClientList @ 0x1C0077CE8
 * Callers:
 *     InitializePointerDevicesPresenceState @ 0x1C0077D60 (InitializePointerDevicesPresenceState.c)
 * Callees:
 *     <none>
 */

void __fastcall FreePointerDeviceClientList(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  _QWORD *v4; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v1 = (_QWORD **)(SGDGetUserSessionState(a1) + 16352);
  v2 = *v1;
  while ( v2 != v1 )
  {
    v3 = v2 - 2;
    v4 = v2;
    HMAssignmentUnlock(v2 - 2);
    v5 = (_QWORD *)*v2;
    v2 = v5;
    if ( (_QWORD *)v5[1] != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    Win32FreePool(v3);
  }
}
