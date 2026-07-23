/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x140206840
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140206490 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     PpmParkComputeSnapStatistics @ 0x1402069B0 (PpmParkComputeSnapStatistics.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140579F0C (PpmEventParkNodeClassRecordedStats.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  int v0; // r15d
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned __int16 v3; // di
  unsigned __int8 v4; // r12
  unsigned __int8 i; // r13
  __int64 v6; // rbx
  REGHANDLE v7; // rsi
  int v8; // ecx
  unsigned __int8 v9; // si
  char *v10; // r14
  int v11; // edi
  int v12; // r9d
  char v13; // [rsp+48h] [rbp-69h] BYREF
  char v14; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int16 v15; // [rsp+58h] [rbp-59h]
  __int16 v16; // [rsp+60h] [rbp-51h] BYREF
  __int64 v17; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+88h] [rbp-29h]
  __int64 v20; // [rsp+90h] [rbp-21h]
  char *v21; // [rsp+98h] [rbp-19h]
  __int64 v22; // [rsp+A0h] [rbp-11h]
  __int64 v23; // [rsp+A8h] [rbp-9h]
  __int64 v24; // [rsp+B0h] [rbp-1h]
  __int64 v25; // [rsp+B8h] [rbp+7h]
  int v26; // [rsp+C0h] [rbp+Fh]
  int v27; // [rsp+C4h] [rbp+13h]
  char *v28; // [rsp+C8h] [rbp+17h]
  __int64 v29; // [rsp+D0h] [rbp+1Fh]

  v0 = PpmCheckMakeupCount;
  v1 = 342LL * dword_140C2332C;
  result = 0LL;
  v3 = 0;
  v15 = 0;
  v4 = BYTE5(PpmCurrentProfile[v1 + 20]);
  for ( i = HIBYTE(PpmCurrentProfile[v1 + 20]); v3 < (unsigned int)PpmParkNumNodes; v15 = v3 )
  {
    v6 = PpmParkNodes + 272LL * v3;
    if ( (unsigned __int8)PpmParkComputeSnapStatistics(v0, v4, i, (int)v6 + 80, v6 + 140, v6 + 141, v6 + 142) )
    {
      v14 = *(_BYTE *)(v6 + 142);
      v13 = *(_BYTE *)(v6 + 140);
      v17 = *(_QWORD *)(v6 + 8);
      v16 = *(_WORD *)(v6 + 4);
      if ( PpmEtwRegistered )
      {
        v7 = PpmEtwHandle;
        if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          UserData.Ptr = (ULONGLONG)&v16;
          v20 = 8LL;
          v19 = &v17;
          v22 = 1LL;
          v21 = &v13;
          v24 = 4LL;
          v23 = v6 + 120;
          v8 = *(_DWORD *)(v6 + 120);
          v25 = *(_QWORD *)(v6 + 88);
          v27 = 0;
          v29 = 1LL;
          v26 = 8 * v8;
          v28 = &v14;
          EtwWriteEx(v7, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( *(_BYTE *)(v6 + 6) != *(_BYTE *)(v6 + 128) )
    {
      v9 = 0;
      v10 = (char *)(v6 + 264);
      v11 = v6 + 168;
      do
      {
        if ( (unsigned __int8)PpmParkComputeSnapStatistics(v0, v4, i, v11, 0LL, 0LL, (__int64)v10) )
          PpmEventParkNodeClassRecordedStats(*(unsigned __int16 *)(v6 + 4), *(_QWORD *)(v6 + 8), v9, v12, *v10);
        ++v9;
        v11 += 48;
        ++v10;
      }
      while ( v9 < 2u );
      v3 = v15;
    }
    result = ++v3;
  }
  return result;
}
