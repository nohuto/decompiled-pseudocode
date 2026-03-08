/*
 * XREFs of VfPtGenerateTraceInformation @ 0x140ADB7D8
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1402EF150 (RtlEnumerateGenericTableAvl.c)
 *     RtlNumberGenericTableElementsAvl @ 0x140303C70 (RtlNumberGenericTableElementsAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405CFEE0 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x1405CFF24 (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x1405CFFC0 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x1405CFFD4 (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1405D0044 (ViPtReleaseTreeLockFromDpcLevel.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfPtGenerateTraceInformation(char a1)
{
  unsigned int v1; // edi
  unsigned int v2; // r15d
  int v3; // ebx
  ULONG v4; // esi
  BOOLEAN i; // dl
  unsigned int v6; // edx
  _QWORD *v7; // rax
  char *Pool2; // r14
  unsigned int v9; // ebx
  _DWORD *v10; // rdx
  char *v11; // rsi
  _QWORD *v12; // r8
  __int64 v13; // rax
  char *v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  char *v18; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  ULONG v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]
  __int64 v23; // [rsp+78h] [rbp-8h]
  ULONG v24; // [rsp+B8h] [rbp+38h]

  v22 = 0;
  v1 = 0;
  v2 = 0;
  v17 = 0LL;
  if ( (VfRuleClasses & 8) != 0 && (VfOptionFlags & 0x1000) != 0 )
  {
    v3 = 0;
    if ( a1 )
      v3 = 2;
    v24 = RtlNumberGenericTableElementsAvl(&ViPoolInfoAvl);
    v4 = v24;
    ViPtInitializeLockContext((__int64)&v17);
    ViPtRaiseIrqlSafe((__int64)&v17);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v17);
    for ( i = 1; ; i = 0 )
    {
      v7 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, i);
      if ( !v7 )
        break;
      v6 = v1 + 1;
      if ( v7[3] <= v7[4] )
        v6 = v1;
      v1 = v6;
    }
    Pool2 = (char *)ExAllocatePool2(64LL, 440 * v1, 0x6E496956u);
    if ( Pool2 )
    {
      v10 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 1u);
      if ( v10 )
      {
        v11 = Pool2 + 8;
        do
        {
          if ( *((_QWORD *)v10 + 3) > *((_QWORD *)v10 + 4) && v2 < v1 )
          {
            *((_DWORD *)v11 - 2) = *v10;
            v12 = v11 + 32;
            *((_DWORD *)v11 - 1) = v10[1];
            *(_DWORD *)v11 = v10[2];
            *((_DWORD *)v11 + 1) = v10[3];
            *((_DWORD *)v11 + 2) = v10[4];
            *((_QWORD *)v11 + 2) = *((_QWORD *)v10 + 3);
            v13 = *((_QWORD *)v10 + 4);
            v14 = (char *)((char *)v10 - (v11 - 8));
            *((_QWORD *)v11 + 3) = v13;
            v15 = 50LL;
            do
            {
              *v12 = *(_QWORD *)((char *)v12 + (_QWORD)v14);
              ++v12;
              --v15;
            }
            while ( v15 );
            ++v2;
            v11 += 440;
          }
          v10 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 0);
        }
        while ( v10 );
        v4 = v24;
      }
      ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v17);
      ViPtCleanupLockContext((__int64)&v17);
      v23 = 0LL;
      v20 = ViPoolStackInfoAllocCount;
      v18 = Pool2;
      v19 = 440 * v1;
      v21 = v4;
      v9 = DbgkWerCaptureLiveKernelDump(
             L"DriverVerifier",
             485LL,
             (__int64)Pool2,
             440 * v1,
             (unsigned int)ViPoolStackInfoAllocCount,
             v4,
             (__int64)&v18,
             (__int64)ViPtCaptureTraceInformationCallBack,
             v3);
      ExFreePoolWithTag(Pool2, 0x6E496956u);
    }
    else
    {
      v9 = -1073741801;
      ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v17);
      ViPtCleanupLockContext((__int64)&v17);
    }
  }
  else
  {
    return (unsigned int)-1073738628;
  }
  return v9;
}
