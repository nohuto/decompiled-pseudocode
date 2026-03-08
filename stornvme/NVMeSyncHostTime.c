/*
 * XREFs of NVMeSyncHostTime @ 0x1C0024318
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1C001B45C (SetPrpFromBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSyncHostTime(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // ebx
  int i; // edx
  unsigned __int64 *v6; // [rsp+48h] [rbp+28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+30h]
  unsigned __int64 v8; // [rsp+58h] [rbp+38h] BYREF

  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  StorPortQuerySystemTime(&v8);
  v2 = (v8 / 0x2710 - 11644473600000LL) & 0xFFFFFFFFFFFFLL;
  NVMeAllocateDmaBuffer(a1, 8u);
  if ( !v6 )
    return 3238002691LL;
  NVMeZeroMemory(v6, 8u);
  *v6 = v2;
  LocalCommandReuse(a1, a1 + 944);
  if ( (unsigned int)SetPrpFromBuffer(a1, *(_QWORD **)(a1 + 1040), v7, 8u) )
  {
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= i )
      ++i;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 4u;
    SrbAssignQueueId(a1, a1 + 952);
    *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4100LL) = -1;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4096LL) = 9;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4136LL) = 14;
    ProcessCommand(a1, a1 + 952);
    WaitForCommandCompleteWithCustomTimeout(a1);
    v4 = *(_BYTE *)(a1 + 955) != 1 ? 0xC1000001 : 0;
  }
  else
  {
    v4 = -1056964607;
  }
  if ( v6 )
    NVMeFreeDmaBuffer(a1, 8LL, (__int64 *)&v6, v7);
  return v4;
}
