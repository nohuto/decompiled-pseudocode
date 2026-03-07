__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // r12d
  _OWORD *v7; // rbx
  struct DXGPROCESS *Current; // r14
  _OWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // edx
  _DWORD *v12; // rax
  _DWORD *v13; // r8
  __int64 v14; // rax
  int v15; // r9d
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  __int64 v21; // rax
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-288h] BYREF
  __int64 v32; // [rsp+58h] [rbp-280h]
  char v33; // [rsp+60h] [rbp-278h]
  struct DXGPROCESS *v34; // [rsp+68h] [rbp-270h]
  _QWORD v35[58]; // [rsp+70h] [rbp-268h] BYREF
  PVOID P; // [rsp+240h] [rbp-98h] BYREF
  _BYTE v37[64]; // [rsp+248h] [rbp-90h] BYREF
  int v38; // [rsp+288h] [rbp-50h]

  v4 = a4;
  v7 = (_OWORD *)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2044);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2044);
  Current = DXGPROCESS::GetCurrent();
  v34 = Current;
  if ( Current )
  {
    memset(v35, 0, sizeof(v35));
    if ( !a2 )
    {
      v9 = v35;
      v10 = 3LL;
      do
      {
        *v9 = *v7;
        v9[1] = v7[1];
        v9[2] = v7[2];
        v9[3] = v7[3];
        v9[4] = v7[4];
        v9[5] = v7[5];
        v9[6] = v7[6];
        v9 += 8;
        *(v9 - 1) = v7[7];
        v7 += 8;
        --v10;
      }
      while ( v10 );
      *v9 = *v7;
      v9[1] = v7[1];
      v9[2] = v7[2];
      v9[3] = v7[3];
      v9[4] = v7[4];
      v11 = HIDWORD(v35[17]);
LABEL_8:
      P = 0LL;
      v38 = 0;
      v12 = (_DWORD *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, (unsigned int)(v11 + 1));
      v13 = v12;
      if ( v12 )
      {
        *v12 = v35[0];
        v14 = 0LL;
        v15 = HIDWORD(v35[17]);
        if ( HIDWORD(v35[17]) )
        {
          do
          {
            v28 = (unsigned int)(v14 + 1);
            v13[v28] = *((_DWORD *)&v35[18] + v14);
            v14 = v28;
            v15 = HIDWORD(v35[17]);
          }
          while ( (unsigned int)v28 < HIDWORD(v35[17]) );
        }
        v16 = SignalSynchronizationObjectInternal(
                HIDWORD(v35[0]),
                &v35[1],
                LODWORD(v35[17]),
                (unsigned int)(v15 + 1),
                v13,
                0LL,
                v35[50],
                &v35[50],
                Current,
                (a2 != 0) | (unsigned int)(4 * v4));
        if ( v16 < 0 )
        {
          if ( P != v37 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v38 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
          if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v31);
          return (unsigned int)v16;
        }
        else
        {
          if ( P != v37 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v38 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
          if ( v33 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v31);
          }
          return 0LL;
        }
      }
      else
      {
        if ( P != v37 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v38 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v31);
        return 3221225495LL;
      }
    }
    if ( (unsigned __int64)v7 >= MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    v22 = v35;
    v23 = 3LL;
    do
    {
      *v22 = *v7;
      v22[1] = v7[1];
      v22[2] = v7[2];
      v22[3] = v7[3];
      v22[4] = v7[4];
      v22[5] = v7[5];
      v22[6] = v7[6];
      v22 += 8;
      *(v22 - 1) = v7[7];
      v7 += 8;
      --v23;
    }
    while ( v23 );
    *v22 = *v7;
    v22[1] = v7[1];
    v22[2] = v7[2];
    v22[3] = v7[3];
    v22[4] = v7[4];
    v11 = HIDWORD(v35[17]);
    if ( HIDWORD(v35[17]) <= 0x40 )
    {
      if ( HIDWORD(v35[0]) <= 0x20 )
      {
        if ( a3 )
          v35[50] = a3;
        goto LABEL_8;
      }
      WdLogSingleEntry1(2LL, HIDWORD(v35[0]));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Signaling too many objects %d",
        HIDWORD(v35[0]),
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(3LL, HIDWORD(v35[17]));
    }
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess();
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v21 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v21,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v31);
  return 3221225485LL;
}
