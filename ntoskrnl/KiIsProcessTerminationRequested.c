/*
 * XREFs of KiIsProcessTerminationRequested @ 0x140354EE0
 * Callers:
 *     KiSchedulerApc @ 0x140353560 (KiSchedulerApc.c)
 *     KiSchedulerApcTerminate @ 0x1407DBA70 (KiSchedulerApcTerminate.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall KiIsProcessTerminationRequested(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // eax
  _DWORD v5[5]; // [rsp+0h] [rbp-2Ch]

  v2 = *(_DWORD *)(a1 + 120);
  v5[1] = -1073741523;
  v5[2] = -1073739996;
  v5[3] = -1073739995;
  v3 = v2 & 0xC0000;
  if ( v3 )
  {
    *a2 = v5[(unsigned __int64)v3 >> 18];
    LOBYTE(v3) = 1;
  }
  return v3;
}
