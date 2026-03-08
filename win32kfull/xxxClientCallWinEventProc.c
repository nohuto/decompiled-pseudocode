/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C00636F8
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0063218 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  bool v5; // bl
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+5Ch] [rbp-1Ch]
  int v18; // [rsp+60h] [rbp-18h]
  int v19; // [rsp+64h] [rbp-14h]
  int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  __int64 v22; // [rsp+90h] [rbp+18h]

  v21 = 0LL;
  v20 = 0;
  v14 = 0;
  v12[0] = a1;
  if ( a2 )
    v3 = *a2;
  else
    v3 = 0LL;
  v12[1] = v3;
  v15 = *(_QWORD *)(a3 + 32);
  v13 = *(_DWORD *)(a3 + 28);
  v16 = *(_DWORD *)(a3 + 40);
  v17 = *(_DWORD *)(a3 + 44);
  v18 = *(_DWORD *)(a3 + 48);
  v19 = *(_DWORD *)(a3 + 52);
  v5 = !IS_USERCRIT_OWNED_EXCLUSIVE(a1) && IS_USERCRIT_OWNED_AT_ALL(v4);
  UserSessionSwitchLeaveCrit(v4);
  EtwTraceBeginCallback(88LL);
  v6 = KeUserModeCallback(88LL, v12, 48LL, &v21, &v20);
  EtwTraceEndCallback(88LL);
  if ( v5 )
    EnterSharedCrit(v8, v7, v9);
  else
    EnterCrit(0LL, 0LL);
  if ( v6 < 0 || v20 != 24 )
    return 0LL;
  v10 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  result = *v10;
  v22 = *v10;
  return result;
}
