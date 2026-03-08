/*
 * XREFs of PopPowerButtonSettingCallback @ 0x140829B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerButtonSettingCallback(__int64 *a1, unsigned int *a2, int a3)
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
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  char *v23; // rax
  unsigned int v24; // ebx
  __int128 v26; // [rsp+20h] [rbp-108h] BYREF
  __int128 v27; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-E8h]
  __int128 v29; // [rsp+50h] [rbp-D8h]
  __int128 v30; // [rsp+60h] [rbp-C8h]
  __int128 v31; // [rsp+70h] [rbp-B8h]
  __int128 v32; // [rsp+80h] [rbp-A8h]
  __int128 v33; // [rsp+90h] [rbp-98h]
  __int128 v34; // [rsp+A0h] [rbp-88h]
  __int128 v35; // [rsp+B0h] [rbp-78h]
  __int128 v36; // [rsp+C0h] [rbp-68h]
  __int128 v37; // [rsp+D0h] [rbp-58h]
  __int128 v38; // [rsp+E0h] [rbp-48h]
  __int128 v39; // [rsp+F0h] [rbp-38h]
  __int64 v40; // [rsp+100h] [rbp-28h]

  PopAcquirePolicyLock((_DWORD)a1);
  v8 = *((_OWORD *)PopPolicy + 1);
  v26 = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v27 = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v28 = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v29 = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v30 = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v31 = v12;
  v32 = v13;
  v33 = *((_OWORD *)PopPolicy + 7);
  v14 = *((_OWORD *)PopPolicy + 9);
  v34 = *((_OWORD *)PopPolicy + 8);
  v15 = *((_OWORD *)PopPolicy + 10);
  v35 = v14;
  v16 = *((_OWORD *)PopPolicy + 11);
  v36 = v15;
  v17 = *((_OWORD *)PopPolicy + 12);
  v37 = v16;
  v18 = *((_OWORD *)PopPolicy + 13);
  v19 = *((_QWORD *)PopPolicy + 28);
  v38 = v17;
  v39 = v18;
  v40 = v19;
  v20 = *a1;
  v21 = *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 == *a1 )
    v21 = *(_QWORD *)GUID_POWERBUTTON_ACTION.Data4 - a1[1];
  if ( v21 )
  {
    v21 = *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 - v20;
    if ( *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 == v20 )
      v21 = *(_QWORD *)GUID_SLEEPBUTTON_ACTION.Data4 - a1[1];
    if ( v21 )
    {
      v21 = *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 - v20;
      if ( *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 == v20 )
        v21 = *(_QWORD *)GUID_LIDCLOSE_ACTION.Data4 - a1[1];
      if ( v21 )
      {
        v21 = *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 - v20;
        if ( *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 == v20 )
          v21 = *(_QWORD *)GUID_LIDOPEN_POWERSTATE.Data4 - a1[1];
        if ( !v21 && a3 == 4 && a2 )
        {
          v21 = *a2;
          v22 = DWORD2(v28);
          if ( (unsigned int)v21 <= 7 )
            v22 = *a2;
          DWORD2(v28) = v22;
        }
        goto LABEL_24;
      }
      v23 = (char *)&v27 + 12;
    }
    else
    {
      v23 = (char *)&v27;
    }
  }
  else
  {
    v23 = (char *)&v26 + 4;
  }
  if ( a3 != 4 || !a2 || (v21 = *a2, (unsigned int)v21 > 8) || (v6 = 333LL, !_bittest((const int *)&v6, v21)) )
  {
    v24 = -1073741811;
    goto LABEL_25;
  }
  *(_QWORD *)(v23 + 4) = 0LL;
  *(_DWORD *)v23 = v21;
LABEL_24:
  LOBYTE(v21) = 1;
  v24 = PopApplyPolicy(v21, 0LL, &v26, 232LL);
LABEL_25:
  PopReleasePolicyLock(v21, v6, v7);
  return v24;
}
