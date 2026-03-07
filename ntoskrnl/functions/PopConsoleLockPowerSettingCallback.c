__int64 __fastcall PopConsoleLockPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v6; // rdx
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
  __int64 v20; // rcx
  unsigned int v21; // ebx
  _OWORD v23[5]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v24; // [rsp+70h] [rbp-A8h]
  __int128 v25; // [rsp+80h] [rbp-98h]
  __int128 v26; // [rsp+90h] [rbp-88h]
  __int128 v27; // [rsp+A0h] [rbp-78h]
  __int128 v28; // [rsp+B0h] [rbp-68h]
  __int128 v29; // [rsp+C0h] [rbp-58h]
  __int128 v30; // [rsp+D0h] [rbp-48h]
  __int128 v31; // [rsp+E0h] [rbp-38h]
  __int128 v32; // [rsp+F0h] [rbp-28h]
  __int64 v33; // [rsp+100h] [rbp-18h]

  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v23[0] = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v23[1] = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v23[2] = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v23[3] = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v23[4] = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v24 = v12;
  v25 = v13;
  v26 = *((_OWORD *)PopPolicy + 7);
  v14 = *((_OWORD *)PopPolicy + 9);
  v27 = *((_OWORD *)PopPolicy + 8);
  v15 = *((_OWORD *)PopPolicy + 10);
  v28 = v14;
  v16 = *((_OWORD *)PopPolicy + 11);
  v29 = v15;
  v17 = *((_OWORD *)PopPolicy + 12);
  v30 = v16;
  v18 = *((_OWORD *)PopPolicy + 13);
  v19 = *((_QWORD *)PopPolicy + 28);
  v31 = v17;
  v32 = v18;
  v33 = v19;
  v20 = *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 == *a1 )
    v20 = *(_QWORD *)GUID_LOCK_CONSOLE_ON_WAKE.Data4 - a1[1];
  if ( !v20 && a3 == 4 && a2 )
  {
    LODWORD(v24) = *a2;
    LOBYTE(v20) = 1;
    v21 = PopApplyPolicy(v20, 0LL, v23, 232LL);
  }
  else
  {
    v21 = -1073741811;
  }
  PopReleasePolicyLock(v20, v6, v7);
  return v21;
}
