/*
 * XREFs of TtmpUpdateDisplayRequiredPowerRequest @ 0x1409A2D6C
 * Callers:
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A13E0 (TtmNotifySessionDisplayRequiredChange.c)
 * Callees:
 *     TtmpFindPowerRequestEntryById @ 0x1409A22B8 (TtmpFindPowerRequestEntryById.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A2B80 (TtmpSetDisplayRequestEnded.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1409A2F00 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredPowerRequestUpdated @ 0x1409A6524 (TtmiLogSessionDisplayRequiredPowerRequestUpdated.c)
 */

__int64 __fastcall TtmpUpdateDisplayRequiredPowerRequest(unsigned int *a1, unsigned int a2, char a3)
{
  char v4; // bl
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v14 = 0LL;
  if ( TtmpFindPowerRequestEntryById((__int64)a1, a2, &v14) )
  {
    v7 = v14;
    v8 = *(_DWORD *)(v14 + 40);
    if ( a3 )
    {
      if ( v8 == -1 )
      {
        v9 = 1088LL;
        v10 = 3221225621LL;
LABEL_5:
        TtmiLogError("TtmpUpdateDisplayRequiredPowerRequest", v9, v10, 0xFFFFFFFFLL);
        goto LABEL_13;
      }
      v11 = v8 + 1;
      *(_DWORD *)(v14 + 40) = v11;
      if ( v11 == 1 )
        TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, 0LL, v7);
    }
    else
    {
      if ( !v8 )
      {
        v9 = 1113LL;
        v10 = 3221225485LL;
        goto LABEL_5;
      }
      v12 = v8 - 1;
      *(_DWORD *)(v14 + 40) = v12;
      if ( !v12 )
      {
        TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, 0LL, v7);
        TtmpSetDisplayRequestEnded((__int64)a1, a2);
      }
    }
    v4 = 1;
  }
LABEL_13:
  LOBYTE(v7) = v4;
  return TtmiLogSessionDisplayRequiredPowerRequestUpdated(*a1, a2, v7);
}
