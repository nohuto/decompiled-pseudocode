__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  _OWORD *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // sf
  DXGPROTECTEDSESSION **v16; // rsi
  int v17; // eax
  unsigned int v18; // edi
  _DWORD *v19; // rdx
  struct DXGPROCESS *v20; // r15
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r8
  HANDLE Handle[2]; // [rsp+50h] [rbp-58h] BYREF
  int v28; // [rsp+60h] [rbp-48h] BYREF
  __int64 v29; // [rsp+68h] [rbp-40h]
  char v30; // [rsp+70h] [rbp-38h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGPROCESS *Current; // [rsp+C8h] [rbp+20h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2152);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2152);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 727LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      727LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v5 = -1073741811;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_10;
    }
    return v5;
  }
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v10;
  LODWORD(Handle[1]) = 0;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v5 = v11;
  LODWORD(v12) = -1073741788;
  if ( v11 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return (unsigned int)v12;
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_18:
    if ( v15 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v28);
    return (unsigned int)v12;
  }
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_10:
      if ( v8 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v28);
    }
    return v5;
  }
  v16 = (DXGPROTECTEDSESSION **)Object;
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry1(1LL, 789LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSharedProtectedSessionObject->pProtectedSession",
      789LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = DXGPROTECTEDSESSION::Open(*v16, (unsigned int *)&Handle[1]);
  v12 = v17;
  v18 = (unsigned int)Handle[1];
  if ( v17 < 0 )
  {
    if ( LODWORD(Handle[1]) )
    {
      WdLogSingleEntry1(1LL, 797LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL == KMOpenProtectedSessionFromNtHandle.hHandle",
        797LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    WdLogSingleEntry2(3LL, Handle[0], v12);
    if ( v18 )
      DXGPROTECTEDSESSION::DestroyProtectedSession(*v16, v18);
    ObfDereferenceObject(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return (unsigned int)v12;
    v15 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_18;
  }
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry1(1LL, 804LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KMOpenProtectedSessionFromNtHandle.hHandle",
      804LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v19 = v18;
  ObfDereferenceObject(v16);
  v20 = Current;
  v21 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v22 = (v18 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v22 < *((_DWORD *)v20 + 74) )
  {
    v23 = *((_QWORD *)v20 + 35);
    if ( ((v18 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
      && (*(_DWORD *)(v23 + 16 * v22 + 8) & 0x1F) != 0 )
    {
      v24 = 2 * (((unsigned __int64)Handle[1] >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v23 + 16 * (((unsigned __int64)Handle[1] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          217LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)v20 + 35) + 8 * v24 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v21 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v21, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v28);
  return 0LL;
}
