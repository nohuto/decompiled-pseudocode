__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 DxgAdapter; // rbx
  void *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  char v14; // [rsp+40h] [rbp-18h]

  v12 = -1;
  v13 = 0LL;
  v5 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 7057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7057);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 7057);
  if ( a3 )
  {
    *a3 = 0LL;
    DxgAdapter = DpiGetDxgAdapter(a1);
    if ( !DxgAdapter )
      goto LABEL_23;
    if ( KeGetCurrentIrql()
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry5(0LL, 275LL, 20LL, DxgAdapter, 0LL, 0LL);
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(DxgAdapter + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(DxgAdapter + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    if ( *(_QWORD *)(DxgAdapter + 2920) )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v7 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
      }
      else
      {
        if ( (_DWORD)v5 != 2 )
        {
          WdLogSingleEntry1(3LL, v5);
          v8 = -1073741637;
          goto LABEL_14;
        }
        v7 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
      }
      *a3 = v7;
      v8 = 0;
    }
    else
    {
LABEL_23:
      WdLogSingleEntry1(2LL, a1);
      v8 = -1071775742;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v5, a1);
    v8 = -1073741811;
  }
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v12);
  }
  return v8;
}
