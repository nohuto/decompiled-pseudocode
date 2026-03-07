__int64 __fastcall PspFreezeJobTree(__int64 a1, __int64 a2)
{
  int v4; // r14d
  int v5; // eax
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // esi
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14[2]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v15[11]; // [rsp+58h] [rbp-31h] BYREF

  v14[1] = 0LL;
  v13 = 0LL;
  *(_OWORD *)v15 = 0LL;
  memset(&v15[3], 0, 0x40uLL);
  v14[0] = a2;
  LODWORD(v12) = 0;
  v4 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 1536) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v5 )
        goto LABEL_21;
    }
    else if ( !v5 )
    {
      goto LABEL_21;
    }
    if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage()
      && !*(_BYTE *)(a2 + 4)
      && ((*(_BYTE *)a2 ^ *(_BYTE *)(a1 + 1540)) & 8) == 0 )
    {
      goto LABEL_21;
    }
  }
  if ( (*(_DWORD *)a2 & 4) == 0 )
    goto LABEL_12;
  v6 = *(_DWORD *)(a1 + 1536) & 0x80000;
  if ( *(_BYTE *)(a2 + 5) )
  {
    if ( !v6 )
      goto LABEL_12;
LABEL_21:
    LODWORD(v12) = -1073741811;
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    return (unsigned int)v12;
  }
  if ( !v6 )
    goto LABEL_21;
LABEL_12:
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 1536) & 0x800) != 0 )
    {
      PspComputeReportWakeFilter((_DWORD *)a1, &v13, (__int64 *)(a2 + 8), 1);
      if ( v13 )
      {
        v7 = *(_OWORD *)(a1 + 1112);
        *(_OWORD *)&v15[3] = *(_OWORD *)(a1 + 1096);
        v8 = *(_OWORD *)(a1 + 1128);
        *(_OWORD *)&v15[5] = v7;
        v9 = *(_OWORD *)(a1 + 1144);
        *(_OWORD *)&v15[7] = v8;
        *(_OWORD *)&v15[9] = v9;
      }
    }
    *(_QWORD *)(a1 + 1168) = *(_QWORD *)(a2 + 8);
  }
  v10 = 5;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1536), 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1536), 9u);
    if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage()
      && (*(_DWORD *)a2 & 8) == 0 )
    {
      if ( *(_BYTE *)(a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1540), 3u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1540), 3u);
    }
    v4 = 5;
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1536), 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1536), 0x13u);
  }
  else
  {
    v10 = v4;
    if ( !v4 )
      goto LABEL_35;
  }
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    (int)PspSetJobFreezeCountCallback,
    0,
    (int)PspSetProcessFreezeStateCallback,
    (__int64)v14,
    v10);
LABEL_35:
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( v10 )
  {
    PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)a1, 0, (int)PspExecuteJobFreezeThawCallback, 0, (__int64)&v12, 0);
    if ( (int)v12 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      LODWORD(v15[0]) = 4;
      BYTE5(v15[0]) = 0;
      PspFreezeJobTree(a1, v15);
      LODWORD(v12) = 262;
    }
  }
  PspDispatchWakeNotification((PVOID)a1);
  return (unsigned int)v12;
}
