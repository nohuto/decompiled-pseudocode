__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rsi
  int FirstAvailableTarget; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  char v22; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+98h] [rbp+38h] BYREF

  v20 = -1;
  v21 = 0LL;
  v5 = a1;
  v6 = (int)a3;
  v7 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 6031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 6031);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 6031);
  if ( a4 )
  {
    *a4 = -1;
    if ( (_DWORD)v6 )
    {
      v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
      v10 = v8;
      if ( v8 )
      {
        v23 = v9;
        FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                                 v8,
                                 (unsigned int)v7,
                                 (unsigned int)v6,
                                 &v23,
                                 0LL,
                                 0LL,
                                 0LL);
        v5 = FirstAvailableTarget;
        if ( FirstAvailableTarget >= 0 )
        {
          LODWORD(v5) = 0;
          *a4 = v23;
        }
        else
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
          v16[3] = v10;
          v16[4] = v7;
          v16[5] = v6;
          v16[6] = v5;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v5);
        LODWORD(v5) = -1071774976;
      }
    }
    else
    {
      WdLogSingleEntry4(2LL, 0LL, a4, v5, v7);
      LODWORD(v5) = -1071774929;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v5, v7);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  }
  return (unsigned int)v5;
}
