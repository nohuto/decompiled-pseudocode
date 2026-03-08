/*
 * XREFs of PopAdaptivePersistSystemInitatedRebootState @ 0x14059B9D8
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopBcdOpen @ 0x14082B4E4 (PopBcdOpen.c)
 *     PopBcdClose @ 0x14082B524 (PopBcdClose.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     PopDiagTraceAdaptiveBootOverridePrepared @ 0x1409894CC (PopDiagTraceAdaptiveBootOverridePrepared.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1409987C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     BcdSetElementData @ 0x140A59BF0 (BcdSetElementData.c)
 */

__int64 __fastcall PopAdaptivePersistSystemInitatedRebootState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int SystemInitiatedRebootTargetBootEntry; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF

  v10 = 0LL;
  v2 = -1LL;
  v3 = -1LL;
  v9 = -1LL;
  v11 = 0LL;
  v8 = -1LL;
  if ( byte_140D53298 )
  {
    v5 = PopBcdOpen(&v9);
    v2 = v9;
    SystemInitiatedRebootTargetBootEntry = v5;
    if ( v5 >= 0 )
    {
      SystemInitiatedRebootTargetBootEntry = PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(v9, &v11);
      if ( SystemInitiatedRebootTargetBootEntry >= 0 )
      {
        v6 = BcdOpenObject(v2, &v11, &v8);
        v3 = v8;
        SystemInitiatedRebootTargetBootEntry = v6;
        if ( v6 >= 0 )
        {
          v10 = qword_140D532A0;
          SystemInitiatedRebootTargetBootEntry = BcdSetElementData(v8, 620757338LL, &v10, 8LL);
        }
      }
    }
  }
  else
  {
    SystemInitiatedRebootTargetBootEntry = 279;
  }
  LOBYTE(a2) = (v10 & 8) != 0;
  PopDiagTraceAdaptiveBootOverridePrepared(v10 & 7, a2, (unsigned int)SystemInitiatedRebootTargetBootEntry);
  if ( v3 != -1 )
    BcdCloseObject(v3);
  if ( v2 != -1 )
    PopBcdClose(v2);
  return (unsigned int)SystemInitiatedRebootTargetBootEntry;
}
