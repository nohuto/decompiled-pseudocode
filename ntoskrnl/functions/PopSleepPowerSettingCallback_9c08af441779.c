__int64 __fastcall PopSleepPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  int v6; // esi
  __int64 v7; // r8
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
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v28; // eax
  _OWORD v29[3]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+50h] [rbp-C8h]
  __int128 v31; // [rsp+60h] [rbp-B8h]
  __int128 v32; // [rsp+70h] [rbp-A8h]
  __int128 v33; // [rsp+80h] [rbp-98h]
  __int128 v34; // [rsp+90h] [rbp-88h]
  __int128 v35; // [rsp+A0h] [rbp-78h]
  __int128 v36; // [rsp+B0h] [rbp-68h]
  __int128 v37; // [rsp+C0h] [rbp-58h]
  __int128 v38; // [rsp+D0h] [rbp-48h]
  __int128 v39; // [rsp+E0h] [rbp-38h]
  __int128 v40; // [rsp+F0h] [rbp-28h]
  __int64 v41; // [rsp+100h] [rbp-18h]

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v29[0] = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v29[1] = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v29[2] = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v30 = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v31 = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v32 = v12;
  v33 = v13;
  v34 = *((_OWORD *)PopPolicy + 7);
  v14 = *((_OWORD *)PopPolicy + 9);
  v35 = *((_OWORD *)PopPolicy + 8);
  v15 = *((_OWORD *)PopPolicy + 10);
  v36 = v14;
  v16 = *((_OWORD *)PopPolicy + 11);
  v37 = v15;
  v17 = *((_OWORD *)PopPolicy + 12);
  v38 = v16;
  v18 = *((_OWORD *)PopPolicy + 13);
  v19 = *((_QWORD *)PopPolicy + 28);
  v39 = v17;
  v40 = v18;
  v41 = v19;
  v20 = *a1;
  v21 = *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 == *a1 )
    v21 = *(_QWORD *)GUID_STANDBY_TIMEOUT.Data4 - a1[1];
  if ( !v21 && a3 == 4 && a2 )
  {
    v22 = *a2;
    HIDWORD(v30) = *a2;
    if ( BYTE5(PopCapabilities) || *(_WORD *)((char *)&PopCapabilities + 3) )
      LODWORD(v30) = 2;
    v6 = 0;
  }
  else
  {
    v22 = HIDWORD(v30);
  }
  v23 = *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 - v20;
  if ( *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 == v20 )
    v23 = *(_QWORD *)GUID_HIBERNATE_TIMEOUT.Data4 - a1[1];
  if ( !v23 && a3 == 4 && a2 )
  {
    v28 = *a2;
    DWORD2(v32) = *a2;
    if ( !v22 && v28 && BYTE6(PopCapabilities) && BYTE7(PopCapabilities) )
      LODWORD(v30) = 3;
  }
  else if ( v6 < 0 )
  {
    goto LABEL_9;
  }
  LOBYTE(v23) = 1;
  v6 = PopApplyPolicy(v23, 0LL, v29, 232LL);
LABEL_9:
  v24 = *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 == *a1 )
    v24 = *(_QWORD *)GUID_HIBERNATE_FASTS4_POLICY.Data4 - a1[1];
  if ( !v24 && a3 == 4 && a2 )
  {
    byte_140C3D49C = *a2 == 0;
    v6 = 0;
  }
  v25 = *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 == *a1 )
    v25 = *(_QWORD *)GUID_ALLOW_STANDBY_STATES.Data4 - a1[1];
  if ( !v25 && a3 == 4 && a2 )
  {
    byte_140C3D49D = *a2 == 0;
    PopInitSIdle(3LL);
    v6 = 0;
  }
  v26 = *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 == *a1 )
    v26 = *(_QWORD *)GUID_UNATTEND_SLEEP_TIMEOUT.Data4 - a1[1];
  if ( !v26 && a3 == 4 && a2 )
  {
    dword_140C3D4A0 = *a2;
    PopInitSIdle(3LL);
    v6 = 0;
  }
  PopReleasePolicyLock(v26, v24, v7);
  return (unsigned int)v6;
}
