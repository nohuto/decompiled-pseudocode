/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C0125310
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0125434 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        struct DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE_HEADER *const a2,
        __int64 a3)
{
  char v3; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *v12; // rsi
  const struct _DXGKWIN32KENG_INTERFACE_HEADER *v13; // rdi
  _QWORD *v14; // rax
  int v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  char v17; // [rsp+40h] [rbp-10h]
  struct DXGPROCESS *v18; // [rsp+88h] [rbp+38h] BYREF

  v15 = -1;
  v3 = a3;
  v16 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2000);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2000LL);
  if ( v3 == 1 )
  {
    if ( (*(_WORD *)a2 || *((_WORD *)a2 + 1)) && (*(_WORD *)a2 != 464 || *((_WORD *)a2 + 1) != 11) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6);
      v14[3] = *((unsigned __int16 *)a2 + 1);
      v14[4] = *(unsigned __int16 *)a2;
      v14[5] = 11LL;
      v14[6] = 464LL;
      WdLogEvent5_WdAssertion(v14);
      v8 = -1073741811;
      goto LABEL_6;
    }
    v18 = 0LL;
    if ( DXGPROCESS::CreateDxgProcess(&v18, 0LL, 0LL, 0, 0LL, 0LL) >= 0 )
    {
      v12 = v18;
      *a1 = v18;
      v13 = (const struct _DXGKWIN32KENG_INTERFACE_HEADER *)&gDxgkWin32kEngInterface;
      if ( *(_WORD *)a2 )
        v13 = a2;
      if ( v13 )
        *((_BYTE *)v12 + 346) = (*((unsigned int (**)(void))v13 + 27))() != 0;
      *((_QWORD *)v12 + 11) = v13;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  v8 = 0;
LABEL_6:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15, v6);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v15);
  return v8;
}
