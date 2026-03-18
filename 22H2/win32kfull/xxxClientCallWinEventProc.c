/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C00E8294
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C00E7CDC (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // bl
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 result; // rax
  _QWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]
  __int64 v18; // [rsp+50h] [rbp-28h]
  int v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+5Ch] [rbp-1Ch]
  int v21; // [rsp+60h] [rbp-18h]
  int v22; // [rsp+64h] [rbp-14h]
  int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+18h]

  v24 = 0LL;
  v23 = 0;
  v17 = 0;
  v15[0] = a1;
  if ( a2 )
    v3 = *a2;
  else
    v3 = 0LL;
  v15[1] = v3;
  v18 = *(_QWORD *)(a3 + 32);
  v16 = *(_DWORD *)(a3 + 28);
  v19 = *(_DWORD *)(a3 + 40);
  v20 = *(_DWORD *)(a3 + 44);
  v21 = *(_DWORD *)(a3 + 48);
  v22 = *(_DWORD *)(a3 + 52);
  v8 = !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  EtwTraceBeginCallback(88LL);
  v9 = KeUserModeCallback(88LL, v15, 48LL, &v24, &v23);
  EtwTraceEndCallback(88LL);
  if ( v8 )
    EnterSharedCrit(v11, v10, v12);
  else
    EnterCrit(0LL, 0LL);
  if ( v9 < 0 || v23 != 24 )
    return 0LL;
  v13 = (__int64 *)v24;
  if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  result = *v13;
  v25 = *v13;
  return result;
}
