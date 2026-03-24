/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1C0289D00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0288A60 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0288CF0 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _OWORD *v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  DXGPROTECTEDSESSION **v28; // rdi
  DXGPROTECTEDSESSION *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r14
  unsigned int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r14d
  __int64 v40; // rax
  _DWORD *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  HANDLE Handle[2]; // [rsp+30h] [rbp-48h] BYREF
  int v49; // [rsp+40h] [rbp-38h] BYREF
  __int64 v50; // [rsp+48h] [rbp-30h]
  char v51; // [rsp+50h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp+18h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2152);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2152LL);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 722LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGPROCESS::GetCurrent(v5, v4, v6, v7) )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v13);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v49);
    }
    return (unsigned int)v12;
  }
  v17 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v17;
  LODWORD(Handle[1]) = 0;
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v12 = v18;
  if ( v18 == -1073741788 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(HANDLE *)(v23 + 24) = Handle[0];
    *(_QWORD *)(v23 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v24);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v49);
    return 3221225508LL;
  }
  else
  {
    if ( v18 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(HANDLE *)(v27 + 24) = Handle[0];
      *(_QWORD *)(v27 + 32) = v12;
      WdLogEvent5_WdWarning(v27);
      goto LABEL_9;
    }
    v28 = (DXGPROTECTEDSESSION **)Object;
    v29 = *(DXGPROTECTEDSESSION **)Object;
    if ( !*(_QWORD *)Object )
    {
      v30 = WdLogNewEntry5_WdAssertion(0LL, v19);
      *(_QWORD *)(v30 + 24) = 784LL;
      WdLogEvent5_WdAssertion(v30);
      v29 = *v28;
    }
    v31 = DXGPROTECTEDSESSION::Open(v29, (unsigned int *)&Handle[1], v21, v22);
    v35 = v31;
    if ( v31 >= 0 )
    {
      v39 = (int)Handle[1];
      if ( !LODWORD(Handle[1]) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v33, v32);
        *(_QWORD *)(v40 + 24) = 799LL;
        WdLogEvent5_WdAssertion(v40);
      }
      v41 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v41 = (_DWORD *)MmUserProbeAddress;
      *v41 = v39;
      ObfDereferenceObject(v28);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v42);
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v49);
      return 0LL;
    }
    else
    {
      v36 = (unsigned int)Handle[1];
      if ( LODWORD(Handle[1]) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v33, v32);
        *(_QWORD *)(v37 + 24) = 792LL;
        WdLogEvent5_WdAssertion(v37);
      }
      v38 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(HANDLE *)(v38 + 24) = Handle[0];
      *(_QWORD *)(v38 + 32) = v35;
      WdLogEvent5_WdWarning(v38);
      if ( v36 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(*v28, v36);
      ObfDereferenceObject(v28);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v45);
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v49);
      return (unsigned int)v35;
    }
  }
}
