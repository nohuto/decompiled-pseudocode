/*
 * XREFs of HalGetEnvironmentVariableEx @ 0x1402AF770
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403AEE1C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     IoSaveInitialBugCheckProgress @ 0x14054E7F0 (IoSaveInitialBugCheckProgress.c)
 *     IopGetEnvironmentVariableHal @ 0x140729DB0 (IopGetEnvironmentVariableHal.c)
 *     NtQueryDriverEntryOrder @ 0x1409FC490 (NtQueryDriverEntryOrder.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140A9D8B4 (PopSetMemoryOverwriteRequestAction.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     HalEfiGetEnvironmentVariable @ 0x1402AF8BC (HalEfiGetEnvironmentVariable.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 */

__int64 __fastcall HalGetEnvironmentVariableEx(const wchar_t *a1, int a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // rax
  rsize_t v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  unsigned int v18; // edx
  unsigned int EnvironmentVariable; // edi
  __int64 result; // rax
  wchar_t Dst[4]; // [rsp+30h] [rbp+0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp+8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp+18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a1[v9] );
  v10 = 1;
  v11 = (unsigned int)(v9 + 1);
  if ( (unsigned int)v11 >= 0x100 )
    v11 = 256LL;
  v12 = (unsigned int)v11;
  v13 = 2 * v11;
  v14 = v13 + 15;
  if ( v13 + 15 < v13 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = alloca(v15);
  v17 = alloca(v15);
  wcscpy_s(Dst, v12, a1);
  *(_QWORD *)Dst = (unsigned int)*a4;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v10 = 0;
  }
  else
  {
    v18 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v18 >> 6);
    Affinity.Mask = 1LL << (v18 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  EnvironmentVariable = HalEfiGetEnvironmentVariable((unsigned int)Dst, a2, a5, (unsigned int)Dst, a3);
  if ( v10 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  result = EnvironmentVariable;
  *a4 = *(_DWORD *)Dst;
  return result;
}
