/*
 * XREFs of PopSessionConnectionChange @ 0x1407ED88C
 * Callers:
 *     <none>
 * Callees:
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 *     PopSessionDisconnected @ 0x1407EC2C8 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x1407ED644 (PopSessionConnected.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSessionConnectionChange(__int64 a1, char *a2, __int64 a3)
{
  char v3; // bl
  unsigned int v4; // edi
  char v5; // bp
  const char *v7; // rax
  const char *v8; // r8

  v3 = *a2;
  v4 = a1;
  v5 = a2[1];
  LOBYTE(a1) = 1;
  PopAcquireAdaptiveLock(a1, a2);
  v7 = "Connected";
  if ( !v3 )
    v7 = "Disconnected";
  v8 = "Console";
  if ( !v5 )
    v8 = "Remote";
  PopPrintEx(3LL, (__int64)"PopAdaptive:>>>>>%s session %u is %s\n", v8, v4, v7);
  if ( v3 )
    PopSessionConnected(v4, v5, a3);
  else
    PopSessionDisconnected(v4, a3);
  return PopReleaseAdaptiveLock();
}
