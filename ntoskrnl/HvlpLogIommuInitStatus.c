/*
 * XREFs of HvlpLogIommuInitStatus @ 0x140546558
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x140546808 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  PHYSICAL_ADDRESS *v0; // rbx
  PHYSICAL_ADDRESS *v1; // rdi
  __int64 result; // rax
  __m256i v3; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v4; // [rsp+48h] [rbp-C0h] BYREF
  int v5; // [rsp+68h] [rbp-A0h]
  __int128 v6; // [rsp+70h] [rbp-98h] BYREF
  __int128 v7; // [rsp+80h] [rbp-88h] BYREF
  __int128 v8; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  __int8 *v10; // [rsp+B8h] [rbp-50h]
  __int64 v11; // [rsp+C0h] [rbp-48h]
  char *v12; // [rsp+C8h] [rbp-40h]
  __int64 v13; // [rsp+D0h] [rbp-38h]
  __int128 *v14; // [rsp+D8h] [rbp-30h]
  __int64 v15; // [rsp+E0h] [rbp-28h]
  char *v16; // [rsp+E8h] [rbp-20h]
  __int64 v17; // [rsp+F0h] [rbp-18h]
  __int128 *v18; // [rsp+F8h] [rbp-10h]
  __int64 v19; // [rsp+100h] [rbp-8h]
  char *v20; // [rsp+108h] [rbp+0h]
  __int64 v21; // [rsp+110h] [rbp+8h]
  _BYTE v22[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v23[2064]; // [rsp+128h] [rbp+20h] BYREF

  v5 = 0;
  memset(&v4.m256i_u64[1], 0, 24);
  v4.m256i_i32[0] = 0;
  memset(&v3.m256i_u64[1], 0, 24);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v4.m256i_i64[1], 1, (__int64)v22, 8LL);
  v1 = HvlpAcquireHypercallPage((__int64)&v3.m256i_i64[1], 2, (__int64)v23, 1032LL);
  v0->LowPart = 5;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
  {
    v6 = *(_OWORD *)&v1->LowPart;
    v7 = *(_OWORD *)&v1[2].LowPart;
    v8 = *(_OWORD *)&v1[4].LowPart;
  }
  HvlpReleaseHypercallPage((__int64)&v3.m256i_i64[1]);
  HvlpReleaseHypercallPage((__int64)&v4.m256i_i64[1]);
  v3.m256i_i32[0] = (unsigned __int8)v6;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v3.m256i_i32[1] = BYTE1(v6);
  v10 = &v3.m256i_i8[4];
  v12 = (char *)&v6 + 8;
  v14 = &v7;
  v16 = (char *)&v7 + 8;
  v18 = &v8;
  v20 = (char *)&v8 + 8;
  v11 = 4LL;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
  result = v8;
  if ( (_DWORD)v8 )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v8;
    HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_ERROR, 1u, &UserData);
    result = v8;
  }
  if ( BYTE1(v6) && *((_QWORD *)&v6 + 1) == 1LL )
  {
    if ( result )
      return HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE, 0, 0LL);
  }
  return result;
}
