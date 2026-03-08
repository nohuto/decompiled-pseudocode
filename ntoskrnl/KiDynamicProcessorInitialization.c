/*
 * XREFs of KiDynamicProcessorInitialization @ 0x140569868
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeOptimizeSpecCtrlSettings @ 0x140396CC4 (KeOptimizeSpecCtrlSettings.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeWriteProtectProcessorState @ 0x140A8E420 (KeWriteProtectProcessorState.c)
 */

void __fastcall KiDynamicProcessorInitialization(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(unsigned int *)(a1 + 36);
  Affinity = 0LL;
  v3 = KiProcessorIndexToNumberMappingTable[v1];
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v3 >> 6);
  Affinity.Mask = 1LL << (v3 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  KeWriteProtectProcessorState(a1 - 384);
  KeOptimizeSpecCtrlSettings();
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
