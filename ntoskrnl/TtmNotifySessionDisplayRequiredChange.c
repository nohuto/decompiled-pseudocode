/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x1409A13E0
 * Callers:
 *     PopPowerRequestCallbackDisplayRequired @ 0x14073A470 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PoSessionEngagementUpdate @ 0x14059BB7C (PoSessionEngagementUpdate.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409A2D6C (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x1409A645C (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x1409A65E8 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // r14d
  bool v6; // si
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  char v15; // al
  __int64 v16; // rcx
  int v18; // eax
  char v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v21 = 0LL;
  v4 = 0;
  v20 = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById(&v21, a1);
  v9 = v21;
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 3849LL;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v12, v11, 0xFFFFFFFFLL);
    goto LABEL_12;
  }
  LOBYTE(v8) = a3;
  TtmpUpdateDisplayRequiredPowerRequest(v21, a2, v8);
  v13 = *(_DWORD *)(v9 + 20);
  if ( !a3 )
  {
    if ( !v13 )
    {
      v10 = -1073741811;
      v12 = 3881LL;
      v11 = 3221225485LL;
      goto LABEL_3;
    }
    v14 = v13 - 1;
    *(_DWORD *)(v9 + 20) = v14;
    v6 = v14 == 0;
LABEL_8:
    v10 = 0;
    if ( !v6 )
      goto LABEL_12;
    goto LABEL_9;
  }
  if ( v13 == -1 )
  {
    v10 = -1073741675;
    v12 = 3901LL;
    v11 = 3221225621LL;
    goto LABEL_3;
  }
  v18 = v13 + 1;
  *(_DWORD *)(v9 + 20) = v18;
  if ( v18 != 1 )
    goto LABEL_8;
  v6 = 1;
  v10 = 0;
LABEL_9:
  v15 = v20;
  if ( *(_DWORD *)(v9 + 20) )
    v15 = 1;
  v20 = v15;
LABEL_12:
  if ( v9 )
  {
    v4 = *(_DWORD *)(v9 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v20);
    LOBYTE(v16) = v20;
    PoSessionEngagementUpdate(v16);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v10);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v10);
}
