/*
 * XREFs of PspEstablishJobHierarchy @ 0x1407001E0
 * Callers:
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x140797010 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     IoSetDiskIoAttributionOnProcess @ 0x140295634 (IoSetDiskIoAttributionOnProcess.c)
 *     PsGetProcessSessionId @ 0x140299380 (PsGetProcessSessionId.c)
 *     KeRemoveSchedulingGroup @ 0x1402F1480 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x1402F161C (KeInsertSchedulingGroup.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     PspUnlinkJobProcess @ 0x1406F811C (PspUnlinkJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspBindProcessSessionToJob @ 0x140700678 (PspBindProcessSessionToJob.c)
 *     MmLinkJobProcess @ 0x1407006C4 (MmLinkJobProcess.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1407833A8 (PspAddSchedulingGroupToJobChain.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x140788AC4 (PspUpdateJobEffectivePriorityLimits.c)
 *     PspSetEffectiveJobLimits @ 0x14078B504 (PspSetEffectiveJobLimits.c)
 *     PspEstablishDfssHierarchy @ 0x1409AF340 (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x1409AFA38 (PspSetEffectiveRateControlJob.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(char *Object, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // esi
  _QWORD *Pool2; // r15
  unsigned __int64 v10; // r14
  unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  PVOID v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  char v17; // al
  __int64 v18; // rdx
  int i; // r8d
  __int64 v20; // rax
  bool v21; // zf
  void *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h]

  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
      {
        if ( a4 == 4 || a4 == 5 )
          goto LABEL_10;
        if ( a4 != 6 )
        {
          if ( a4 != 7 )
          {
            v8 = -1073741811;
            goto LABEL_68;
          }
LABEL_10:
          Pool2 = 0LL;
          v10 = *(_QWORD *)(a3 + 1320) + 1LL;
          if ( v10 > 2 )
          {
            Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v10 - 16, 1649046352LL);
            if ( !Pool2 )
              return 3221225626LL;
          }
          if ( a4 - 4 <= 1 )
          {
            v8 = PspBindProcessSessionToJob(Object, a2);
            if ( v8 < 0 )
              goto LABEL_55;
          }
          v12 = (unsigned __int16 *)*((_QWORD *)Object + 154);
          if ( v12 )
          {
            KeRemoveSchedulingGroup(v12);
            if ( (*(_DWORD *)(a3 + 1536) & 0x20) == 0 )
            {
              v8 = PspAddSchedulingGroupToJobChain(a3, 0LL);
              if ( v8 < 0 )
              {
                KeInsertSchedulingGroup(
                  *((_QWORD *)Object + 153) + 128LL,
                  *(_QWORD *)(*((_QWORD *)Object + 153) + 128LL),
                  0LL);
LABEL_55:
                if ( Pool2 )
                  ExFreePoolWithTag(Pool2, 0x624A7350u);
                goto LABEL_68;
              }
            }
            KeInsertSchedulingGroup(
              *((_QWORD *)Object + 153) + 128LL,
              *(_QWORD *)(*((_QWORD *)Object + 153) + 128LL),
              *(_QWORD *)(a3 + 1224) + 128LL);
          }
          else
          {
            v13 = *(_QWORD *)(a3 + 1232);
            if ( v13 )
              *((_QWORD *)Object + 154) = v13;
          }
          v14 = Object;
          if ( a4 != 4 )
            v14 = (PVOID)a3;
          ObfReferenceObjectWithTag(v14, 0x73507350u);
          v15 = *(_QWORD **)(a3 + 1280);
          v16 = Object + 1256;
          if ( *v15 != a3 + 1272 )
            __fastfail(3u);
          *v16 = a3 + 1272;
          *((_QWORD *)Object + 158) = v15;
          *v15 = v16;
          *(_QWORD *)(a3 + 1280) = v16;
          *((_QWORD *)Object + 161) = a3;
          *((_QWORD *)Object + 162) = *(_QWORD *)(a3 + 1296);
          v17 = *(_BYTE *)(a3 + 1086) + 1;
          *((_QWORD *)Object + 165) = v10;
          Object[1086] = v17;
          if ( v10 > 2 )
          {
            if ( v10 > 3 )
            {
              v18 = *(_QWORD *)(a3 + 1320) - 2LL;
              if ( *(_QWORD *)(a3 + 1320) != 2LL )
              {
                do
                {
                  Pool2[v18] = *(_QWORD *)(*(_QWORD *)(a3 + 1328) + 8 * v18 - 8);
                  --v18;
                }
                while ( v18 );
              }
            }
            *Pool2 = *(_QWORD *)(a3 + 1288);
            *((_QWORD *)Object + 166) = Pool2;
            Pool2 = 0LL;
          }
          if ( a4 == 4 )
          {
            PspUnlinkJobProcess(a3, a2);
            MmLinkJobProcess(Object, a2);
          }
          PspSetEffectiveJobLimits(Object, 0LL);
          *((_DWORD *)Object + 262) += *(_DWORD *)(a3 + 1048);
          if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
            *((_DWORD *)Object + 263) += *(_DWORD *)(a3 + 1052);
          *((_DWORD *)Object + 265) += *(_DWORD *)(a3 + 1060);
          *((_DWORD *)Object + 264) += *(_DWORD *)(a3 + 1056);
          *((_DWORD *)Object + 266) += *(_DWORD *)(a3 + 1064);
          *((_QWORD *)Object + 224) = *(_QWORD *)(a3 + 1792);
          PspUpdateJobEffectivePriorityLimits(Object, 3LL);
          if ( (*(_DWORD *)(a3 + 1536) & 0x1841000) != 0 )
            _InterlockedOr((volatile signed __int32 *)Object + 384, *(_DWORD *)(a3 + 1536) & 0x1841000);
          for ( i = 0; i < 3; ++i )
          {
            if ( (unsigned int)(i - 1) > 1 && *(_QWORD *)(a3 + 1024) )
              PspSetEffectiveRateControlJob(Object);
          }
          if ( *(_DWORD *)(a3 + 1564) )
          {
            v20 = a3;
            v21 = a3 == 0;
          }
          else
          {
            v20 = *(_QWORD *)(a3 + 1568);
            v21 = v20 == 0;
          }
          if ( v21 )
          {
            if ( *((_DWORD *)Object + 391) && a4 == 4 )
              IoSetDiskIoAttributionOnProcess(*((_QWORD *)Object + 196), a2);
          }
          else
          {
            v26 = 1LL;
            v25[0] = 0LL;
            v25[1] = v20;
            PspEnumJobsAndProcessesInJobHierarchy(
              Object,
              (int)PspSetJobIoAttributionJobPreCallback,
              0,
              0,
              (__int64)v25,
              5);
          }
          v22 = *(void **)(a3 + 1776);
          if ( v22 )
          {
            ObfReferenceObjectWithTag(v22, 0x624A7350u);
            *((_QWORD *)Object + 222) = *(_QWORD *)(a3 + 1776);
            *((_QWORD *)Object + 223) = *(_QWORD *)(a3 + 1784);
          }
          if ( a4 == 7 )
            _interlockedbittestandset((volatile signed __int32 *)Object + 385, 0);
          v8 = 0;
          goto LABEL_55;
        }
        _interlockedbittestandset((volatile signed __int32 *)Object + 385, 0);
        goto LABEL_61;
      }
      PspUnlinkJobProcess(a3, a2);
      MmLinkJobProcess(Object, a2);
      ObfReferenceObjectWithTag(Object, 0x73507350u);
      ObfDereferenceObjectWithTag((PVOID)a3, 0x73507350u);
      v23 = *((_QWORD *)Object + 196);
      if ( *((_DWORD *)Object + 391) )
        goto LABEL_60;
      if ( v23 )
      {
        v23 = *(_QWORD *)(v23 + 1568);
LABEL_60:
        IoSetDiskIoAttributionOnProcess(v23, a2);
      }
    }
LABEL_61:
    v8 = 0;
    goto LABEL_68;
  }
  v8 = PspBindProcessSessionToJob(Object, a2);
  if ( v8 >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x73507350u);
    MmLinkJobProcess(Object, a2);
  }
  v24 = *((_QWORD *)Object + 196);
  if ( !*((_DWORD *)Object + 391) )
  {
    if ( !v24 )
      goto LABEL_68;
    v24 = *(_QWORD *)(v24 + 1568);
  }
  IoSetDiskIoAttributionOnProcess(v24, a2);
LABEL_68:
  if ( a2 && v8 >= 0 && PsCpuFairShareEnabled )
  {
    if ( (unsigned int)PsGetProcessSessionId(a2) )
      PspEstablishDfssHierarchy(Object, a2, a4);
  }
  return (unsigned int)v8;
}
