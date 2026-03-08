/*
 * XREFs of KiInitializeIdleProcess @ 0x140B5F2B8
 * Callers:
 *     KiInitSystem @ 0x140B5EFDC (KiInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeInitializeIdealProcessorAssignmentBlock @ 0x1402969F4 (KeInitializeIdealProcessorAssignmentBlock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeInitializeProcess @ 0x14070A0C8 (KeInitializeProcess.c)
 */

__int64 __fastcall KiInitializeIdleProcess(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[68]; // [rsp+40h] [rbp-128h] BYREF

  v3[0] = 2097153;
  memset(&v3[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v3, 0);
  KeInitializeProcess(a1, 0, 0, (unsigned __int16 *)v3, 0LL, 0LL, 1);
  *(_BYTE *)(a1 + 641) = 127;
  *(_QWORD *)(a1 + 1512) = a1 + 1504;
  *(_QWORD *)(a1 + 1504) = a1 + 1504;
  KeInitializeIdealProcessorAssignmentBlock(a1 + 2560);
  _InterlockedOr(dword_140D4A3A0, 0x8000u);
  _InterlockedOr(dword_140D4A7BC, 0x400000u);
  result = 34404LL;
  *(_WORD *)(a1 + 2412) = -31132;
  return result;
}
