/*
 * XREFs of StorEtwIORequestServiceTimeEventData @ 0x1C004F834
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0007A70 (RaidUnitCompleteRequest.c)
 *     StorPortNotification @ 0x1C000E820 (StorPortNotification.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D01C (GetSrbScsiData.c)
 *     McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer @ 0x1C004EA3C (McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer.c)
 */

int __fastcall StorEtwIORequestServiceTimeEventData(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  char v5; // r15
  unsigned __int64 v6; // r14
  LARGE_INTEGER v10; // rax
  __int64 QuadPart; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  signed __int64 v16; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rtt
  __int64 v20; // r8
  char *SrbScsiData; // rax
  int v22; // r10d
  char v23; // r11
  char v24; // dl
  char v25; // r9
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v28; // [rsp+28h] [rbp-80h]
  char v29; // [rsp+50h] [rbp-58h]
  char v30; // [rsp+58h] [rbp-50h]
  char v31; // [rsp+60h] [rbp-48h]
  int v32; // [rsp+68h] [rbp-40h]
  unsigned __int64 v33; // [rsp+70h] [rbp-38h]
  unsigned __int64 v34; // [rsp+78h] [rbp-30h]
  union _LARGE_INTEGER v35; // [rsp+B0h] [rbp+8h] BYREF
  char v36; // [rsp+B8h] [rbp+10h] BYREF

  v35.QuadPart = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0;
  v6 = 0LL;
  v36 = 0;
  if ( UseQPCTime )
    v10 = KeQueryPerformanceCounter(&v35);
  else
    v10.QuadPart = KeQueryUnbiasedInterruptTime();
  QuadPart = v35.QuadPart;
  if ( !a2 )
  {
    if ( v10.QuadPart <= 0 || (v12 = *(_QWORD *)(a1 + 696), v10.QuadPart >= v12) )
      v13 = v10.QuadPart - *(_QWORD *)(a1 + 696);
    else
      v13 = v10.QuadPart - v12 - 1;
    if ( UseQPCTime )
    {
      a3 = 0LL;
      if ( v35.QuadPart && v13 )
        a3 = 10000 * (1000 * (v13 % v35.QuadPart) % v35.QuadPart) / v35.QuadPart
           + 10000 * (1000 * (v13 % v35.QuadPart) / v35.QuadPart + 1000 * (v13 / v35.QuadPart));
    }
    else
    {
      a3 = v13;
    }
  }
  LODWORD(v14) = StorRequestThresholdTime;
  if ( StorRequestThresholdTime && a3 < StorRequestThresholdTime )
    return v14;
  v15 = *(_QWORD *)(a1 + 704);
  v16 = *(_QWORD *)(a1 + 696);
  if ( v15 >= v16 )
  {
    v17 = v15 - v16;
    if ( UseQPCTime )
    {
      if ( v35.QuadPart && v17 )
        v6 = 10000 * (1000 * (v17 % v35.QuadPart) % v35.QuadPart) / v35.QuadPart
           + 10000 * (1000 * (v17 % v35.QuadPart) / v35.QuadPart + 1000 * (v17 / v35.QuadPart));
    }
    else
    {
      v6 = v15 - v16;
    }
  }
  if ( v15 && (v18 = *(_QWORD *)(a1 + 712), v18 >= v15) )
  {
    v14 = v18 - v15;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 712);
    if ( (__int64)v14 < v16 )
      goto LABEL_32;
    v14 -= v16;
  }
  if ( UseQPCTime )
  {
    if ( v35.QuadPart && v14 )
    {
      v19 = 1000 * (v14 % v35.QuadPart);
      v20 = v19 / v35.QuadPart + 1000 * (v14 / v35.QuadPart);
      v14 = 10000 * (v19 % v35.QuadPart) / v35.QuadPart;
      v3 = v14 + 10000 * v20;
    }
  }
  else
  {
    v3 = v14;
  }
LABEL_32:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    SrbScsiData = (char *)GetSrbScsiData(v4, 0LL, 0LL, &v36, 0LL, 0LL);
    if ( SrbScsiData )
      v5 = *SrbScsiData;
    v14 = *(unsigned int *)(v4 + 52);
    v22 = *(_DWORD *)(v4 + 60);
    v23 = v36;
    LOBYTE(QuadPart) = *(_BYTE *)(v14 + v4 + 8);
    v24 = *(_BYTE *)(v14 + v4 + 9);
    v25 = *(_BYTE *)(v14 + v4 + 10);
  }
  else
  {
    v5 = *(_BYTE *)(v4 + 72);
    v23 = *(_BYTE *)(v4 + 4);
    LOBYTE(QuadPart) = *(_BYTE *)(v4 + 5);
    v24 = *(_BYTE *)(v4 + 6);
    v25 = *(_BYTE *)(v4 + 7);
    v22 = *(_DWORD *)(v4 + 16);
  }
  if ( a2 )
  {
    if ( (byte_1C0069841 & 2) != 0 )
    {
      v34 = v3;
      v33 = v6;
      v32 = v22;
      v31 = v23;
      v30 = v25;
      v29 = v24;
      v26 = (const EVENT_DESCRIPTOR *)&EventIOPerformanceMeasurementTarget;
      goto LABEL_42;
    }
  }
  else if ( (byte_1C0069841 & 2) != 0 )
  {
    v34 = v3;
    v33 = v6;
    v32 = v22;
    v31 = v23;
    v30 = v25;
    v29 = v24;
    v26 = (const EVENT_DESCRIPTOR *)&EventIOPerformanceMeasurement;
LABEL_42:
    LOBYTE(v28) = v5;
    LODWORD(v14) = McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer(
                     QuadPart,
                     v26,
                     (const GUID *)(a1 + 728),
                     a3,
                     *(_QWORD *)(a1 + 160),
                     v28,
                     *(_BYTE *)(v4 + 3),
                     *(_QWORD *)(a1 + 768),
                     *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                     QuadPart,
                     v29,
                     v30,
                     v31,
                     v32,
                     v33,
                     v34);
  }
  return v14;
}
