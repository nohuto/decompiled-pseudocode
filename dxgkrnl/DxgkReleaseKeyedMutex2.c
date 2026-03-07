__int64 __fastcall DxgkReleaseKeyedMutex2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  __int64 v9; // rdi
  struct DXGKEYEDMUTEX *v10; // r14
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t Size; // [rsp+28h] [rbp-80h]
  int v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+58h] [rbp-50h]
  char v19; // [rsp+60h] [rbp-48h]
  unsigned int v20[4]; // [rsp+68h] [rbp-40h]
  void *Src[2]; // [rsp+78h] [rbp-30h]
  size_t v22; // [rsp+88h] [rbp-20h]
  struct DXGKEYEDMUTEX *v23; // [rsp+B8h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v24; // [rsp+C0h] [rbp+18h] BYREF

  v3 = a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2069;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2069);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2069);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
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
    if ( !v19 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_15:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v17);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v20 = *(_OWORD *)v3;
  *(_OWORD *)Src = *(_OWORD *)(v3 + 16);
  v22 = *(_QWORD *)(v3 + 32);
  v23 = 0LL;
  v9 = v20[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v24, v20[0], Current, &v23);
  v10 = v23;
  if ( !v23 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v9, -1073741811LL);
    if ( v24 )
      DXGKEYEDMUTEX::ReleaseReference(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( !v19 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_15;
  }
  LODWORD(Size) = v22;
  v12 = DXGKEYEDMUTEX::ReleaseSync(
          (void **)v23,
          v9,
          *(unsigned __int64 *)&v20[2],
          (unsigned __int64)Src[0],
          (char *)Src[1],
          Size,
          1);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, v10, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hKeyedMutex = 0x%I64x failed to release pKeyedMutex 0x%I64x returning 0x%I64x",
      v9,
      (__int64)v10,
      v13,
      0LL,
      0LL);
  }
  if ( v24 )
    DXGKEYEDMUTEX::ReleaseReference(v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  return (unsigned int)v13;
}
