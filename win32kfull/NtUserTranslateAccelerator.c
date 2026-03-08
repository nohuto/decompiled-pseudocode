/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C000BAD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxTranslateAccelerator @ 0x1C000BC34 (xxxTranslateAccelerator.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  struct tagWND *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int128 v11; // [rsp+28h] [rbp-70h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+58h] [rbp-40h]
  __int128 v16; // [rsp+68h] [rbp-30h]
  __int128 v17; // [rsp+78h] [rbp-20h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v15 = *a3;
  v16 = a3[1];
  v17 = a3[2];
  v7 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    LOBYTE(v6) = 8;
    v9 = HMValidateHandle(a2, v6);
    if ( v9 )
    {
      *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v11;
      *((_QWORD *)&v11 + 1) = v7;
      HMLockObject(v7);
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v9;
      HMLockObject(v9);
      v8 = xxxTranslateAccelerator(v7);
      ThreadUnlock1();
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
