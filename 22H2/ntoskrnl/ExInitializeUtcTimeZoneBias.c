/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1407D4A60
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036DE60 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406A6830 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407AA100 (RtlCutoverTimeToSystemTime.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD *v5; // rbx
  int v6; // r14d
  int v7; // edi
  LARGE_INTEGER v8; // r10
  LARGE_INTEGER v9; // r8
  int v10; // edx
  int v11; // eax
  LARGE_INTEGER v12; // r9
  int v13; // ecx
  LONGLONG QuadPart; // r10
  __int64 v15; // rdx
  LARGE_INTEGER v16; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-D8h] BYREF
  LARGE_INTEGER v18; // [rsp+38h] [rbp-D0h]
  int v19; // [rsp+40h] [rbp-C8h]
  int v20; // [rsp+44h] [rbp-C4h]
  LARGE_INTEGER v21; // [rsp+48h] [rbp-C0h]
  _QWORD TimeFields[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v23[54]; // [rsp+68h] [rbp-A0h] BYREF

  v16.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  memset(v23, 0, sizeof(v23));
  *(_OWORD *)&TimeFields[1] = 0LL;
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  v5 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 133);
  result = RtlQueryDynamicTimeZoneInformation(v23);
  if ( (int)result >= 0 )
  {
    v6 = LODWORD(v23[0]) + LODWORD(v23[21]);
    v7 = LODWORD(v23[0]) + HIDWORD(v23[10]);
    RtlTimeToTimeFields(a1, (PTIME_FIELDS)&TimeFields[1]);
    if ( HIWORD(v23[8])
      && WORD1(v23[19])
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&v23[8] + 4), &Time, a1)
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)&v23[19], &v16, a1) )
    {
      v8.QuadPart = v16.QuadPart + 600000000LL * v7;
      v16 = v8;
      v9.QuadPart = Time.QuadPart + 600000000LL * v6;
      Time = v9;
      if ( v8.QuadPart >= v9.QuadPart )
      {
        v18 = v9;
        v10 = 1;
        v20 = 1;
        v11 = v7;
        LODWORD(TimeFields[0]) = v6;
        v12 = v9;
        v21 = v8;
        v7 = v6;
        v9 = v8;
        v13 = 2;
      }
      else
      {
        LODWORD(TimeFields[0]) = v7;
        v10 = 2;
        v20 = 2;
        v11 = v6;
        v18 = v8;
        v12 = v8;
        v21 = v9;
        v13 = 1;
      }
      QuadPart = a1->QuadPart;
      HIDWORD(TimeFields[0]) = v13;
      v19 = v11;
      if ( QuadPart < v12.QuadPart || QuadPart >= v9.QuadPart )
      {
        v5[108] = v13;
        v11 = v7;
        v5[109] = v7;
      }
      else
      {
        v5[108] = v10;
        v5[109] = v11;
      }
      v15 = 60 * v11;
      *((_QWORD *)v5 + 55) = 10000000 * v15;
      MEMORY[0xFFFFF7800000025C] = 0;
      ExpWriteTimeZoneBias(v5 + 110, v15);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
