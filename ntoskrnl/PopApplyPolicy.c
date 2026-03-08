/*
 * XREFs of PopApplyPolicy @ 0x14082A06C
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x14038FE70 (PopVideoPowerSettingCallback.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopConsoleLockPowerSettingCallback @ 0x1408290D0 (PopConsoleLockPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x140829550 (PopHardDiskPowerSettingCallback.c)
 *     PopSleepPowerSettingCallback @ 0x140829820 (PopSleepPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x140829B30 (PopPowerButtonSettingCallback.c)
 *     PopBatteryUpdateAlarms @ 0x140829D60 (PopBatteryUpdateAlarms.c)
 *     PopResetCurrentPolicies @ 0x140829F88 (PopResetCurrentPolicies.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1402BCB00 (PopSetNotificationWork.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403900C8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopVerifySystemPowerPolicy @ 0x14082A334 (PopVerifySystemPowerPolicy.c)
 *     PopInitSIdle @ 0x14082A7A4 (PopInitSIdle.c)
 *     PopResetCBTriggers @ 0x14082AA6C (PopResetCBTriggers.c)
 */

__int64 __fastcall PopApplyPolicy(char a1, char a2, _OWORD *a3, unsigned int a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 result; // rax
  int v23; // ebx
  _QWORD *v24; // rdi
  __int64 v25; // r9
  char v26; // r14
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v44; // rax
  __int64 v45; // rcx
  HANDLE DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD Buf1[15]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD Data[14]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v50; // [rsp+228h] [rbp+120h]

  memset(Buf1, 0, 0xE8uLL);
  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  if ( a4 < 0xE8 )
    return 3221225507LL;
  if ( a4 > 0xE8 )
    return 2147483653LL;
  v8 = a3[1];
  Data[0] = *a3;
  v9 = a3[2];
  Data[1] = v8;
  v10 = a3[3];
  Data[2] = v9;
  v11 = a3[4];
  Data[3] = v10;
  v12 = a3[5];
  Data[4] = v11;
  v13 = a3[6];
  Data[5] = v12;
  Data[6] = v13;
  v14 = a3[7];
  v15 = a3 + 8;
  Data[7] = v14;
  v16 = *((_QWORD *)v15 + 12);
  v17 = v15[1];
  Data[8] = *v15;
  v18 = v15[2];
  Data[9] = v17;
  v19 = v15[3];
  Data[10] = v18;
  v20 = v15[4];
  Data[11] = v19;
  v21 = v15[5];
  Data[12] = v20;
  Data[13] = v21;
  v50 = v16;
  result = PopVerifySystemPowerPolicy(Data, Buf1);
  v23 = result;
  if ( (int)result >= 0 )
  {
    v24 = PopPolicy;
    if ( !memcmp(Buf1, PopPolicy, 0xE8uLL) && !a1 )
    {
      return 0LL;
    }
    else
    {
      v26 = 0;
      v27 = 0LL;
      while ( 1 )
      {
        v28 = 3 * v27;
        v29 = *((_QWORD *)&Buf1[6] + 3 * v27) - v24[3 * v27 + 12];
        if ( !v29 )
        {
          v29 = *((_QWORD *)&Buf1[6] + 3 * v27 + 1) - v24[3 * v27 + 13];
          if ( !v29 )
            v29 = *((_QWORD *)&Buf1[7] + 3 * v27) - v24[3 * v27 + 14];
        }
        if ( v29 )
          break;
        v27 = (unsigned int)(v27 + 1);
        if ( (unsigned int)v27 >= 4 )
          goto LABEL_12;
      }
      v26 = 1;
LABEL_12:
      v30 = PopPolicy;
      v31 = Buf1[1];
      *(_OWORD *)PopPolicy = Buf1[0];
      v32 = Buf1[2];
      v30[1] = v31;
      v33 = Buf1[3];
      v30[2] = v32;
      v34 = Buf1[4];
      v30[3] = v33;
      v35 = Buf1[5];
      v30[4] = v34;
      v36 = Buf1[6];
      v30[5] = v35;
      v37 = Buf1[7];
      v30[6] = v36;
      v30 += 8;
      v38 = Buf1[8];
      *(v30 - 1) = v37;
      v39 = Buf1[9];
      *v30 = v38;
      v40 = Buf1[10];
      v30[1] = v39;
      v41 = Buf1[11];
      v30[2] = v40;
      v42 = Buf1[12];
      v30[3] = v41;
      v43 = Buf1[13];
      v44 = *(_QWORD *)&Buf1[14];
      v30[4] = v42;
      v30[5] = v43;
      *((_QWORD *)v30 + 12) = v44;
      PopSetNotificationWork(2u, v28, v27, v25);
      if ( v26 && !a2 )
      {
        LOBYTE(v45) = -125;
        PopResetCBTriggers(v45);
      }
      PopInitSIdle(3LL);
      if ( a1 )
      {
        v23 = PopOpenPowerKey((__int64)&DestinationString);
        if ( v23 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString_8, L"SystemPowerPolicy");
          v23 = ZwSetValueKey(DestinationString, &DestinationString_8, 0, 3u, Data, 0xE8u);
          ZwClose(DestinationString);
        }
      }
      return (unsigned int)v23;
    }
  }
  return result;
}
