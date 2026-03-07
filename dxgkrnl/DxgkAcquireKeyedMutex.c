__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  _OWORD *v8; // rax
  union _LARGE_INTEGER *v9; // r9
  __int64 *v10; // rdx
  int v11; // r14d
  _QWORD *v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16[2]; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+58h] [rbp-50h]
  char v19; // [rsp+60h] [rbp-48h]
  unsigned int v20[4]; // [rsp+68h] [rbp-40h]
  __int128 v21; // [rsp+78h] [rbp-30h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+10h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2054);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2054);
  if ( DXGPROCESS::GetCurrent(v4) )
  {
    v8 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v20 = *v8;
    v21 = v8[1];
    v9 = 0LL;
    v22 = 0LL;
    v10 = (__int64 *)v21;
    if ( (_QWORD)v21 )
    {
      if ( (unsigned __int64)v21 >= MmUserProbeAddress )
        v10 = (__int64 *)MmUserProbeAddress;
      v22 = *v10;
      v9 = (union _LARGE_INTEGER *)&v22;
    }
    v16[0] = 0;
    v11 = DXGKEYEDMUTEX::AcquireSync(
            v20[0],
            *(unsigned __int64 *)&v20[2],
            0,
            v9,
            (DXGKEYEDMUTEX *)((char *)&v21 + 8),
            0LL,
            *(size_t *)v16,
            0LL,
            1);
    if ( v11 >= 0 )
    {
      v12 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v12 = (_QWORD *)MmUserProbeAddress;
      *v12 = *((_QWORD *)&v21 + 1);
    }
    if ( v11 < 0 )
    {
      v13 = v20[0];
      WdLogSingleEntry2(2LL, v20[0], v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hDevice 0x%I64x failed to acquire hKeyedMutex 0x%I64x returning 0x%I64x",
        v13,
        v11,
        0LL,
        0LL,
        0LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      LOBYTE(v5) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v17);
    }
    return 3221225485LL;
  }
}
