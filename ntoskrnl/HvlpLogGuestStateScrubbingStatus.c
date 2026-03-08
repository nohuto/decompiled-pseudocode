/*
 * XREFs of HvlpLogGuestStateScrubbingStatus @ 0x1405461EC
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x140546808 (HvlpWriteEventLog.c)
 */

char HvlpLogGuestStateScrubbingStatus()
{
  PHYSICAL_ADDRESS *v0; // rbx
  PHYSICAL_ADDRESS *v1; // rdi
  char result; // al
  const EVENT_DESCRIPTOR *v3; // rcx
  unsigned int v4; // [rsp+28h] [rbp-E0h] BYREF
  int v5; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v6; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v10; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  __m256i v14; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v15; // [rsp+70h] [rbp-98h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  unsigned int *v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  __m256i *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int *v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  unsigned int *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  unsigned int *v29; // [rsp+108h] [rbp+0h]
  __int64 v30; // [rsp+110h] [rbp+8h]
  unsigned int *v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+120h] [rbp+18h]
  unsigned int *v33; // [rsp+128h] [rbp+20h]
  __int64 v34; // [rsp+130h] [rbp+28h]
  unsigned int *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]
  unsigned int *v37; // [rsp+148h] [rbp+40h]
  __int64 v38; // [rsp+150h] [rbp+48h]
  _BYTE v39[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v40[2064]; // [rsp+168h] [rbp+60h] BYREF

  LODWORD(v16) = 0;
  v15.m256i_i32[0] = 0;
  HvlpGuestStateScrubbingStatus = 0;
  memset(&v15.m256i_u64[1], 0, 24);
  memset(&v14.m256i_u64[1], 0, 24);
  v0 = HvlpAcquireHypercallPage((__int64)&v15.m256i_i64[1], 1, (__int64)v39, 8LL);
  v1 = HvlpAcquireHypercallPage((__int64)&v14.m256i_i64[1], 2, (__int64)v40, 1032LL);
  v0->LowPart = 25;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
    HvlpGuestStateScrubbingStatus = v1->LowPart;
  HvlpReleaseHypercallPage((__int64)&v14.m256i_i64[1]);
  result = HvlpReleaseHypercallPage((__int64)&v15.m256i_i64[1]);
  if ( HvlpGuestStateScrubbingStatus )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v26 = 4LL;
    v5 = HvlpGuestStateScrubbingStatus & 1;
    UserData.Ptr = (ULONGLONG)&v5;
    v28 = 4LL;
    v30 = 4LL;
    v4 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v25 = &v4;
    v32 = 4LL;
    v6 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 2) & 1;
    v27 = &v6;
    v34 = 4LL;
    v7 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 3) & 1;
    v29 = &v7;
    v36 = 4LL;
    v8 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 4) & 1;
    v31 = &v8;
    v38 = 4LL;
    v9 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 5) & 1;
    v33 = &v9;
    v10 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 7) & 1;
    v11 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 8) & 1;
    v35 = &v10;
    v37 = &v11;
    HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING, 8u, &UserData);
    *(_QWORD *)&v17.Size = 4LL;
    v12 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 11) & 1;
    v17.Ptr = (ULONGLONG)&v12;
    v19 = 4LL;
    v4 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v18 = &v4;
    v21 = 4LL;
    v13 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 9) & 1;
    v20 = &v13;
    v22 = &v14;
    v14.m256i_i32[0] = ((unsigned int)HvlpGuestStateScrubbingStatus >> 10) & 1;
    v23 = 4LL;
    HvlpWriteEventLog(&HV_EVENTLOG_MDS_MITIGATION_STATUS, 4u, &v17);
    result = HvlpGuestStateScrubbingStatus;
    if ( (HvlpGuestStateScrubbingStatus & 0x40) != 0 )
    {
      v3 = (const EVENT_DESCRIPTOR *)HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE_NO_CORE_SCHEDULER;
      if ( !(_BYTE)dword_140D1D1EC )
        v3 = &HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE;
    }
    else
    {
      if ( (HvlpGuestStateScrubbingStatus & 0x8000) == 0 )
        return result;
      v3 = &HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE;
    }
    return HvlpWriteEventLog(v3, 0, 0LL);
  }
  return result;
}
