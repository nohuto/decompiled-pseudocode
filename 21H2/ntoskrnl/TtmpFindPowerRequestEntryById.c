/*
 * XREFs of TtmpFindPowerRequestEntryById @ 0x1408FFACC
 * Callers:
 *     TtmiSetDisplayPowerRequest @ 0x1408FF398 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409003C0 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409005B0 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x140900680 (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     TtmpPowerRequestEntryComparator @ 0x1408FFFC8 (TtmpPowerRequestEntryComparator.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 */

bool __fastcall TtmpFindPowerRequestEntryById(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v8; // r11
  __int64 v9; // r10
  int v10; // r9d
  __int64 v12; // [rsp+40h] [rbp+8h]

  v3 = 0LL;
  v4 = a2;
  v5 = 0LL;
  while ( 1 )
  {
    v8 = -1LL << (*(_BYTE *)(a1 + 276) & 0x1F);
    v9 = v8 & v4;
    if ( v5 )
      goto LABEL_5;
    v10 = *(_DWORD *)(a1 + 276) >> 5;
    if ( !v10 )
      break;
    v12 = v8 & v4;
    v5 = *(_QWORD *)(a1 + 280)
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v12)) & (unsigned int)(v10 - 1));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v5 + 8)) )
        goto LABEL_9;
    }
    v5 = 0LL;
LABEL_9:
    if ( !v5 )
      goto LABEL_14;
    if ( (unsigned int)TtmpPowerRequestEntryComparator(v5, v4) )
      goto LABEL_13;
  }
  v5 = 0LL;
LABEL_13:
  if ( !v5 )
  {
LABEL_14:
    TtmiLogError("TtmpFindPowerRequestEntryById", 401LL, 3221226021LL, 0xFFFFFFFFLL);
    goto LABEL_16;
  }
  v3 = v5;
LABEL_16:
  if ( a3 )
    *a3 = v3;
  return v3 != 0;
}
