/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x140829550
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1408197EC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopHardDiskPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r9
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // eax
  __int64 v29; // rcx
  _OWORD v30[15]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v30, 0, 0xE8uLL);
  v7 = *a1;
  v8 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v8 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( v8 )
  {
    v29 = *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 - v7;
    if ( *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 == v7 )
      v29 = *(_QWORD *)GUID_DISK_BURST_IGNORE_THRESHOLD.Data4 - a1[1];
    if ( !v29 && a3 == 4 && a2 )
    {
      dword_140C3D4A4 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock(v6);
  v9 = *((_OWORD *)PopPolicy + 1);
  v30[0] = *(_OWORD *)PopPolicy;
  v10 = *((_OWORD *)PopPolicy + 2);
  v30[1] = v9;
  v11 = *((_OWORD *)PopPolicy + 3);
  v30[2] = v10;
  v12 = *((_OWORD *)PopPolicy + 4);
  v30[3] = v11;
  v13 = *((_OWORD *)PopPolicy + 5);
  v30[4] = v12;
  v14 = *((_OWORD *)PopPolicy + 6);
  v30[5] = v13;
  v30[6] = v14;
  v15 = &v30[8];
  v30[7] = *((_OWORD *)PopPolicy + 7);
  v16 = *((_OWORD *)PopPolicy + 9);
  v30[8] = *((_OWORD *)PopPolicy + 8);
  v17 = *((_OWORD *)PopPolicy + 10);
  v30[9] = v16;
  v18 = *((_OWORD *)PopPolicy + 11);
  v30[10] = v17;
  v19 = *((_OWORD *)PopPolicy + 12);
  v30[11] = v18;
  v20 = *((_OWORD *)PopPolicy + 13);
  v21 = *((_QWORD *)PopPolicy + 28);
  v30[12] = v19;
  v30[13] = v20;
  *(_QWORD *)&v30[14] = v21;
  LOBYTE(v15) = 1;
  DWORD1(v30[13]) = *a2;
  v22 = PopApplyPolicy(v15, 0LL, v30, 232LL);
  v25 = 0xFFFFFFFFLL;
  v26 = v22;
  v27 = 1000 * *a2;
  if ( !v27 )
    v27 = -1;
  if ( v27 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v27;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock(v25, v23, v24);
  if ( v26 >= 0 )
    return 0;
  return (unsigned int)v26;
}
