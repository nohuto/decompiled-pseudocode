/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C01A7640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetWin32kImportTable @ 0x1C0007808 (DxgkGetWin32kImportTable.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0008D6C (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E50 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E74 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01A7864 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        DXGFASTMUTEX **a1,
        const struct _DXGKWIN32KENG_INTERFACE_HEADER *const a2,
        __int64 a3)
{
  char v3; // bl
  _WORD *v6; // rbx
  DXGFASTMUTEX *v7; // rsi
  const struct _DXGKWIN32KENG_INTERFACE_HEADER *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGGLOBAL *Global; // rax
  DXGPROCESS *v14; // rbx
  __int64 Win32kImportTable; // rax
  DXGFASTMUTEX *v16; // [rsp+50h] [rbp-B0h] BYREF
  char v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  char v20; // [rsp+70h] [rbp-90h]
  _QWORD v21[25]; // [rsp+80h] [rbp-80h] BYREF
  char v22; // [rsp+148h] [rbp+48h]

  v18 = -1;
  v3 = a3;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2000);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 2000);
  if ( v3 != 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v16, (struct DXGGLOBAL *)((char *)Global + 368), 0);
    if ( v17 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v16, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v16);
    v14 = *a1;
    v17 = 1;
    if ( v14 )
    {
      CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v21);
      *((_DWORD *)v14 + 106) |= 0x800u;
      DXGPROCESS::AcquireReference(v14);
      if ( !v17 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v16, 0LL, 0LL);
      v17 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v16);
      DXGPROCESS::DestroyDxgProcess(v14);
      if ( v17 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v16, 0LL, 0LL);
      DXGFASTMUTEX::Acquire(v16);
      v17 = 1;
      DXGPROCESS::ReleaseReference(v14);
      if ( v22 )
      {
        PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v21);
      }
      else if ( v21[0] )
      {
        Win32kImportTable = DxgkGetWin32kImportTable();
        (*(void (__fastcall **)(_QWORD))(Win32kImportTable + 16))(v21[0]);
      }
    }
    *a1 = 0LL;
    if ( v17 )
    {
      v17 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v16);
    }
    goto LABEL_13;
  }
  v6 = (_WORD *)((char *)a2 + 2);
  if ( !*(_WORD *)a2 )
  {
    if ( !*v6 )
      goto LABEL_7;
LABEL_31:
    WdLogSingleEntry4(1LL, (unsigned __int16)*v6, *(unsigned __int16 *)a2, 11LL, 464LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Interface mismatch between Win32k (0x%I64x, 0x%I64x) and Dxgkrnl (0x%I64x, 0x%I64x).",
      (unsigned __int16)*v6,
      *(unsigned __int16 *)a2,
      11LL,
      464LL,
      0LL);
    v9 = -1073741811;
    goto LABEL_14;
  }
  if ( *(_WORD *)a2 != 464 || *((_WORD *)a2 + 1) != 11 )
    goto LABEL_31;
LABEL_7:
  v16 = 0LL;
  if ( DXGPROCESS::CreateDxgProcess(&v16, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v7 = v16;
    v8 = (const struct _DXGKWIN32KENG_INTERFACE_HEADER *)&gDxgkWin32kEngInterface;
    *a1 = v16;
    if ( *(_WORD *)a2 )
      v8 = a2;
    if ( v8 )
      *((_DWORD *)v7 + 106) = ((*((unsigned int (**)(void))v8 + 27))() != 0 ? 4 : 0) | *((_DWORD *)v7 + 106) & 0xFFFFFFFB;
    *((_QWORD *)v7 + 11) = v8;
  }
LABEL_13:
  v9 = 0;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v18);
  }
  return v9;
}
