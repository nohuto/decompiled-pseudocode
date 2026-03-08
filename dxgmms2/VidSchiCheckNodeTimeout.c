/*
 * XREFs of VidSchiCheckNodeTimeout @ 0x1C00A5B80
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C00A5940 (VidSchiCheckHwProgress.c)
 *     VidSchiCheckGPUTimeout @ 0x1C010605C (VidSchiCheckGPUTimeout.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00196B8 (VidSchiSchedulerNodeToDriverEngine.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C001C8D0 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001D52C (-VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C002C8DC (-DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003553C (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C003C4FC (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C003C618 (VidSchiSchedulerNodeToDriverNode.c)
 *     VidSchiSkipXboxNodeTimeout @ 0x1C003C6B0 (VidSchiSkipXboxNodeTimeout.c)
 */

__int64 __fastcall VidSchiCheckNodeTimeout(struct _VIDSCH_NODE *a1, _QWORD *a2)
{
  __int32 v5; // eax
  signed __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  signed __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v17; // [rsp+20h] [rbp-38h] BYREF

  if ( *((_DWORD *)a1 + 111) || *((_DWORD *)a1 + 507) || *((_DWORD *)a1 + 508) )
  {
    if ( a2 )
      *a2 = *((_QWORD *)a1 + 56);
    return 1LL;
  }
  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
  {
    if ( !VidSchiCheckHwSchNodeProgress(a1, 1) )
    {
LABEL_6:
      if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
        *((_DWORD *)a1 + 110) = 0;
      return *((unsigned int *)a1 + 111);
    }
  }
  else if ( !*((_DWORD *)a1 + 722) )
  {
    goto LABEL_6;
  }
  v5 = _InterlockedExchange((volatile __int32 *)a1 + 122, 0);
  if ( !*((_DWORD *)a1 + 110) || v5 )
  {
    if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
      v10 = *((_QWORD *)a1 + 216);
    else
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 12, 0LL, 0LL);
    *((_QWORD *)a1 + 59) = v10;
    v11 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a1 + 57) = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a1 + 56) = v11;
    if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
      VidSchiStartHwSchNodeProgressMonitoring(a1);
    else
      *((_DWORD *)a1 + 110) = 1;
    return *((unsigned int *)a1 + 111);
  }
  *((_QWORD *)a1 + 57) = MEMORY[0xFFFFF78000000320];
  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
    v6 = *((_QWORD *)a1 + 216);
  else
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 12, 0LL, 0LL);
  v7 = *((_QWORD *)a1 + 57);
  if ( *((_QWORD *)a1 + 59) != v6 )
  {
    *((_QWORD *)a1 + 56) = v7;
    *((_QWORD *)a1 + 59) = v6;
    return *((unsigned int *)a1 + 111);
  }
  v8 = v7 - *((_QWORD *)a1 + 56);
  v9 = 10000000LL * g_TdrConfig[1];
  if ( v8 * (unsigned __int64)KeQueryTimeIncrement() <= v9 )
    return *((unsigned int *)a1 + 111);
  if ( !VidSchiSkipXboxNodeTimeout((__int64)a1) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)a1 + 3) + 44LL)
      || !VidSchiRunningDeviceAllowsLongRunningPackets((__int64)a1)
      || (v12 = *((unsigned __int16 *)a1 + 2),
          v13 = *((_QWORD *)a1 + 3),
          v17.OutputFlags.Value = 0,
          v17.InputFlags.Value = VidSchiSchedulerNodeToDriverEngine(v13, v12),
          v17.VidPnSourceId = VidSchiSchedulerNodeToDriverNode(v15, v14),
          (unsigned int)ADAPTER_RENDER::DdiQueryEngineStatus(*(ADAPTER_RENDER **)(v16 + 8), &v17))
      || (*(_BYTE *)&v17.OutputFlags.0 & 1) == 0 )
    {
      VidSchiCaptureRunningProcess(a1);
      *((_DWORD *)a1 + 111) = 1;
      *((_QWORD *)a1 + 58) = v8;
      if ( a2 )
        *a2 = *((_QWORD *)a1 + 56);
      return *((unsigned int *)a1 + 111);
    }
  }
  return 0LL;
}
