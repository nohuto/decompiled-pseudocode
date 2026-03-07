__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  char v24; // [rsp+60h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(v5 + 64);
  if ( *(_BYTE *)(v6 + 482) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v5 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3808), 1u);
  LODWORD(v8) = 3;
  if ( *(_DWORD *)(v6 + 236) == 6 || *(_DWORD *)(v6 + 240) == 6 || (v9 = *(unsigned int *)(v6 + 4000), (_DWORD)v9 == 3) )
  {
    v19 = -1073741810LL;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v2 + 16) != 1953656900
    || *(_DWORD *)(v2 + 20) != 5 && *(_DWORD *)(v2 + 20) != 2 && *(_DWORD *)(v2 + 20) != 6 )
  {
    v4 = -1073741637;
    v21 = *(_QWORD *)(v2 + 24);
    v19 = -1073741637LL;
    v20 = 2LL;
LABEL_35:
    WdLogSingleEntry2(v20, v21, v19);
    if ( *(_BYTE *)(v6 + 482) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite((PERESOURCE)(v6 + 3808));
    KeLeaveCriticalRegion();
    return v4;
  }
  if ( !(unsigned __int8)DpiIsPowerRuntimeDStateTransition(v6, v9, v7, 3LL)
    && ((_DWORD)v10 == 1 || *(_DWORD *)(v6 + 284) != 1)
    || !*(_QWORD *)(v6 + 3912) )
  {
    v19 = -1073741661LL;
LABEL_33:
    v20 = (unsigned int)v8;
    goto LABEL_34;
  }
  if ( (unsigned __int8)DpiIsPowerRuntimeDStateTransition(v11, v10, v12, v8)
    && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304400) )
  {
    v19 = -1073741661LL;
    v20 = 3LL;
LABEL_34:
    v4 = v19;
    v21 = *(_QWORD *)(v6 + 24);
    goto LABEL_35;
  }
  v15 = *(_QWORD *)(v6 + 3912);
  if ( a2 == 1 )
  {
    DxgkAcquireAdapterCoreSync(v15, 2, v14);
  }
  else
  {
    v22 = -1;
    v23 = 0LL;
    if ( (qword_1C013A870 & 2) != 0 )
    {
      v24 = 1;
      v22 = 1009;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerEnter, v14, 1009);
    }
    else
    {
      v24 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 1009);
    if ( v15 )
    {
      DXGADAPTER::AcquireCoreSync(v15, 1LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"No pAdapter specified, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v22);
  }
  return v4;
}
