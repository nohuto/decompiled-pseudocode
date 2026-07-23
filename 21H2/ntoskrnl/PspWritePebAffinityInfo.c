/*
 * XREFs of PspWritePebAffinityInfo @ 0x1406A2104
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1406F509C (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x140908930 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14027DD98 (KeQueryGroupMaskProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  int v12; // r9d
  signed __int32 v13[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v14; // [rsp+20h] [rbp-88h]
  unsigned int v15; // [rsp+24h] [rbp-84h]
  unsigned int GroupMaskProcess; // [rsp+28h] [rbp-80h]
  unsigned int v17; // [rsp+2Ch] [rbp-7Ch]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+48h] [rbp-60h]
  _OWORD v22[3]; // [rsp+50h] [rbp-58h] BYREF

  v21 = a2;
  memset(v22, 0, sizeof(v22));
  v3 = 0;
  v14 = 0;
  v15 = 0;
  v4 = *(_QWORD *)(a2 + 1360);
  v19 = v4;
  if ( !v4 )
    return;
  if ( *(_QWORD *)(a2 + 1088) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      if ( a2 != *(_QWORD *)(a1 + 544) )
        v3 = 2;
      v14 = v3;
      if ( v3 < 2 )
      {
LABEL_19:
        if ( (v3 & 1) != 0 )
          KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v22);
        goto LABEL_3;
      }
    }
    else
    {
      v3 = 3;
      v14 = 3;
    }
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1112)) )
      return;
    goto LABEL_19;
  }
LABEL_3:
  v17 = v3;
  v5 = 0LL;
  v6 = *(__int64 **)(a2 + 1408);
  if ( v6 )
    v5 = *v6;
  v20 = v5;
  do
  {
    do
    {
      GroupMaskProcess = KeQueryGroupMaskProcess(a2);
      _BitScanForward((unsigned int *)&v8, GroupMaskProcess);
      v15 = v8;
      v9 = *(_QWORD *)(a2 + 8 * v8 + 88);
      v18 = v9;
    }
    while ( !v9 );
    *(_QWORD *)(v4 + 312) = v9;
    if ( v7 )
      *(_DWORD *)(v7 + 192) = v9 | HIDWORD(v9);
    _InterlockedOr(v13, 0);
    v10 = KeQueryGroupMaskProcess(a2);
  }
  while ( v12 != v10 || v11 != *(_QWORD *)(a2 + 8LL * v15 + 88) );
  if ( v3 )
  {
    if ( (v3 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v22, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1112));
  }
}
