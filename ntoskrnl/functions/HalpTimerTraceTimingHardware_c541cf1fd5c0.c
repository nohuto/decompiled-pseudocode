void HalpTimerTraceTimingHardware()
{
  int v0; // ecx
  int v1; // ecx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+30h] [rbp-69h] BYREF
  int v8; // [rsp+34h] [rbp-65h] BYREF
  int v9; // [rsp+38h] [rbp-61h] BYREF
  int v10; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v11; // [rsp+40h] [rbp-59h] BYREF
  int v12; // [rsp+44h] [rbp-55h] BYREF
  int v13; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-49h] BYREF
  int *v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  int *v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  int *v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  int *v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  int *v23; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]
  int *v25; // [rsp+C0h] [rbp+27h]
  __int64 v26; // [rsp+C8h] [rbp+2Fh]
  int *v27; // [rsp+D0h] [rbp+37h]
  __int64 v28; // [rsp+D8h] [rbp+3Fh]

  if ( (unsigned int)dword_140C04B50 > 5 && tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
  {
    v16 = 4LL;
    v18 = 4LL;
    v0 = *(_DWORD *)(HalpClockTimer + 228);
    v15 = &v7;
    v7 = v0;
    v1 = *(_DWORD *)(HalpPerformanceCounter + 228);
    v17 = &v8;
    v8 = v1;
    if ( HalpAlwaysOnTimer )
      v2 = *(_DWORD *)(HalpAlwaysOnTimer + 228);
    else
      v2 = 0;
    v9 = v2;
    v19 = &v9;
    v20 = 4LL;
    if ( *(_QWORD *)&HalpVpptPhysicalTimer )
      v3 = *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL);
    else
      v3 = 0;
    v10 = v3;
    v21 = &v10;
    v22 = 4LL;
    if ( HalpAlwaysOnCounter )
      v4 = *(_DWORD *)(HalpAlwaysOnCounter + 228);
    else
      v4 = 0;
    v11 = v4;
    v23 = &v11;
    v24 = 4LL;
    if ( HalpWatchdogTimer )
      v5 = *(_DWORD *)(HalpWatchdogTimer + 228);
    else
      v5 = 0;
    v12 = v5;
    v25 = &v12;
    v26 = 4LL;
    if ( HalpAuxiliaryCounter )
      v6 = *(_DWORD *)(HalpAuxiliaryCounter + 228);
    else
      v6 = 0;
    v13 = v6;
    v28 = 4LL;
    v27 = &v13;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04B50, (unsigned __int8 *)byte_140028FE9, 0LL, 0LL, 9u, &v14);
  }
}
