/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x1408FEA88
 * Callers:
 *     PopNotifySessionDisplayRequired @ 0x140773350 (PopNotifySessionDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     PoSessionEngagementUpdate @ 0x14057C0A0 (PoSessionEngagementUpdate.c)
 *     TtmpAcquireSessionById @ 0x1408FF5F0 (TtmpAcquireSessionById.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x140900450 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogError @ 0x140902AC4 (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140903A14 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x140903BA0 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // r14d
  bool v6; // si
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  char v15; // al
  __int64 v16; // rcx
  char v19; // [rsp+90h] [rbp+50h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF

  v20 = 0LL;
  v4 = 0;
  v19 = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById(&v20, a1);
  v9 = v20;
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 3853LL;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v12, v11, 0xFFFFFFFFLL);
    goto LABEL_15;
  }
  LOBYTE(v8) = a3;
  TtmpUpdateDisplayRequiredPowerRequest(v20, a2, v8);
  v13 = *(_DWORD *)(v9 + 20);
  if ( a3 )
  {
    if ( v13 == -1 )
    {
      v10 = -1073741675;
      v12 = 3905LL;
      v11 = 3221225621LL;
      goto LABEL_3;
    }
    v14 = v13 + 1;
    v6 = v14 == 1;
  }
  else
  {
    if ( !v13 )
    {
      v10 = -1073741811;
      v12 = 3885LL;
      v11 = 3221225485LL;
      goto LABEL_3;
    }
    v14 = v13 - 1;
    v6 = v14 == 0;
  }
  v10 = 0;
  *(_DWORD *)(v9 + 20) = v14;
  if ( v6 )
  {
    v15 = v19;
    if ( *(_DWORD *)(v9 + 20) )
      v15 = 1;
    v19 = v15;
  }
LABEL_15:
  if ( v9 )
  {
    v4 = *(_DWORD *)(v9 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v19);
    LOBYTE(v16) = v19;
    PoSessionEngagementUpdate(v16);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v10);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v10);
}
