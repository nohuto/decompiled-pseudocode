/*
 * XREFs of PopPowerButtonSettingCallback @ 0x140793A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerButtonSettingCallback(__int64 *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  char *v22; // rax
  unsigned int v23; // ebx
  __int128 v25; // [rsp+20h] [rbp-108h] BYREF
  __int128 v26; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-E8h]
  __int128 v28; // [rsp+50h] [rbp-D8h]
  __int128 v29; // [rsp+60h] [rbp-C8h]
  __int128 v30; // [rsp+70h] [rbp-B8h]
  __int128 v31; // [rsp+80h] [rbp-A8h]
  __int128 v32; // [rsp+90h] [rbp-98h]
  __int128 v33; // [rsp+A0h] [rbp-88h]
  __int128 v34; // [rsp+B0h] [rbp-78h]
  __int128 v35; // [rsp+C0h] [rbp-68h]
  __int128 v36; // [rsp+D0h] [rbp-58h]
  __int128 v37; // [rsp+E0h] [rbp-48h]
  __int128 v38; // [rsp+F0h] [rbp-38h]
  __int64 v39; // [rsp+100h] [rbp-28h]

  PopAcquirePolicyLock((_DWORD)a1);
  v7 = *((_OWORD *)PopPolicy + 1);
  v25 = *(_OWORD *)PopPolicy;
  v8 = *((_OWORD *)PopPolicy + 2);
  v26 = v7;
  v9 = *((_OWORD *)PopPolicy + 3);
  v27 = v8;
  v10 = *((_OWORD *)PopPolicy + 4);
  v28 = v9;
  v11 = *((_OWORD *)PopPolicy + 5);
  v29 = v10;
  v12 = *((_OWORD *)PopPolicy + 6);
  v30 = v11;
  v31 = v12;
  v32 = *((_OWORD *)PopPolicy + 7);
  v13 = *((_OWORD *)PopPolicy + 9);
  v33 = *((_OWORD *)PopPolicy + 8);
  v14 = *((_OWORD *)PopPolicy + 10);
  v34 = v13;
  v15 = *((_OWORD *)PopPolicy + 11);
  v35 = v14;
  v16 = *((_OWORD *)PopPolicy + 12);
  v36 = v15;
  v17 = *((_OWORD *)PopPolicy + 13);
  v18 = *((_QWORD *)PopPolicy + 28);
  v37 = v16;
  v38 = v17;
  v39 = v18;
  v19 = *a1;
  v20 = *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 == *a1 )
    v20 = *(_QWORD *)GUID_POWERBUTTON_ACTION.Data4 - a1[1];
  if ( v20 )
  {
    v20 = *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 - v19;
    if ( *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 == v19 )
      v20 = *(_QWORD *)GUID_SLEEPBUTTON_ACTION.Data4 - a1[1];
    if ( v20 )
    {
      v20 = *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 - v19;
      if ( *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 == v19 )
        v20 = *(_QWORD *)GUID_LIDCLOSE_ACTION.Data4 - a1[1];
      if ( v20 )
      {
        v20 = *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 - v19;
        if ( *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 == v19 )
          v20 = *(_QWORD *)GUID_LIDOPEN_POWERSTATE.Data4 - a1[1];
        if ( !v20 && a3 == 4 && a2 )
        {
          v20 = *a2;
          v21 = DWORD2(v27);
          if ( (unsigned int)v20 <= 7 )
            v21 = *a2;
          DWORD2(v27) = v21;
        }
        goto LABEL_24;
      }
      v22 = (char *)&v26 + 12;
    }
    else
    {
      v22 = (char *)&v26;
    }
  }
  else
  {
    v22 = (char *)&v25 + 4;
  }
  if ( a3 != 4 || !a2 || (v20 = *a2, (unsigned int)v20 > 8) || (v6 = 333LL, !_bittest((const int *)&v6, v20)) )
  {
    v23 = -1073741811;
    goto LABEL_25;
  }
  *(_QWORD *)(v22 + 4) = 0LL;
  *(_DWORD *)v22 = v20;
LABEL_24:
  LOBYTE(v20) = 1;
  v23 = ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, __int64))PopApplyPolicy)(v20, 0LL, &v25, 232LL);
LABEL_25:
  PopReleasePolicyLock(v20, v6);
  return v23;
}
