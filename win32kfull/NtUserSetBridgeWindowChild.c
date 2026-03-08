/*
 * XREFs of NtUserSetBridgeWindowChild @ 0x1C01DB5C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     ValidateHwndIAM @ 0x1C009A070 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F4014 (xxxSetBridgeWindowChild.c)
 */

__int64 __fastcall NtUserSetBridgeWindowChild(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  struct tagWND *v7; // rsi
  __int64 v8; // rax
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v20[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 0LL);
  LOBYTE(v4) = IAMThreadAccessGranted(gptiCurrent);
  v5 = 0;
  if ( !v4 )
  {
    v6 = 5;
LABEL_12:
    UserSetLastError(v6);
    goto LABEL_13;
  }
  v7 = (struct tagWND *)ValidateHwndIAM(a1);
  if ( !v7
    || (v8 = ValidateHwndIAM(a2), (v9 = (struct tagWND *)v8) == 0LL)
    || (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 232LL) & 0x40) == 0
    || !IsTopLevelWindow(v8)
    || !IsTopLevelWindow((__int64)v7)
    || (v10 = *((_QWORD *)v7 + 5), (*(_BYTE *)(v10 + 232) & 0x40) != 0)
    || (*(_BYTE *)(v10 + 31) & 8) != 0 )
  {
    v6 = 87;
    goto LABEL_12;
  }
  v19[2] = 0LL;
  v20[2] = 0LL;
  v19[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v19;
  v19[1] = v7;
  HMLockObject(v7);
  v20[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v20;
  v20[1] = v9;
  HMLockObject(v9);
  v5 = xxxSetBridgeWindowChild(v7, v9);
  ThreadUnlock1(v12, v11, v13);
  ThreadUnlock1(v15, v14, v16);
LABEL_13:
  UserSessionSwitchLeaveCrit(v17);
  return v5;
}
