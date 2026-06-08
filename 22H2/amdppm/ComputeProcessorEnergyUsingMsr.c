/*
 * XREFs of ComputeProcessorEnergyUsingMsr @ 0x1C00013A0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001860 (EnumerateNextDevice.c)
 *     ProcLibGetProcessorNumber @ 0x1C0001BF0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall ComputeProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 result; // rax
  char v13; // [rsp+30h] [rbp-61h] BYREF
  __int16 v14; // [rsp+34h] [rbp-5Dh] BYREF
  int v15; // [rsp+38h] [rbp-59h] BYREF
  int v16; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  __int64 v18; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v19[5]; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-11h] BYREF
  char *v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]
  int *v23; // [rsp+A0h] [rbp+Fh]
  __int64 v24; // [rsp+A8h] [rbp+17h]
  __int64 *v25; // [rsp+B0h] [rbp+1Fh]
  __int64 v26; // [rsp+B8h] [rbp+27h]

  v19[0] = &qword_1C0013410;
  v17 = 0LL;
  v19[2] = 0LL;
  v19[1] = &qword_1C0013410;
  v6 = 0LL;
  v19[3] = 32LL;
  while ( !(unsigned int)EnumerateNextDevice(v19, &v17) )
  {
    v7 = v17;
    if ( *(unsigned __int8 *)(v17 + 368) == a1 )
    {
      v8 = *(_QWORD *)(v17 + 360);
      v16 = -1073675622;
      v14 = 0;
      v13 = 0;
      v9 = *(unsigned int *)(v8 + 32);
      v10 = *(_DWORD *)(v8 + 24);
      v11 = *(_DWORD *)(v8 + 32) - v10;
      *(_QWORD *)(v8 + 24) = v9;
      v18 = v9;
      if ( (unsigned int)v9 <= v10 )
        v11 = 0LL;
      v15 = 0;
      v6 += v11;
      if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_ENERGY_COUNTER_UPDATE)
        && (int)ProcLibGetProcessorNumber(v7, &v15) >= 0 )
      {
        v14 = v15;
        v13 = BYTE2(v15);
        UserData.Ptr = (unsigned __int64)&v14;
        v21 = &v13;
        v23 = &v16;
        v25 = &v18;
        *(_QWORD *)&UserData.Size = 2LL;
        v22 = 1LL;
        v24 = 4LL;
        v26 = 8LL;
        EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_ENERGY_COUNTER_UPDATE, 0LL, 4u, &UserData);
      }
    }
  }
  result = (unsigned __int64)(1000000 * v6) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *a5 = result;
  return result;
}
