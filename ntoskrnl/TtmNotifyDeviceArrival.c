/*
 * XREFs of TtmNotifyDeviceArrival @ 0x14099F580
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmpFindDeviceByToken @ 0x1409A06D8 (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x1409A1950 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceArrivalNotified @ 0x1409A4310 (TtmiLogDeviceArrivalNotified.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmNotifyDeviceArrival(unsigned int a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  __int64 v5; // r13
  signed __int32 v6; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r14d
  NTSTATUS v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 Pool2; // rax
  wchar_t *v21; // rcx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  __int64 *v28; // rcx
  size_t pcchLength[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h] BYREF
  int v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v5 = a5;
  v6 = -1;
  v32 = 0LL;
  v9 = a1;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a3 )
  {
    v13 = -1073741811;
    v19 = 386LL;
    goto LABEL_30;
  }
  if ( !*a3 )
  {
    v12 = 374LL;
LABEL_4:
    v13 = -1073741811;
    v14 = 0xFFFFFFFFLL;
    v15 = 3221225485LL;
LABEL_5:
    TtmiLogError("TtmNotifyDeviceArrival", v12, v14, v15);
    v16 = v33;
    goto LABEL_36;
  }
  if ( a3[3] && a3[2] )
  {
    v12 = 381LL;
    goto LABEL_4;
  }
  if ( a5 )
  {
    v17 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(a5 + 8), 0x104uLL, pcchLength);
    v13 = v17;
    if ( v17 < 0 )
    {
      v15 = (unsigned int)v17;
      v14 = (unsigned int)v17;
      v12 = 401LL;
      goto LABEL_5;
    }
  }
  v18 = TtmiAcquireCurrentSession(&v32);
  v13 = v18;
  if ( v18 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceArrival", 412LL, (unsigned int)v18, (unsigned int)v18);
    v10 = v32;
    goto LABEL_31;
  }
  v10 = v32;
  if ( (unsigned __int8)TtmpFindDeviceByToken(v32, v9, a2, 0LL) )
  {
    v13 = -1073741768;
    v19 = 430LL;
LABEL_30:
    TtmiLogError("TtmNotifyDeviceArrival", v19, 0xFFFFFFFFLL, v13);
    goto LABEL_31;
  }
  v6 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 112));
  Pool2 = ExAllocatePool2(256LL, 616LL, 1148023892LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    v21 = (wchar_t *)(Pool2 + 76);
    *(_DWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 32) = v6;
    *(_QWORD *)(Pool2 + 40) = *a3;
    *(_QWORD *)(Pool2 + 48) = a3[1];
    *(_QWORD *)(Pool2 + 56) = a3[2];
    v22 = a3[3];
    v16 = v33;
    *(_QWORD *)(v11 + 64) = v22;
    *(_DWORD *)(v11 + 72) = v16;
    v23 = RtlStringCchCopyW(v21, 0x104uLL, *(NTSTRSAFE_PCWSTR *)(v5 + 8));
    v13 = v23;
    if ( v23 >= 0 )
    {
      if ( *(_DWORD *)(v11 + 16) == 2
        && (v24 = *(_DWORD *)(v11 + 72), v24 <= 0x10)
        && (v25 = 65814, _bittest(&v25, v24)) )
      {
        v26 = 128;
      }
      else
      {
        v26 = 0;
      }
      v27 = *(_DWORD *)(v11 + 600);
      *(_DWORD *)(v11 + 596) = -1;
      v10 = v32;
      *(_DWORD *)(v11 + 600) = v26 | v27 & 0xFFFFFF7F | 1;
      v28 = *(__int64 **)(v10 + 104);
      if ( *v28 != v10 + 96 )
        __fastfail(3u);
      *(_QWORD *)(v11 + 8) = v28;
      *(_QWORD *)v11 = v10 + 96;
      *v28 = v11;
      *(_QWORD *)(v10 + 104) = v11;
      ++*(_DWORD *)(v10 + 116);
      TtmiScheduleSessionWorker(v10, 1LL);
      v11 = 0LL;
      v13 = 0;
    }
    else
    {
      TtmiLogError("TtmNotifyDeviceArrival", 474LL, (unsigned int)v23, (unsigned int)v23);
      v10 = v32;
    }
    v9 = a1;
    goto LABEL_32;
  }
  v13 = -1073741670;
  TtmiLogError("TtmNotifyDeviceArrival", 452LL, 0xFFFFFFFFLL, 3221225626LL);
  v10 = v32;
  v9 = a1;
LABEL_31:
  v16 = v33;
LABEL_32:
  if ( v10 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v11 )
    ExFreePoolWithTag((PVOID)v11, 0x446D7454u);
LABEL_36:
  TtmiLogDeviceArrivalNotified(v9, a2, v6, v16, v13);
  return v13;
}
