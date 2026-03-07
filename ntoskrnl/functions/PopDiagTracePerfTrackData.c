char __fastcall PopDiagTracePerfTrackData(__int16 a1)
{
  char result; // al
  unsigned __int64 v3; // rdi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  ULONGLONG v10; // rax
  unsigned __int64 v11; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v13; // r8
  __int128 *v14; // rdx
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  ULONGLONG v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int16 v24; // cx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v25; // rcx
  __int64 v26; // r8
  __int128 *v27; // rdx
  int v28; // [rsp+38h] [rbp-89h] BYREF
  int v29; // [rsp+3Ch] [rbp-85h] BYREF
  int v30; // [rsp+40h] [rbp-81h] BYREF
  int v31; // [rsp+44h] [rbp-7Dh] BYREF
  int v32; // [rsp+48h] [rbp-79h] BYREF
  __int64 v33; // [rsp+50h] [rbp-71h] BYREF
  int v34; // [rsp+58h] [rbp-69h] BYREF
  int v35; // [rsp+5Ch] [rbp-65h] BYREF
  int v36; // [rsp+60h] [rbp-61h] BYREF
  int v37; // [rsp+64h] [rbp-5Dh] BYREF
  __int128 v38; // [rsp+68h] [rbp-59h] BYREF
  __int128 v39; // [rsp+78h] [rbp-49h] BYREF
  __int64 v40; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  int *v42; // [rsp+A8h] [rbp-19h]
  __int64 v43; // [rsp+B0h] [rbp-11h]
  int *v44; // [rsp+B8h] [rbp-9h]
  __int64 v45; // [rsp+C0h] [rbp-1h]
  int *v46; // [rsp+C8h] [rbp+7h]
  __int64 v47; // [rsp+D0h] [rbp+Fh]
  int *v48; // [rsp+D8h] [rbp+17h]
  __int64 v49; // [rsp+E0h] [rbp+1Fh]

  result = 0;
  v33 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( result )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v35 = PopQpcTimeInMs(&qword_140C3CFC0, &qword_140C3CFC8);
      v34 = PopQpcTimeInMs(&qword_140C3CFB0, &qword_140C3CFB8);
      if ( qword_140C3CFA8 )
      {
        v33 = 0LL;
        v30 = PopQpcTimeInMs(&v33, &qword_140C3CFA8);
        v28 = v30 + PopQpcTimeInMs(&qword_140C3CF88, &qword_140C3CF90);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&qword_140C3D168;
        v42 = &v28;
        v44 = &v30;
        v46 = &v34;
        v48 = &v35;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        return EtwWrite(PopDiagHandle, (PCEVENT_DESCRIPTOR)POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      result = dword_140C3D1B0;
      if ( dword_140C3D1B0 )
      {
        v4 = qword_140C3D018;
        v31 = (4 * dword_140C3D1B0) & 0x3FFFFF;
        v37 = qword_140C3D018;
        v32 = qword_140C3CFF0 / v3;
        result = qword_140C3D1C0;
        v28 = qword_140C3D1C0;
        if ( (a1 & 8) != 0 )
        {
          if ( !PopShutdownButtonPressTime )
            return result;
          v29 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_140C3CF68) + v4;
          if ( (int)PopReadRegKeyValue(
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                      L"LastLogOffEndTimePerfCounter",
                      8uLL,
                      0,
                      &v33) < 0 )
            v5 = 0;
          else
            v5 = PopQpcTimeInMs(&v33, &qword_140C3D020);
          v36 = v5;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v31;
          v43 = 4LL;
          v42 = &v29;
          v45 = 4LL;
          v44 = &v32;
          v46 = &v36;
          v47 = 4LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
          PopComputeDerivedHiberStats((unsigned __int64 *)&qword_140C3CFD8, v3, (__int64)&v38);
          LODWORD(v39) = v28;
          v6 = (unsigned __int64)qword_140C3D198 >> 8;
          WORD3(v39) = -1;
          if ( (unsigned __int64)qword_140C3D198 >> 8 > 0x7FFF )
            LOWORD(v6) = 0x7FFF;
          WORD2(v39) = v6 & 0x7FFF;
          if ( (unsigned __int64)qword_140C3D1A0 >> 8 <= 0xFFFF )
            WORD3(v39) = (unsigned int)qword_140C3D1A0 >> 8;
          WORD4(v39) = -1;
          if ( 1000 * qword_140C3D038 / PopQpcFrequency <= 0xFFFF )
            WORD4(v39) = 1000 * qword_140C3D038 / PopQpcFrequency;
          WORD5(v39) = -1;
          if ( qword_140C3D128 / v3 <= 0xFFFF )
            WORD5(v39) = qword_140C3D128 / v3;
          WORD6(v39) = -1;
          if ( (unsigned int)qword_140C3D028 <= 0xFFFF )
            WORD6(v39) = qword_140C3D028;
          HIWORD(v39) = -1;
          if ( (unsigned int)qword_140C3D168 <= 0xFFFF )
            HIWORD(v39) = qword_140C3D168;
          v7 = DWORD1(v38);
          HIWORD(v40) = -1;
          if ( DWORD1(v38) > 0x3FF )
            v7 = 1023;
          v8 = HIDWORD(v38);
          if ( HIDWORD(v38) > 0x1FF )
            v8 = 511;
          v9 = v7 ^ (v7 ^ (v8 << 10)) & 0x7FC00;
          v10 = 1000 * (qword_140C3D0B8 - qword_140C3D0F0) / PopQpcFrequency;
          if ( v10 > 0x1FFF )
            LODWORD(v10) = 0x1FFF;
          LODWORD(v40) = v9 & 0x7FFFF | ((_DWORD)v10 << 19);
          v11 = (unsigned __int64)qword_140C3D178 >> 8;
          if ( (unsigned __int64)qword_140C3D178 >> 8 > 0x7FFF )
            LOWORD(v11) = 0x7FFF;
          WORD2(v40) = v11 & 0x7FFF;
          if ( (unsigned __int64)qword_140C3D180 >> 8 <= 0xFFFF )
            HIWORD(v40) = (unsigned int)qword_140C3D180 >> 8;
          p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v13 = 6LL;
          v14 = &v39;
          do
          {
            *(_QWORD *)&p_Reserved[-3].Reserved = v14;
            v14 = (__int128 *)((char *)v14 + 4);
            *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
            p_Reserved += 4;
            --v13;
          }
          while ( v13 );
          v15 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
        }
        else
        {
          UserData.Ptr = (ULONGLONG)&v31;
          v42 = &v37;
          *(_QWORD *)&UserData.Size = 4LL;
          v44 = &v32;
          v43 = 4LL;
          v45 = 4LL;
          result = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
          v16 = qword_140C3D028;
          if ( !(_DWORD)qword_140C3D028 )
            return result;
          PopComputeDerivedHiberStats((unsigned __int64 *)&qword_140C3CFD8, v3, (__int64)&v38);
          LODWORD(v39) = v28;
          v17 = (unsigned __int64)qword_140C3D198 >> 8;
          if ( (unsigned __int64)qword_140C3D198 >> 8 > 0x7FFF )
            LOWORD(v17) = 0x7FFF;
          WORD2(v39) = (a1 << 10) ^ (v17 ^ (a1 << 10)) & 0x7FFF;
          WORD3(v39) = (unsigned int)qword_140C3D1A0 >> 8;
          if ( (unsigned __int64)qword_140C3D1A0 >> 8 >= 0xFFFF )
            WORD3(v39) = -1;
          WORD4(v39) = 1000 * qword_140C3D038 / PopQpcFrequency;
          if ( 1000 * qword_140C3D038 / PopQpcFrequency >= 0xFFFF )
            WORD4(v39) = -1;
          WORD5(v39) = qword_140C3D128 / v3;
          if ( qword_140C3D128 / v3 >= 0xFFFF )
            WORD5(v39) = -1;
          WORD6(v39) = v16;
          if ( v16 >= 0xFFFF )
            WORD6(v39) = -1;
          HIWORD(v39) = qword_140C3D168;
          if ( (unsigned int)qword_140C3D168 >= 0xFFFF )
            HIWORD(v39) = -1;
          v18 = DWORD1(v38);
          if ( DWORD1(v38) > 0x3FF )
            v18 = 1023;
          v19 = HIDWORD(v38);
          if ( HIDWORD(v38) > 0x1FF )
            v19 = 511;
          v20 = v18 ^ (v18 ^ (v19 << 10)) & 0x7FC00;
          v21 = 1000 * (qword_140C3D0B8 - qword_140C3D0F0) / PopQpcFrequency;
          if ( v21 > 0x1FFF )
            LODWORD(v21) = 0x1FFF;
          v22 = ((_DWORD)v21 << 19) | v20 & 0x7FFFF;
          v23 = (unsigned __int64)qword_140C3D178 >> 8;
          LODWORD(v40) = v22;
          if ( (unsigned __int64)qword_140C3D178 >> 8 > 0x7FFF )
            LOWORD(v23) = 0x7FFF;
          if ( PopEnableMinimalHiberFile )
            v24 = 0x8000;
          else
            v24 = 0;
          WORD2(v40) = v24 | v23 & 0x7FFF;
          HIWORD(v40) = (unsigned int)qword_140C3D180 >> 8;
          if ( (unsigned __int64)qword_140C3D180 >> 8 >= 0xFFFF )
            HIWORD(v40) = -1;
          v25 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v26 = 6LL;
          v27 = &v39;
          do
          {
            *(_QWORD *)&v25[-3].Reserved = v27;
            v27 = (__int128 *)((char *)v27 + 4);
            *(_QWORD *)&v25[-1].Reserved = 4LL;
            v25 += 4;
            --v26;
          }
          while ( v26 );
          v15 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
        }
        return EtwWrite(PopDiagHandle, v15, 0LL, 6u, &UserData);
      }
    }
  }
  return result;
}
