/*
 * XREFs of PspWritePebAffinityInfo @ 0x14070687C
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1406FF17C (PspApplyJobLimitsToProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1409ACC60 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PspGetProcessAffinityForPeb @ 0x1407069CC (PspGetProcessAffinityForPeb.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 *v6; // rax
  __int64 v7; // r14
  __int128 v8; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-90h]
  __int64 v10; // [rsp+40h] [rbp-88h]
  __int64 v11; // [rsp+48h] [rbp-80h]
  __int128 v12; // [rsp+50h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  v11 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = 0LL;
  v12 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 1360);
  v9 = v4;
  if ( !v4 )
    return;
  if ( !*(_QWORD *)(a2 + 1088) )
    goto LABEL_3;
  if ( a2 == *(_QWORD *)(a1 + 184) )
  {
    if ( a2 != *(_QWORD *)(a1 + 544) )
      v3 = 2;
  }
  else
  {
    v3 = 3;
  }
  if ( v3 < 2 || ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1112)) )
  {
    if ( (v3 & 1) != 0 )
      KeStackAttachProcess((PRKPROCESS)a2, &ApcState);
LABEL_3:
    v5 = 0LL;
    v6 = *(__int64 **)(a2 + 1408);
    if ( v6 )
      v5 = *v6;
    v10 = v5;
    do
    {
      PspGetProcessAffinityForPeb(a2, &v8);
      v7 = v8;
      *(_QWORD *)(v4 + 312) = v8;
      if ( v5 )
        *(_DWORD *)(v5 + 192) = v7 | HIDWORD(v7);
      PspGetProcessAffinityForPeb(a2, &v12);
    }
    while ( WORD4(v8) != WORD4(v12) || v7 != (_QWORD)v12 );
    if ( v3 )
    {
      if ( (v3 & 1) != 0 )
        KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1112));
    }
  }
}
