/*
 * XREFs of NVMeSyncHostTime @ 0x1C002492C
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1C000556C (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeSyncHostTime(__int64 a1)
{
  unsigned __int64 v2; // rbx
  void *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  int i; // edx
  unsigned __int64 *v9; // [rsp+48h] [rbp+28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+30h]
  unsigned __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  StorPortQuerySystemTime(&v11);
  v2 = (v11 / 0x2710 - 11644473600000LL) & 0xFFFFFFFFFFFFLL;
  NVMeAllocateDmaBuffer(a1, 8u);
  if ( !v9 )
    return 3238002691LL;
  NVMeZeroMemory(v9, 8u);
  *v9 = v2;
  v4 = *(void **)(a1 + 952);
  *(_BYTE *)(a1 + 867) = 0;
  memset(v4, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v5 = *(_QWORD **)(a1 + 952);
  v6 = v10;
  *(_QWORD *)(a1 + 920) = v5;
  *(_DWORD *)(a1 + 856) = 1;
  if ( (unsigned int)SetPrpFromBuffer(a1, v5, v6, 8u) )
  {
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= i )
      ++i;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= 4u;
    SrbAssignQueueId(a1, a1 + 864);
    *(_DWORD *)(*(_QWORD *)(a1 + 952) + 4100LL) = -1;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4096LL) = 9;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4136LL) = 14;
    ProcessCommand(a1, a1 + 864);
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
    v7 = *(_BYTE *)(a1 + 867) != 1 ? 0xC1000001 : 0;
  }
  else
  {
    v7 = -1056964607;
  }
  if ( v9 )
    NVMeFreeDmaBuffer(a1, 8LL, (__int64 *)&v9, v10);
  return v7;
}
