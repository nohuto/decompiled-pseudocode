void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
        DripsBlockerTrackingHelper *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // r15d
  DripsBlockerTrackingHelper *v6; // rsi
  unsigned __int64 *v7; // r13
  const char *v8; // rbx
  unsigned int v9; // r12d
  char *v10; // rdi
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONGLONG Value; // rax
  DripsBlockerTrackingHelper *v16; // rcx
  unsigned __int64 v17; // r8
  ULONGLONG v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  DripsBlockerTrackingHelper *v21; // rcx
  __int64 v22; // r8
  unsigned __int16 *v23; // r13
  char *v24; // rbx
  ULONGLONG v25; // rax
  __int64 v26; // r8
  ULONGLONG v27; // rax
  ULONGLONG v28; // rax
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v31; // [rsp+60h] [rbp-A0h] BYREF
  const char *v32; // [rsp+70h] [rbp-90h]
  unsigned __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  DripsBlockerTrackingHelper *v34; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v35; // [rsp+88h] [rbp-78h]
  struct _STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp-60h] BYREF
  GUID v38; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[80]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a3;
  v34 = this;
  v6 = this;
  v35 = a4;
  v7 = a4;
  memset(v40, 0, 0x42uLL);
  *(_QWORD *)&v31.Length = 4325376LL;
  v31.Buffer = (wchar_t *)v40;
  v38 = 0LL;
  ActivityId = 0LL;
  v39 = 0LL;
  DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(v6, a2);
  v8 = (char *)v6 + 8;
  v9 = 0;
  v32 = (char *)v6 + 8;
  v10 = (char *)v6 + 64;
  do
  {
    if ( v10[40] )
    {
      v11 = 0LL;
      if ( v4 )
      {
        while ( v7[v11] != *((_QWORD *)v10 - 8) )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v4 )
            goto LABEL_35;
        }
        DestinationString = 0LL;
        RtlInitAnsiString(&DestinationString, v8);
        v12 = RtlAnsiStringToUnicodeString(&v31, &DestinationString, 0);
        if ( v12 >= 0 )
        {
          *(_QWORD *)&v39 = *((_QWORD *)v10 - 8);
          *(_QWORD *)ActivityId.Data4 = (v9 << 6) + v39 + 1;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jxx_EtwWriteTransfer(
              (v31.Length >> 1) + 1,
              v13,
              v14,
              a2,
              (__int64)&v39,
              (v31.Length >> 1) + 1,
              (__int64)v31.Buffer,
              (__int64)&ActivityId,
              *v10 + v10[8] + *(v10 - 8) + v10[16],
              a2);
          Value = *((unsigned int *)v10 + 7);
          if ( (_DWORD)Value )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)&ActivityId,
              a2,
              L"Count of core access locks",
              0x1Bu,
              Value,
              &ActivityId);
          v16 = (DripsBlockerTrackingHelper *)*((_QWORD *)v10 - 2);
          if ( (unsigned __int64)v16 >= 0x2710 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              v16,
              a2,
              L"GPU Total Time(ms)",
              0x13u,
              (unsigned __int64)v16 / 0x2710,
              &ActivityId);
          v17 = *((_QWORD *)v10 + 1);
          if ( v17 >= 0x2710 || *((_QWORD *)v10 + 2) >= 0x2710uLL )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)(v17 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL),
              a2,
              L"D0 Total Lag Time(ms)",
              0x16u,
              v17 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL,
              &ActivityId);
          v18 = *((unsigned int *)v10 + 6);
          if ( (_DWORD)v18 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)&ActivityId,
              a2,
              L"Count of D3 wake ups",
              0x15u,
              v18,
              &ActivityId);
          v30 = *(_QWORD *)ActivityId.Data4;
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(v6, a2, &v30, &v31, v9);
          v19 = 0LL;
          if ( *((_DWORD *)v10 - 5) )
          {
            do
            {
              LODWORD(v30) = 0;
              v20 = DripsBlockerTrackingHelper::EtwProfilerTypeName(*(unsigned int *)&v10[72 * v19 + 108], &v30);
              v23 = (unsigned __int16 *)v20;
              v24 = &v10[72 * v19];
              *(_QWORD *)v38.Data4 = (unsigned int)v19 + *(_QWORD *)ActivityId.Data4 + 1LL;
              if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
                McTemplateK0ujqzr2jxx_EtwWriteTransfer(
                  *((_QWORD *)v24 + 11)
                + *(_QWORD *)&v10[72 * v19 + 64]
                + *(_QWORD *)&v10[72 * v19 + 72]
                + *(_QWORD *)&v10[72 * v19 + 96],
                  (unsigned int)v19 + *(_QWORD *)ActivityId.Data4 + 1LL,
                  v22,
                  a2,
                  (__int64)&ActivityId,
                  v30,
                  v20,
                  (__int64)&v38,
                  v24[88] + v10[72 * v19 + 64] + v10[72 * v19 + 72] + v10[72 * v19 + 96],
                  a2);
              v25 = *(unsigned int *)&v10[72 * v19 + 84];
              if ( (_DWORD)v25 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v38,
                  a2,
                  L"Count of core access locks",
                  0x1Bu,
                  v25,
                  &v38);
              v26 = *((_QWORD *)v24 + 11) / 10000LL;
              if ( v26 > 0 || *(_QWORD *)&v10[72 * v19 + 96] / 10000LL > 0 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  v21,
                  a2,
                  L"D0 Lag Time(ms)",
                  0x10u,
                  v26 + *(_QWORD *)&v10[72 * v19 + 96] / 10000LL,
                  &v38);
              v27 = *(unsigned int *)&v10[72 * v19 + 104];
              if ( (_DWORD)v27 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v38,
                  a2,
                  L"Count of D3 wake ups",
                  0x15u,
                  v27,
                  &v38);
              v28 = *(unsigned int *)&v10[72 * v19 + 112];
              if ( (_DWORD)v28 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v38,
                  a2,
                  L"Count of DFx blocks",
                  0x14u,
                  v28,
                  &v38);
              v6 = v34;
              v33 = *(_QWORD *)ActivityId.Data4;
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(v34, a2, &v33, v23, v9, v19);
              v19 = (unsigned int)(v19 + 1);
            }
            while ( (unsigned int)v19 < *((_DWORD *)v10 - 5) );
            v8 = v32;
            v7 = v35;
          }
          v4 = a3;
        }
        else
        {
          WdLogSingleEntry1(3LL, v12);
        }
      }
    }
LABEL_35:
    v8 += 4720;
    ++v9;
    v10 += 4720;
    v32 = v8;
  }
  while ( v9 < 0x40 );
}
