/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C01848C8
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183AE8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00225A8 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiGetMonitorDescriptor @ 0x1C0184A98 (DpiGetMonitorDescriptor.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C0184B78 (DpiQueryDisplayIDDescriptor.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver(void **this, __int64 a2)
{
  _QWORD *v3; // r14
  unsigned int v4; // esi
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r15
  int MonitorDescriptor; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  SIZE_T v17; // rax
  PVOID v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rcx
  __int64 v38; // rsi
  PVOID v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  int v44; // r8d
  char *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[7] )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_DWORD *)this + 32) )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( this[17] )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v29);
  }
  v3 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)operator new[](0x9FuLL, 0x4D677844u, PagedPool);
    v9 = v5;
    if ( !v5 )
    {
      v36 = WdLogNewEntry5_WdError(v7, v6);
      WdLogEvent5_WdError(v36);
      LODWORD(v14) = -1073741801;
LABEL_41:
      while ( v3 )
      {
        v37 = v3;
        v3 = (_QWORD *)*v3;
        operator delete[](v37);
      }
      goto LABEL_32;
    }
    MonitorDescriptor = DpiGetMonitorDescriptor(this[7], v4 << 7, v8, v5 + 24);
    v14 = MonitorDescriptor;
    if ( MonitorDescriptor == -1071841272 )
      break;
    if ( MonitorDescriptor == -1071841279 || MonitorDescriptor == -1071774719 )
    {
      if ( v4 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdWarning(v32);
      goto LABEL_18;
    }
    if ( MonitorDescriptor < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v30 + 24) = v14;
      WdLogEvent5_WdError(v30);
      goto LABEL_18;
    }
    *(_QWORD *)v9 = v3;
    v15 = -v4;
    v9[2] = 2;
    *((_QWORD *)v9 + 2) = 128LL;
    v3 = v9;
    v16 = -(v4++ != 0);
    v9[3] = (v16 & 0xFE) + 1;
    if ( v4 > 0xFE )
      goto LABEL_19;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = v4;
LABEL_18:
  operator delete[](v9);
  LODWORD(v14) = 0;
LABEL_19:
  if ( (int)v14 < 0 )
    goto LABEL_41;
  if ( !v3 )
    goto LABEL_32;
  if ( !v4 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v15, v11);
    WdLogEvent5_WdAssertion(v33);
  }
  v17 = 8LL * v4;
  if ( !is_mul_ok(v4, 8uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, 0x4D677844u, PagedPool);
  this[17] = v18;
  if ( !v18 )
    goto LABEL_49;
  for ( *((_DWORD *)this + 32) = v4; v4; *v20 = 0LL )
  {
    if ( !v3 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v34);
    }
    *((_QWORD *)this[17] + --v4) = v3;
    v3 = (_QWORD *)*v3;
    v20 = (_QWORD *)*((_QWORD *)this[17] + v4);
  }
  if ( v3 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v35);
  }
LABEL_32:
  if ( (int)v14 >= 0 )
  {
    v21 = this[7];
    LODWORD(Size) = 0;
    if ( (unsigned int)DpiQueryDisplayIDDescriptor(v21, &Size, 0LL) == -1073741789 )
    {
      v38 = (unsigned int)Size;
      if ( (unsigned int)(Size - 1) > 0xFFFF )
      {
        v49 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v49 + 24) = v38;
LABEL_51:
        WdLogEvent5_WdWarning(v49);
        return (unsigned int)v14;
      }
      v39 = operator new[]((unsigned int)Size, 0x4D677844u, PagedPool);
      this[20] = v39;
      if ( v39 )
      {
        memset(v39, 0, (unsigned int)v38);
        v40 = DpiQueryDisplayIDDescriptor(this[7], &Size, this[20]);
        v43 = v40;
        if ( v40 < 0 )
        {
          v50 = WdLogNewEntry5_WdError(v42, v41);
          *(_QWORD *)(v50 + 24) = v43;
          WdLogEvent5_WdError(v50);
          operator delete[](this[20]);
          this[20] = 0LL;
          return (unsigned int)v14;
        }
        v44 = Size;
        v45 = (char *)this[20];
        *((_DWORD *)this + 38) = Size;
        DisplayID_Initialize((struct DisplayIDObj *)(this + 21), v45, v44);
        if ( *((_DWORD *)this + 32) )
          return (unsigned int)v14;
        v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        goto LABEL_51;
      }
LABEL_49:
      v51 = WdLogNewEntry5_WdError(v20, v19);
      WdLogEvent5_WdError(v51);
      LODWORD(v14) = -1073741801;
    }
  }
  return (unsigned int)v14;
}
