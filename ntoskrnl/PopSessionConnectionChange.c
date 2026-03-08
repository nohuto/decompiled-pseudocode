/*
 * XREFs of PopSessionConnectionChange @ 0x14079A150
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     PopSessionDisconnected @ 0x14067FF58 (PopSessionDisconnected.c)
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 *     PopSessionConnected @ 0x14079A204 (PopSessionConnected.c)
 */

void __fastcall PopSessionConnectionChange(unsigned int a1, char *a2, __int64 a3)
{
  char v3; // di
  char v5; // bl
  const char *v8; // rax
  const char *v9; // r8

  v3 = *a2;
  v5 = a2[1];
  PopAcquireAdaptiveLock(1, (__int64)a2);
  v8 = "Connected";
  if ( !v3 )
    v8 = "Disconnected";
  v9 = "Console";
  if ( !v5 )
    v9 = "Remote";
  PopPrintEx(3LL, (__int64)"PopAdaptive:>>>>>%s session %u is %s\n", v9, a1, v8);
  if ( v3 )
    PopSessionConnected(a1, a2, a3);
  else
    PopSessionDisconnected(a1, a3);
  PopReleaseAdaptiveLock();
}
