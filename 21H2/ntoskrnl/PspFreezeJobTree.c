/*
 * XREFs of PspFreezeJobTree @ 0x1405DA488
 * Callers:
 *     PspFreezeJobTree @ 0x1405DA488 (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspFreezeJobTree @ 0x1405DA488 (PspFreezeJobTree.c)
 *     PspDispatchWakeNotification @ 0x1405DA6C4 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1405DA738 (PspComputeReportWakeFilter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspFreezeJobTree(char *Object, __int64 a2)
{
  int v4; // esi
  __int64 v5; // r9
  int v6; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-19h]
  _OWORD v17[4]; // [rsp+60h] [rbp-9h] BYREF

  v15[1] = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  v15[0] = a2;
  v4 = 0;
  LODWORD(v13) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v11 = *((_DWORD *)Object + 330) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v11 )
        goto LABEL_35;
    }
    else if ( !v11 )
    {
      goto LABEL_35;
    }
  }
  if ( (v6 & 4) != 0 )
  {
    v12 = *((_DWORD *)Object + 330) & 0x80000;
    if ( *(_BYTE *)(a2 + 5) )
    {
      if ( !v12 )
        goto LABEL_3;
    }
    else if ( v12 )
    {
      goto LABEL_3;
    }
LABEL_35:
    LODWORD(v13) = -1073741811;
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    return (unsigned int)v13;
  }
LABEL_3:
  if ( (v6 & 2) != 0 )
  {
    if ( (*((_DWORD *)Object + 330) & 0x800) != 0 )
    {
      LOBYTE(v5) = 1;
      PspComputeReportWakeFilter(Object, &v14, a2 + 8, v5);
      if ( v14 )
      {
        v8 = *((_OWORD *)Object + 56);
        v17[0] = *((_OWORD *)Object + 55);
        v9 = *((_OWORD *)Object + 57);
        v17[1] = v8;
        v10 = *((_OWORD *)Object + 58);
        v17[2] = v9;
        v17[3] = v10;
      }
    }
    *((_QWORD *)Object + 119) = *(_QWORD *)(a2 + 8);
    v6 = *(_DWORD *)a2;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)Object + 330, 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)Object + 330, 9u);
    v6 = *(_DWORD *)a2;
    v4 = 5;
  }
  if ( (v6 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)Object + 330, 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)Object + 330, 0x13u);
    v4 = 5;
  }
  if ( v4 )
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v15, v4);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  if ( v4 )
  {
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v13, 0);
    if ( (int)v13 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      LODWORD(v16) = 4;
      BYTE5(v16) = 0;
      PspFreezeJobTree(Object);
      LODWORD(v13) = 262;
    }
  }
  PspDispatchWakeNotification(Object);
  return (unsigned int)v13;
}
