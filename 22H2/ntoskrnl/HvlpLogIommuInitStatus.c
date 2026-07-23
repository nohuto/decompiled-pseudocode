/*
 * XREFs of HvlpLogIommuInitStatus @ 0x1404F9B38
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CE9B8 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1404F9DB4 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  _QWORD *v0; // rbx
  __int128 *v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+28h] [rbp-E0h] BYREF
  int v4; // [rsp+2Ch] [rbp-DCh] BYREF
  PHYSICAL_ADDRESS v5[4]; // [rsp+30h] [rbp-D8h] BYREF
  PHYSICAL_ADDRESS v6[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v7; // [rsp+70h] [rbp-98h] BYREF
  __int128 v8; // [rsp+80h] [rbp-88h] BYREF
  __int128 v9; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  int *v11; // [rsp+B8h] [rbp-50h]
  __int64 v12; // [rsp+C0h] [rbp-48h]
  char *v13; // [rsp+C8h] [rbp-40h]
  __int64 v14; // [rsp+D0h] [rbp-38h]
  __int128 *v15; // [rsp+D8h] [rbp-30h]
  __int64 v16; // [rsp+E0h] [rbp-28h]
  char *v17; // [rsp+E8h] [rbp-20h]
  __int64 v18; // [rsp+F0h] [rbp-18h]
  __int128 *v19; // [rsp+F8h] [rbp-10h]
  __int64 v20; // [rsp+100h] [rbp-8h]
  char *v21; // [rsp+108h] [rbp+0h]
  __int64 v22; // [rsp+110h] [rbp+8h]
  _BYTE v23[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v24[2064]; // [rsp+128h] [rbp+20h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v5, 0, sizeof(v5));
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v0 = HvlpAcquireHypercallPage(v6, 1, (__int64)v23, 8LL);
  v1 = (__int128 *)HvlpAcquireHypercallPage(v5, 2, (__int64)v24, 1032LL);
  *(_DWORD *)v0 = 5;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
  {
    v7 = *v1;
    v8 = v1[1];
    v9 = v1[2];
  }
  HvlpReleaseHypercallPage((__int64)v5);
  HvlpReleaseHypercallPage((__int64)v6);
  v3 = (unsigned __int8)v7;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v4 = BYTE1(v7);
  v11 = &v4;
  v13 = (char *)&v7 + 8;
  v15 = &v8;
  v17 = (char *)&v8 + 8;
  v19 = &v9;
  v21 = (char *)&v9 + 8;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 8LL;
  v22 = 8LL;
  result = HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
  if ( BYTE1(v7) && *((_QWORD *)&v7 + 1) == 1LL )
  {
    if ( (_QWORD)v9 )
      return HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE, 0, 0LL);
  }
  return result;
}
