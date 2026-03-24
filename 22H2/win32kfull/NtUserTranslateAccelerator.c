/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C010AF90
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     xxxTranslateAccelerator @ 0x1C010B0F8 (xxxTranslateAccelerator.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, unsigned __int64 a2, __int128 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h]
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]
  __int128 v17; // [rsp+58h] [rbp-40h]
  __int128 v18; // [rsp+68h] [rbp-30h]
  __int128 v19; // [rsp+78h] [rbp-20h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  v7 = ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = HMValidateHandle(a2, 8u);
    if ( v9 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v7;
      HMLockObject(v7);
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v9;
      HMLockObject(v9);
      v8 = xxxTranslateAccelerator(v7);
      ThreadUnlock1(v10);
      ThreadUnlock1(v11);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
