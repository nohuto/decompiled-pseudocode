/*
 * XREFs of KiStartIdleThread @ 0x14037F474
 * Callers:
 *     KiInitializeAndStartInitialThread @ 0x1403AE4FC (KiInitializeAndStartInitialThread.c)
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     KiInitializeContextThread @ 0x140237E9C (KiInitializeContextThread.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1402DE1C0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiInitializePriorityState @ 0x14037F530 (KiInitializePriorityState.c)
 *     KiStartPrcbThread @ 0x14037F580 (KiStartPrcbThread.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KiStartIdleThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x48uLL);
  v8[0] = a3;
  v8[1] = KiIdleLoop;
  v8[6] = *(_QWORD *)(a1 + 544);
  v6 = *(_QWORD *)(a2 + 192);
  HIDWORD(v8[7]) = 2;
  LODWORD(v8[7]) = *(unsigned __int16 *)(v6 + 138);
  KiInitializeContextThread(a1, (__int64)v8);
  KiStartPrcbThread(a1, a2);
  *(_BYTE *)(a1 + 388) = 2;
  *(_BYTE *)(a1 + 113) = 1;
  KeInterlockedSetProcessorAffinityEx((__int64)&unk_140D4A0B0, *(_DWORD *)(a2 + 36));
  return KiInitializePriorityState(*(_QWORD *)(a2 + 56), a2, a1);
}
