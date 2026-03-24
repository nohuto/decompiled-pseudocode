/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C025F730
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02DDD04 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *Current; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int *v19; // rsi
  _QWORD *v20; // rax
  DXGADAPTER *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int active; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rdx
  struct DXGADAPTER *v30; // r14
  size_t v31; // r12
  char *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  bool v41; // [rsp+28h] [rbp-170h]
  int v42; // [rsp+30h] [rbp-168h] BYREF
  __int64 v43; // [rsp+38h] [rbp-160h]
  char v44; // [rsp+40h] [rbp-158h]
  DXGADAPTER *v45; // [rsp+48h] [rbp-150h] BYREF
  struct DXGADAPTER *v46[3]; // [rsp+58h] [rbp-140h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-128h]
  size_t Size; // [rsp+80h] [rbp-118h]
  _QWORD v49[10]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v50[144]; // [rsp+E0h] [rbp-B8h] BYREF

  memset(v49, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v49[1]);
  v49[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v49[3]) = 44;
  LOBYTE(v49[6]) = -1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2037);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2037LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v46[1] = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12, v14, v15);
    WdLogEvent5_WdError(v11);
    goto LABEL_27;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a1;
  Size = *(_QWORD *)(a1 + 16);
  v46[0] = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v45,
    LODWORD(Src[0]),
    (struct _KTHREAD **)Current,
    v46,
    1);
  v19 = (int *)v46[0];
  if ( !v46[0] )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v20[3] = -1073741811LL;
    v20[4] = Current;
    v20[5] = LODWORD(Src[0]);
    WdLogEvent5_WdError(v20);
    goto LABEL_12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v46[0], 0LL);
  active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
  if ( active >= 0 )
  {
    if ( v19[649] > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22) + 24) = v19;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50, v29);
LABEL_12:
      v21 = v45;
      if ( !v45 )
        goto LABEL_27;
      goto LABEL_26;
    }
    v30 = 0LL;
    v31 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v32 = (char *)Src[1];
      if ( !Src[1] )
      {
        v33 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v33 + 24) = 6486LL;
        WdLogEvent5_WdError(v33);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50, v34);
        v21 = v45;
        if ( !v45 )
        {
LABEL_27:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v16);
          if ( v44 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v42);
          }
          return 3221225485LL;
        }
LABEL_26:
        DXGADAPTER::ReleaseReference(v21);
        goto LABEL_27;
      }
      v30 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, PagedPool);
      v46[2] = v30;
      if ( !v30 )
      {
        v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        active = -1073741801;
        *(_QWORD *)(v40 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v40);
        goto LABEL_15;
      }
      if ( &v32[v31] < v32 || (unsigned __int64)&v32[v31] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v30, v32, v31);
    }
    active = DmmInvalidateActiveVidPn(
               (DXGADAPTER *)v19,
               DXGK_AVIR_USERMODE,
               v30,
               v31,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v49,
               v41);
    operator delete[](v30);
  }
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50, v22);
  if ( v45 )
    DXGADAPTER::ReleaseReference(v45);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v25);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v42);
  return (unsigned int)active;
}
