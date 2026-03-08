/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1409A37F4
 * Callers:
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmiAcquireCurrentSession @ 0x1409A1950 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiOpenDefaultTerminal @ 0x1409A80CC (TtmiOpenDefaultTerminal.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = TtmiAcquireCurrentSession((__int64)&v10);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = a2;
    v7 = v10;
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    v6 = TtmiOpenDefaultTerminal(v10, *(unsigned int *)(a1 + 8), v5, v8);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 154LL, (unsigned int)v4, (unsigned int)v4);
    v7 = v10;
  }
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v6;
}
