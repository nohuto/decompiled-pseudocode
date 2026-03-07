__int64 __fastcall PopBatteryUpdateAlarms(char a1, __int64 a2)
{
  signed int v2; // r15d
  char v3; // r14
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rsi
  int *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v28; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v30[6]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v31[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+120h] [rbp+20h]

  v2 = dword_140C3D48C;
  v3 = a1;
  v4 = 128LL;
  v29 = 0;
  v5 = *(_OWORD *)PopPolicy;
  v28 = 0;
  v6 = *((_OWORD *)PopPolicy + 1);
  v30[0] = v5;
  v7 = *((_OWORD *)PopPolicy + 2);
  v30[1] = v6;
  v8 = *((_OWORD *)PopPolicy + 3);
  v30[2] = v7;
  v9 = *((_OWORD *)PopPolicy + 4);
  v30[3] = v8;
  v10 = *((_OWORD *)PopPolicy + 5);
  v30[4] = v9;
  v11 = *((_OWORD *)PopPolicy + 6);
  v30[5] = v10;
  v31[0] = v11;
  v31[1] = *((_OWORD *)PopPolicy + 7);
  v12 = *((_OWORD *)PopPolicy + 9);
  v31[2] = *((_OWORD *)PopPolicy + 8);
  v13 = *((_OWORD *)PopPolicy + 10);
  v31[3] = v12;
  v14 = *((_OWORD *)PopPolicy + 11);
  v31[4] = v13;
  v15 = *((_OWORD *)PopPolicy + 12);
  v31[5] = v14;
  v16 = *((_OWORD *)PopPolicy + 13);
  v17 = *((_QWORD *)PopPolicy + 28);
  v31[6] = v15;
  v31[7] = v16;
  v32 = v17;
  v18 = a2 + 1;
  if ( v3 )
  {
    v18 = 4;
    a2 = 0LL;
  }
  if ( (unsigned int)a2 < v18 )
  {
    v19 = v18 - (unsigned int)a2;
    v20 = (int *)v31 + 6 * a2 + 1;
    v21 = a2;
    do
    {
      if ( (int)PopGetPowerSettingValue((__int64)GUIDS_BATTERY_DISCHARGE_ACTION[v21], a2, v2, &v28, 4u, &v29) >= 0 )
      {
        v23 = v28;
        if ( v28 <= 6 )
        {
          v20[1] = v28;
          *((_BYTE *)v20 - 4) = v23 != 0;
        }
      }
      if ( (int)PopGetPowerSettingValue((__int64)GUIDS_BATTERY_DISCHARGE_LEVEL[v21], v22, v2, &v28, 4u, &v29) >= 0 )
      {
        v25 = v28;
        if ( v28 > 0x64 )
          v25 = 100;
        *v20 = v25;
      }
      if ( (int)PopGetPowerSettingValue((__int64)GUIDS_BATTERY_DISCHARGE_FLAGS[v21], v24, v2, &v28, 4u, &v29) >= 0 )
        v20[3] = v28 & 7;
      v20 += 6;
      ++v21;
      --v19;
    }
    while ( v19 );
    v3 = a1;
  }
  LOBYTE(a2) = v3;
  LOBYTE(v4) = 1;
  return PopApplyPolicy(v4, a2, v30, 232LL);
}
