/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x140793630
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14079105C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopHardDiskPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // eax
  _OWORD v27[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v28[5]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v29; // [rsp+F0h] [rbp-28h]
  __int64 v30; // [rsp+100h] [rbp-18h]

  v4 = *a1;
  v6 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( v6 )
  {
    v7 = *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 - v4;
    if ( *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 == v4 )
      v7 = *(_QWORD *)GUID_DISK_BURST_IGNORE_THRESHOLD.Data4 - a1[1];
    if ( !v7 && a3 == 4 && a2 )
    {
      dword_140C23344 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v27[0] = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v27[1] = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v27[2] = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v27[3] = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v27[4] = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v27[5] = v12;
  v27[6] = v13;
  v14 = v28;
  v27[7] = *((_OWORD *)PopPolicy + 7);
  v15 = *((_OWORD *)PopPolicy + 9);
  v28[0] = *((_OWORD *)PopPolicy + 8);
  v16 = *((_OWORD *)PopPolicy + 10);
  v28[1] = v15;
  v17 = *((_OWORD *)PopPolicy + 11);
  v28[2] = v16;
  v18 = *((_OWORD *)PopPolicy + 12);
  v28[3] = v17;
  v19 = *((_OWORD *)PopPolicy + 13);
  v20 = *((_QWORD *)PopPolicy + 28);
  v28[4] = v18;
  v29 = v19;
  v30 = v20;
  LOBYTE(v14) = 1;
  DWORD1(v29) = *a2;
  v21 = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _OWORD *, __int64))PopApplyPolicy)(v14, 0LL, v27, 232LL);
  v23 = 0xFFFFFFFFLL;
  v24 = v21;
  v25 = 1000 * *a2;
  if ( !v25 )
    v25 = -1;
  if ( v25 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v25;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock(v23, v22);
  if ( v24 >= 0 )
    return 0;
  return (unsigned int)v24;
}
