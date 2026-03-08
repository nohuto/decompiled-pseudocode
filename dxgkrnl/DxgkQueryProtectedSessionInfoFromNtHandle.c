/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1C0345E40
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  ULONG64 v4; // rax
  char *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  char *v9; // r15
  HANDLE v11; // r14
  NTSTATUS v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // sf
  PVOID v19; // r12
  __int64 v20; // r14
  const void *v21; // rdx
  _DWORD *v22; // rdx
  __int64 v23; // rsi
  const void *v24; // rdx
  _DWORD *v25; // rdx
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-80h] BYREF
  int v27; // [rsp+60h] [rbp-78h] BYREF
  __int64 v28; // [rsp+68h] [rbp-70h]
  char v29; // [rsp+70h] [rbp-68h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-60h]
  void *v31[2]; // [rsp+88h] [rbp-50h]
  __int64 v32; // [rsp+98h] [rbp-40h]
  PVOID Object; // [rsp+F8h] [rbp+20h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      535LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2151;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2151);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2151);
  HandleInformation = 0LL;
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v4;
  *(_OWORD *)v31 = *(_OWORD *)(v4 + 16);
  v32 = *(_QWORD *)(v4 + 32);
  v5 = (char *)Handle[1];
  if ( !Handle[1] )
  {
    if ( !LODWORD(v31[0]) )
      goto LABEL_15;
LABEL_13:
    WdLogSingleEntry3(3LL, Handle[1], LODWORD(v31[0]), -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_21;
    }
    return 3221225485LL;
  }
  if ( !LODWORD(v31[0]) )
    goto LABEL_13;
LABEL_15:
  v9 = (char *)v31[1];
  if ( !v31[1] )
  {
    if ( !(_DWORD)v32 )
      goto LABEL_24;
LABEL_19:
    WdLogSingleEntry3(3LL, v31[1], (unsigned int)v32, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_21:
      if ( v8 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v27);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( !(_DWORD)v32 )
    goto LABEL_19;
LABEL_24:
  Object = 0LL;
  v11 = Handle[0];
  v12 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v13 = v12;
  if ( v12 != -1073741788 )
  {
    if ( v12 >= 0 )
    {
      v19 = Object;
      if ( !*(_QWORD *)Object )
      {
        WdLogSingleEntry1(1LL, 613LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pSharedProtectedSessionObject->pProtectedSession",
          613LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v20 = *(unsigned int *)(*(_QWORD *)v19 + 96LL);
      if ( (_DWORD)v20 && LODWORD(v31[0]) >= (unsigned int)v20 )
      {
        v21 = *(const void **)(*(_QWORD *)v19 + 88LL);
        if ( (unsigned __int64)&v5[v20] > MmUserProbeAddress || &v5[v20] <= v5 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v5, v21, (unsigned int)v20);
      }
      v22 = (_DWORD *)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      *v22 = v20;
      if ( v5 && LODWORD(v31[0]) < (unsigned int)v20 )
        v13 = -1073741789;
      v23 = *(unsigned int *)(*(_QWORD *)v19 + 112LL);
      if ( (_DWORD)v23 && (unsigned int)v32 >= (unsigned int)v23 )
      {
        v24 = *(const void **)(*(_QWORD *)v19 + 104LL);
        if ( (unsigned __int64)&v9[v23] > MmUserProbeAddress || &v9[v23] <= v9 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, v24, (unsigned int)v23);
      }
      v25 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *v25 = v23;
      if ( v9 && (unsigned int)v32 < (unsigned int)v23 )
        v13 = -1073741789;
      ObfDereferenceObject(v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( !v29 )
        return v13;
      LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    else
    {
      WdLogSingleEntry2(3LL, v11, v12);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( !v29 )
        return v13;
      v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    if ( v18 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v27);
    return v13;
  }
  WdLogSingleEntry2(3LL, v11, -1073741788LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v27);
  }
  return 3221225508LL;
}
