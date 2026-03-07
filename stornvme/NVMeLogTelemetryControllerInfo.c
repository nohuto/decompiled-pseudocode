__int64 __fastcall NVMeLogTelemetryControllerInfo(__int64 a1)
{
  unsigned __int16 *v1; // rbp
  unsigned __int16 v3; // di
  __int64 result; // rax
  unsigned __int16 *PowerState; // rbx
  char v6; // al
  int v7; // [rsp+28h] [rbp-B0h]
  int v8; // [rsp+28h] [rbp-B0h]
  int v9; // [rsp+28h] [rbp-B0h]
  int v10; // [rsp+28h] [rbp-B0h]
  int v11; // [rsp+30h] [rbp-A8h]
  int v12; // [rsp+30h] [rbp-A8h]
  int v13; // [rsp+30h] [rbp-A8h]
  int v14; // [rsp+30h] [rbp-A8h]
  int v15; // [rsp+38h] [rbp-A0h]
  int v16; // [rsp+38h] [rbp-A0h]
  int v17; // [rsp+38h] [rbp-A0h]
  int v18; // [rsp+38h] [rbp-A0h]
  int v19; // [rsp+40h] [rbp-98h]
  int v20; // [rsp+40h] [rbp-98h]
  int v21; // [rsp+40h] [rbp-98h]
  int v22; // [rsp+40h] [rbp-98h]
  __int64 v23; // [rsp+C0h] [rbp-18h]

  v1 = *(unsigned __int16 **)(a1 + 1840);
  v23 = v1[260] & 1LL | (2
                       * ((v1[260] >> 1) & 1 | (2
                                              * ((v1[260] >> 2) & 1 | (2
                                                                     * ((v1[260] >> 3) & 1 | (2
                                                                                            * ((v1[260] >> 4) & 1 | (2 * ((v1[260] >> 5) & 1 | (2 * ((v1[260] >> 6) & 1u))))))))))));
  NVMeLogTelemetry(
    a1,
    0LL,
    1LL,
    2,
    "CtrlInfoSet1",
    v7,
    v11,
    v15,
    v19,
    "Version",
    *((unsigned int *)v1 + 20),
    "APSTASupport",
    *((_BYTE *)v1 + 265) & 1,
    "HMBSupport",
    *((unsigned int *)v1 + 68),
    "CTRATT",
    *((_DWORD *)v1 + 24) & 3,
    "OACS",
    v1[128] & 1LL | (2
                   * ((v1[128] >> 1) & 1 | (2
                                          * ((v1[128] >> 2) & 1 | (2
                                                                 * ((v1[128] >> 3) & 1 | (2
                                                                                        * ((v1[128] >> 4) & 1 | (2 * ((v1[128] >> 5) & 1u)))))))))),
    "OAES",
    *((_DWORD *)v1 + 23) & 0x300,
    "LPA",
    *((_BYTE *)v1 + 261) & 1 | (unsigned __int64)(2
                                                * ((*((unsigned __int8 *)v1 + 261) >> 1) & 1 | (2
                                                                                              * ((*((unsigned __int8 *)v1
                                                                                                  + 261) >> 2) & 1 | (2 * ((*((unsigned __int8 *)v1 + 261) >> 3) & 1u)))))),
    "ONCS",
    v23);
  NVMeLogTelemetry(
    a1,
    0LL,
    1LL,
    2,
    "CtrlInfoSet2",
    v8,
    v12,
    v16,
    v20,
    "MQES",
    (unsigned __int16)*(_DWORD *)(a1 + 200),
    "MDTS",
    *((unsigned __int8 *)v1 + 77),
    "NN",
    *((unsigned int *)v1 + 129),
    "VWCStatus",
    *((_BYTE *)v1 + 525) & 1,
    "MaxIoSubmissionQueueCount",
    *(unsigned __int16 *)(a1 + 914),
    "MaxIoCompletionQueueCount",
    *(unsigned __int16 *)(a1 + 916),
    "MessageCount",
    *(unsigned __int16 *)(a1 + 280),
    "ProcessorCount",
    *(unsigned __int16 *)(a1 + 242));
  v3 = 0;
  NVMeLogTelemetry(
    a1,
    0LL,
    1LL,
    2,
    "CtrlInfoSet3",
    v9,
    v13,
    v17,
    v21,
    "NPSS",
    *((unsigned __int8 *)v1 + 263),
    "RTD3R",
    *((unsigned int *)v1 + 21),
    "RTD3E",
    *((unsigned int *)v1 + 22),
    "HCTMA",
    v1[161] & 1LL,
    "FWActivate",
    ((unsigned __int64)*((unsigned __int8 *)v1 + 260) >> 4) & 1,
    "DeviceVID",
    *v1,
    "DeviceSVID",
    v1[1],
    0LL,
    0LL);
  result = (unsigned int)*((unsigned __int8 *)v1 + 263) + 1;
  if ( *((unsigned __int8 *)v1 + 263) != -1 )
  {
    do
    {
      PowerState = (unsigned __int16 *)NVMeGetPowerState(a1, v3);
      v6 = *((_BYTE *)PowerState + 3);
      if ( (v6 & 2) != 0 )
        NVMeLogTelemetry(
          a1,
          0LL,
          1LL,
          2,
          "CtrlInfoNOPS",
          v10,
          v14,
          v18,
          v22,
          "ENLAT",
          *((unsigned int *)PowerState + 1),
          "EXLAT",
          *((unsigned int *)PowerState + 2),
          "MPS",
          v6 & 1,
          "MP",
          *PowerState,
          "IPS",
          (unsigned __int64)*((unsigned __int8 *)PowerState + 18) >> 6,
          "IDLP",
          PowerState[8],
          "APS",
          (unsigned __int64)*((unsigned __int8 *)PowerState + 22) >> 6,
          "ACTP",
          PowerState[10]);
      result = ++v3;
    }
    while ( v3 < (unsigned int)*((unsigned __int8 *)v1 + 263) + 1 );
  }
  return result;
}
