/*
 * XREFs of LdrpDetectDetour @ 0x18006347C
 * Callers:
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpEnableParallelLoading @ 0x180062AE8 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TpReleaseWork @ 0x18000F180 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18007F860 (TpWaitForWork.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008CAB0 (__report_rangecheckfailure.c)
 *     NtSetInformationProcess @ 0x18009D860 (NtSetInformationProcess.c)
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

void LdrpDetectDetour()
{
  __int64 v0; // rdx
  __int64 (__fastcall **v1)(int, int, int, int, ULONG, ULONG); // rbx
  __int64 v2; // rcx
  __int64 (__fastcall **v3)(int, int, int, int, ULONG, ULONG); // r10
  __int64 v4; // r8
  __int64 v5; // xmm1_8
  unsigned __int8 *v6; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  char v9; // cl
  _QWORD *v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rax
  char v13; // al
  NTSTATUS v14; // eax
  int ProcessInformation; // [rsp+30h] [rbp-38h] BYREF
  int ThreadInformation; // [rsp+34h] [rbp-34h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-20h]

  v0 = 0LL;
  v1 = &LdrpCriticalLoaderFunctions;
  ProcessInformation = 0;
  v2 = 0LL;
  v3 = &LdrpCriticalLoaderFunctions;
  do
  {
    v4 = 0LL;
    v5 = *((_QWORD *)*v3 + 2);
    v6 = (unsigned __int8 *)&LdrpThunkVariableBytes;
    v17 = *(_OWORD *)*v3;
    v18 = v5;
    do
    {
      v7 = *v6;
      if ( v7 >= 0x18 )
        _report_rangecheckfailure(v2, v0, v4);
      v4 = (unsigned int)(v4 + 1);
      *((_BYTE *)&v17 + v7) = 0;
      ++v6;
    }
    while ( (unsigned int)v4 < 4 );
    v8 = LdrpThunkTemplate - v17;
    if ( LdrpThunkTemplate == (_QWORD)v17 )
    {
      v8 = qword_180169728 - *((_QWORD *)&v17 + 1);
      if ( qword_180169728 == *((_QWORD *)&v17 + 1) )
        v8 = qword_180169730 - v18;
    }
    if ( v8 )
    {
      v0 = (1 << v2) | (unsigned int)v0;
      ProcessInformation = v0;
    }
    v2 = (unsigned int)(v2 + 1);
    ++v3;
  }
  while ( (unsigned int)v2 < 0x20 );
  if ( (_DWORD)v0
    && (v14 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessLoaderDetour, &ProcessInformation, 4u),
        v14 < 0) )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3924,
        (unsigned int)"LdrpDetectDetour",
        1,
        (__int64)"NtSetInformationProcess: ProcessLoaderDetour failed with status 0x%08lx\n",
        v14);
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x40) != 0 )
      __debugbreak();
  }
  else
  {
    v9 = LdrpDebugFlags;
  }
  if ( !LdrpDetourExist )
  {
    v10 = &LdrpThunkSignature;
    v11 = 0;
    while ( 1 )
    {
      v12 = *v10 - *(_QWORD *)*v1;
      if ( *v10 == *(_QWORD *)*v1 )
        v12 = v10[1] - *((_QWORD *)*v1 + 1);
      if ( v12 )
        break;
      v10 += 2;
      ++v11;
      ++v1;
      if ( v11 >= 5 )
        goto LABEL_19;
    }
    if ( (v9 & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3944,
        (unsigned int)"LdrpDetectDetour",
        2,
        (__int64)"!!! Detour detected, disable parallel loading\n");
    LdrpDetourExist = 1;
LABEL_19:
    if ( ZwQueryInformationThread(
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           ThreadDynamicCodePolicyInfo,
           &ThreadInformation,
           4u,
           0LL) < 0 )
    {
      v13 = LdrpDetourExist;
    }
    else
    {
      v13 = LdrpDetourExist;
      if ( ThreadInformation == 1 )
        v13 = 1;
      LdrpDetourExist = v13;
    }
    if ( v13 )
    {
      if ( LdrpMapAndSnapWork )
      {
        TpWaitForWork(LdrpMapAndSnapWork, 1u);
        TpReleaseWork(LdrpMapAndSnapWork);
        LdrpMapAndSnapWork = 0LL;
      }
    }
  }
}
