/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x14085FC80
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x1408194D8 (PopApplyPolicy.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14083248C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
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
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // eax
  _OWORD v26[13]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-28h]
  __int64 v28; // [rsp+100h] [rbp-18h]

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
      dword_140C232E4 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v26[0] = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v26[1] = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v26[2] = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v26[3] = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v26[4] = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v26[5] = v12;
  v26[6] = v13;
  v26[7] = *((_OWORD *)PopPolicy + 7);
  v14 = *((_OWORD *)PopPolicy + 9);
  v26[8] = *((_OWORD *)PopPolicy + 8);
  v15 = *((_OWORD *)PopPolicy + 10);
  v26[9] = v14;
  v16 = *((_OWORD *)PopPolicy + 11);
  v26[10] = v15;
  v17 = *((_OWORD *)PopPolicy + 12);
  v26[11] = v16;
  v18 = *((_OWORD *)PopPolicy + 13);
  v19 = *((_QWORD *)PopPolicy + 28);
  v26[12] = v17;
  v27 = v18;
  v28 = v19;
  DWORD1(v27) = *a2;
  v20 = PopApplyPolicy(1, 0, v26, 0xE8u);
  v22 = 0xFFFFFFFFLL;
  v23 = v20;
  v24 = 1000 * *a2;
  if ( !v24 )
    v24 = -1;
  if ( v24 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v24;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock(v22, v21);
  if ( v23 >= 0 )
    return 0;
  return (unsigned int)v23;
}
