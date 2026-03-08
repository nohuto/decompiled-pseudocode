/*
 * XREFs of _RegisterPointerDeviceNotifications @ 0x1C00F2894
 * Callers:
 *     NtUserRegisterPointerDeviceNotifications @ 0x1C00F27B0 (NtUserRegisterPointerDeviceNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPointerDeviceNotifications(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 *v9; // rax
  __int64 **v10; // rcx
  _QWORD *v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v5 = SGDGetUserSessionState(a1) + 16352;
  v6 = *(_QWORD **)v5;
  while ( v6 != (_QWORD *)v5 )
  {
    v12 = v6 - 2;
    v6 = (_QWORD *)*v6;
    if ( *v12 == a1 )
      return v2;
  }
  v7 = (_QWORD *)Win32AllocPoolZInit(32LL, 2020635477LL);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    v13[0] = v7;
    v13[1] = a1;
    HMAssignmentLock(v13, 0LL);
    *((_DWORD *)v8 + 2) = a2;
    v9 = v8 + 2;
    v10 = *(__int64 ***)(v5 + 8);
    if ( *v10 != (__int64 *)v5 )
      __fastfail(3u);
    *v9 = v5;
    v2 = 1;
    v8[3] = v10;
    *v10 = v9;
    *(_QWORD *)(v5 + 8) = v9;
  }
  return v2;
}
