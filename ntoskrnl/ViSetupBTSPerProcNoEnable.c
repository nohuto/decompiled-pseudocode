/*
 * XREFs of ViSetupBTSPerProcNoEnable @ 0x140AD0C10
 * Callers:
 *     VfInitializeBranchTracing @ 0x140AD0860 (VfInitializeBranchTracing.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 ViSetupBTSPerProcNoEnable()
{
  __int64 v0; // rdi
  unsigned int v1; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  Affinity = 0LL;
  for ( PreviousAffinity = 0LL; (unsigned int)v0 < (unsigned int)KeNumberProcessors_0; v0 = (unsigned int)(v0 + 1) )
  {
    v1 = KiProcessorIndexToNumberMappingTable[v0];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v1 >> 6);
    Affinity.Mask = 1LL << (v1 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    __writemsr(0x600u, VfBTSDataManagementArea[v0]);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  return 1LL;
}
