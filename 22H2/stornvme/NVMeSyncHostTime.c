/*
 * XREFs of NVMeSyncHostTime @ 0x1C001C0CC
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0002BA8 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
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
  v4 = *(void **)(a1 + 936);
  *(_BYTE *)(a1 + 851) = 0;
  memset(v4, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
  v5 = *(_QWORD **)(a1 + 936);
  v6 = v10;
  *(_QWORD *)(a1 + 904) = v5;
  *(_DWORD *)(a1 + 840) = 1;
  if ( (unsigned int)SetPrpFromBuffer(a1, v5, v6, 8u) )
  {
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) |= i )
      ++i;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) |= 4u;
    SrbAssignQueueId(a1, a1 + 848);
    *(_DWORD *)(*(_QWORD *)(a1 + 936) + 4100LL) = -1;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4096LL) = 9;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4136LL) = 14;
    ProcessCommand(a1, a1 + 848);
    WaitForCommandCompleteWithCustomTimeout(a1);
    v7 = *(_BYTE *)(a1 + 851) != 1 ? 0xC1000001 : 0;
  }
  else
  {
    v7 = -1056964607;
  }
  if ( v9 )
    NVMeFreeDmaBuffer(a1, 8LL, (__int64 *)&v9, v10);
  return v7;
}
