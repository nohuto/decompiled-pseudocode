/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x1402C49E4
 * Callers:
 *     PspCreateThread @ 0x140648C4C (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v5; // bl
  int v7; // eax
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v5 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v7 = *(_DWORD *)(a1 + 2172);
    if ( (v7 & 1) == 0 && (v7 & 0x1000) == 0 && (*(_BYTE *)(a1 + 992) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v8, a4);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 24LL) != 0LL;
      KiUnstackDetachProcess((__int64)v8, 0);
    }
  }
  return v5;
}
