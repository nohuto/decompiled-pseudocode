/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x14024E388
 * Callers:
 *     PspCreateThread @ 0x140701B64 (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(ULONG_PTR a1)
{
  bool v2; // bl
  int v4; // eax
  _OWORD v5[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v4 = *(_DWORD *)(a1 + 2172);
    if ( (v4 & 1) == 0 && (v4 & 0x1000) == 0 && (*(_BYTE *)(a1 + 992) & 1) == 0 )
    {
      KiStackAttachProcess(a1);
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 24LL) != 0LL;
      KiUnstackDetachProcess(v5, 0LL);
    }
  }
  return v2;
}
