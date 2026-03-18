/*
 * XREFs of TtmpUpdatePowerRequestAttribute @ 0x1409A5ECC
 * Callers:
 *     TtmNotifySessionPowerRequestPresent @ 0x1409A4780 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1409A4FE0 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1409A5348 (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogError @ 0x1409A83F4 (TtmiLogError.c)
 */

char __fastcall TtmpUpdatePowerRequestAttribute(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  char v8; // bl
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v8 = 0;
  v9 = TtmpAcquireSessionById(&v11, a1);
  if ( v9 >= 0 )
  {
    if ( TtmpFindPowerRequestEntryById(v11, a2, &v12)
      && *(_DWORD *)(v12 + 20) == a3
      && *(_QWORD *)(v12 + 24) == a4
      && !*(_DWORD *)(v12 + 40) )
    {
      v8 = 1;
      *(_QWORD *)(v12 + 32) = a5;
    }
  }
  else
  {
    TtmiLogError("TtmpUpdatePowerRequestAttribute", 3530LL, (unsigned int)v9, 0xFFFFFFFFLL);
  }
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v8;
}
