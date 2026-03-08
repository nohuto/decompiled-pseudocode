/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x1C0178D80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C02E4780 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *v4; // rdx
  void *const **p_pType; // rdx
  void *const *v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v12; // rax
  __int64 hDevice; // r8
  unsigned int *pVidPnSourceId; // rdx
  unsigned int v15; // r9d
  _DWORD *p_VidPnSourceCount; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+50h] [rbp-98h] BYREF
  __int64 v21; // [rsp+58h] [rbp-90h]
  char v22; // [rsp+60h] [rbp-88h]
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v23; // [rsp+68h] [rbp-80h]
  void *const *v24; // [rsp+70h] [rbp-78h]
  _QWORD v25[10]; // [rsp+80h] [rbp-68h] BYREF

  memset(v25, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v25[1]);
  v25[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v25[3]) = 47;
  LOBYTE(v25[6]) = -1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2077;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2077);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2077);
  v4 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)&a1[1];
  if ( (unsigned __int64)&a1[1] >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)MmUserProbeAddress;
  v23.0 = *v4;
  p_pType = (void *const **)&a1[1].pType;
  if ( (unsigned __int64)&a1[1].pType >= MmUserProbeAddress )
    p_pType = (void *const **)MmUserProbeAddress;
  v6 = *p_pType;
  v24 = *p_pType;
  if ( (*(_BYTE *)&v23.0 & 2) == 0 )
  {
    v7 = SetVidPnSourceOwnerInternal(a1, v23, v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v25);
LABEL_9:
    v8 = v7;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v20);
    }
    return v8;
  }
  v12 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v12 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  hDevice = v12->hDevice;
  pVidPnSourceId = (unsigned int *)a1->pVidPnSourceId;
  if ( (unsigned __int64)pVidPnSourceId >= MmUserProbeAddress )
    pVidPnSourceId = (unsigned int *)MmUserProbeAddress;
  v15 = *pVidPnSourceId;
  p_VidPnSourceCount = &a1->VidPnSourceCount;
  if ( (unsigned __int64)&a1->VidPnSourceCount >= MmUserProbeAddress )
    p_VidPnSourceCount = (_DWORD *)MmUserProbeAddress;
  if ( *p_VidPnSourceCount == 1 )
  {
    v7 = DisableDWMVirtualModeOnVidPnSource(hDevice, v15);
    goto LABEL_9;
  }
  v17 = v12->hDevice;
  WdLogSingleEntry1(2LL, hDevice);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DisableDWMVirtualMode can only be used with a single VidPn source",
    v17,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v20);
  return 3221225485LL;
}
