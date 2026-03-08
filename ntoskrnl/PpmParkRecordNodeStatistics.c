/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x1402D3A10
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x1402340F0 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1402D3B88 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     PpmParkComputeSnapStatistics @ 0x1402D3C1C (PpmParkComputeSnapStatistics.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140598728 (PpmEventParkNodeClassRecordedStats.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  int v0; // edx
  __int64 result; // rax
  unsigned __int16 v2; // si
  int v3; // r10d
  __int64 v4; // rcx
  char v5; // r11
  char v6; // cl
  __int64 v7; // rbx
  int v8; // edx
  REGHANDLE v9; // rdi
  int v10; // edx
  unsigned __int8 v11; // di
  int v12; // esi
  __int64 v13; // rcx
  char *v14; // r14
  char *v15; // r15
  __int64 v16; // r13
  _BYTE *v17; // r12
  int v18; // r8d
  int v19; // r9d
  char i; // [rsp+48h] [rbp-89h]
  char v21; // [rsp+49h] [rbp-88h]
  char v22; // [rsp+50h] [rbp-81h] BYREF
  char v23; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int16 v24; // [rsp+60h] [rbp-71h]
  __int16 v25; // [rsp+68h] [rbp-69h] BYREF
  int v26; // [rsp+70h] [rbp-61h]
  __int64 v27; // [rsp+78h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-49h] BYREF
  __int64 *v29; // [rsp+98h] [rbp-39h]
  __int64 v30; // [rsp+A0h] [rbp-31h]
  char *v31; // [rsp+A8h] [rbp-29h]
  __int64 v32; // [rsp+B0h] [rbp-21h]
  __int64 v33; // [rsp+B8h] [rbp-19h]
  __int64 v34; // [rsp+C0h] [rbp-11h]
  __int64 v35; // [rsp+C8h] [rbp-9h]
  int v36; // [rsp+D0h] [rbp-1h]
  int v37; // [rsp+D4h] [rbp+3h]
  char *v38; // [rsp+D8h] [rbp+7h]
  __int64 v39; // [rsp+E0h] [rbp+Fh]
  __int64 v40; // [rsp+E8h] [rbp+17h]
  int v41; // [rsp+F0h] [rbp+1Fh]
  int v42; // [rsp+F4h] [rbp+23h]

  v0 = (int)PpmCurrentProfile;
  result = dword_140C3D48C;
  v2 = 0;
  v3 = PpmCheckMakeupCount;
  v4 = 55LL * dword_140C3D48C;
  v26 = PpmCheckMakeupCount;
  v24 = 0;
  v5 = BYTE5(PpmCurrentProfile[v4 + 20]);
  v6 = HIBYTE(PpmCurrentProfile[v4 + 20]);
  v21 = v6;
  for ( i = v5; v2 < (unsigned int)PpmParkNumNodes; v24 = v2 )
  {
    LOBYTE(v0) = v5;
    v7 = PpmParkNodes + 192LL * v2;
    if ( (unsigned __int8)PpmParkComputeSnapStatistics(v3, v0, v6, (int)v7 + 56, v7 + 116, v7 + 117, v7 + 118) )
    {
      v23 = *(_BYTE *)(v7 + 118);
      v22 = *(_BYTE *)(v7 + 116);
      v27 = *(_QWORD *)(v7 + 16);
      v25 = *(_WORD *)(v7 + 4);
      if ( PpmEtwRegistered )
      {
        v9 = PpmEtwHandle;
        if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          v10 = *(_DWORD *)(v7 + 104);
          UserData.Ptr = (ULONGLONG)&v25;
          v29 = &v27;
          v33 = v7 + 104;
          v31 = &v22;
          v35 = *(_QWORD *)(v7 + 64);
          v38 = &v23;
          v40 = *(_QWORD *)(v7 + 72);
          v36 = 8 * v10;
          v41 = 8 * v10;
          v30 = 8LL;
          v32 = 1LL;
          v34 = 4LL;
          v37 = 0;
          v39 = 1LL;
          v42 = 0;
          EtwWriteEx(v9, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, 7u, &UserData);
        }
      }
    }
    if ( *(_BYTE *)(v7 + 121) )
    {
      v11 = 0;
      if ( *(_BYTE *)(v7 + 11) )
      {
        v12 = v26;
        do
        {
          LOBYTE(v8) = i;
          v13 = *(_QWORD *)(v7 + 184) + 104LL * v11;
          v14 = (char *)(v13 + 96);
          v15 = (char *)(v13 + 98);
          v16 = v13 + 40;
          v17 = (_BYTE *)(v13 + 97);
          if ( (unsigned __int8)PpmParkComputeSnapStatistics(v12, v8, v21, (int)v13 + 40, v13 + 97, v13 + 98, v13 + 96) )
          {
            LOBYTE(v18) = v11;
            LOBYTE(v19) = *v17;
            PpmEventParkNodeClassRecordedStats(
              *(unsigned __int16 *)(v7 + 4),
              *(_QWORD *)(v7 + 16),
              v18,
              v19,
              *v15,
              v16,
              *v14);
          }
          ++v11;
        }
        while ( v11 < *(_BYTE *)(v7 + 11) );
        v2 = v24;
      }
    }
    PpmPerfRecordMostActiveWorkloadClass(v7);
    v3 = v26;
    ++v2;
    v5 = i;
    v6 = v21;
    result = v2;
  }
  return result;
}
