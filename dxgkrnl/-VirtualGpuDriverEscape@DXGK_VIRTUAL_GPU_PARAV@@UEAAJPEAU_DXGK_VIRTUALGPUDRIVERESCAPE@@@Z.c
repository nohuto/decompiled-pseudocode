__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2)
{
  unsigned __int64 InputBufferSize; // r8
  unsigned int v5; // r14d
  const wchar_t *v6; // r9
  __int64 v7; // rax
  int *pInputBuffer; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  ULONG OutputBufferSize; // eax
  int v17; // eax
  __int64 v18; // [rsp+28h] [rbp-48h]
  PVOID pOutputBuffer; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+5Ch] [rbp-14h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  InputBufferSize = a2->InputBufferSize;
  v5 = 0;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    WdLogSingleEntry1(2LL, (unsigned int)InputBufferSize);
    v6 = L"Invalid input buffer size: 0x%I64x";
    v18 = 0LL;
LABEL_3:
    v7 = a2->InputBufferSize;
LABEL_4:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v7, v18, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  pInputBuffer = (int *)a2->pInputBuffer;
  v10 = pInputBuffer[2];
  switch ( (_DWORD)v10 )
  {
    case 0:
      if ( (unsigned int)InputBufferSize < 0x14 )
      {
        WdLogSingleEntry2(2LL, InputBufferSize, 444LL);
        v6 = L"Invalid input buffer size to read PCI config: 0x%I64x";
        v18 = 444LL;
        goto LABEL_3;
      }
      OutputBufferSize = a2->OutputBufferSize;
      if ( OutputBufferSize < pInputBuffer[4] )
      {
        WdLogSingleEntry2(2LL, OutputBufferSize, 450LL);
        v7 = a2->OutputBufferSize;
        v6 = L"Invalid output buffer size to read PCI config: 0x%I64x";
        v18 = 450LL;
        goto LABEL_4;
      }
      pOutputBuffer = a2->pOutputBuffer;
      v20 = *((_DWORD *)this + 6);
      v23 = 0;
      v21 = pInputBuffer[3];
      v22 = pInputBuffer[4];
      v17 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 48LL))(
              this,
              &pOutputBuffer);
      v5 = v17;
      if ( bTracingEnabled )
        VgpuTraceFrequentRead(
          1,
          v17,
          this,
          L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
          (wchar_t *)L"(offset, size) %d %d",
          pInputBuffer[3],
          pInputBuffer[4]);
      return v5;
    case 1:
      if ( (unsigned int)InputBufferSize >= 0x14 )
      {
        v15 = (unsigned int)pInputBuffer[4];
        if ( (unsigned int)v15 < 0xFFFF && InputBufferSize >= v15 + 20 )
        {
          v23 = 0;
          pOutputBuffer = pInputBuffer + 5;
          v20 = *((_DWORD *)this + 6);
          v21 = pInputBuffer[3];
          v22 = pInputBuffer[4];
          v5 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 56LL))(
                 this,
                 &pOutputBuffer);
          if ( bTracingEnabled )
            VgpuTraceFrequentRead(
              1,
              v5,
              this,
              L"DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG",
              (wchar_t *)L"(offset, size)  %d %d",
              pInputBuffer[3],
              pInputBuffer[4]);
          return v5;
        }
        v14 = 475LL;
      }
      else
      {
        v14 = 469LL;
      }
      WdLogSingleEntry2(2LL, InputBufferSize, v14);
      v6 = L"Invalid input buffer size to write PCI config: 0x%I64x";
      v18 = v14;
      goto LABEL_3;
    case 2:
      if ( (unsigned int)InputBufferSize >= 0x1C )
      {
        if ( *((_BYTE *)this + 172) )
        {
          WdLogSingleEntry2(2LL, this, 509LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE called twice for vGPU 0x%I64x",
            (__int64)this,
            509LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        if ( bTracingEnabled )
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
        *((_BYTE *)this + 172) = 1;
        *((_OWORD *)this + 22) = *(_OWORD *)((char *)a2->pInputBuffer + 12);
        return v5;
      }
      v11 = 504LL;
LABEL_33:
      WdLogSingleEntry2(2LL, InputBufferSize, v11);
      v6 = L"Invalid input/output buffer size: 0x%I64x";
      v18 = v11;
      goto LABEL_3;
    case 3:
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RELEASE", 0LL);
      *((_BYTE *)this + 172) = 0;
      return v5;
    case 4:
      if ( a2->OutputBufferSize == 4 )
      {
        *(_DWORD *)a2->pOutputBuffer = 1;
        return v5;
      }
      v11 = 494LL;
      goto LABEL_33;
    case 5:
      if ( (unsigned int)InputBufferSize >= 0x10 )
      {
        v12 = bTracingEnabled == 0;
        v13 = pInputBuffer[3];
        *((_DWORD *)this + 42) = v13;
        if ( !v12 )
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v13);
        return v5;
      }
      v11 = 542LL;
      goto LABEL_33;
    case 6:
      if ( (unsigned int)InputBufferSize < 0x18 )
      {
        WdLogSingleEntry2(2LL, InputBufferSize, 556LL);
        v6 = L"Invalid input/output buffer size for DXGKVGPU_ESCAPE_TYPE_PAUSE: 0x%I64x";
        v18 = 556LL;
        goto LABEL_3;
      }
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_PAUSE", 0LL);
      if ( (*((_DWORD *)a2->pInputBuffer + 5) & 1) == 0 )
      {
        DXGK_VIRTUAL_GPU_PARAV::SuspendDevices(this);
        DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176), 0);
        DXGVIRTUALMACHINE::PauseVirtualGpu(*((struct _KTHREAD ***)this + 13));
      }
      break;
    case 7:
      if ( (unsigned int)InputBufferSize < 0x18 )
      {
        WdLogSingleEntry2(2LL, InputBufferSize, 614LL);
        v6 = L"Invalid input/output buffer size for DXGKVGPU_ESCAPE_TYPE_RESUME: 0x%I64x";
        v18 = 614LL;
        goto LABEL_3;
      }
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RESUME", 0LL);
      DXG_VMBUS_CHANNEL_BASE::ResumeChannel((DXG_VMBUS_CHANNEL_BASE *)(*((_QWORD *)this + 13) + 160LL));
      DXG_VMBUS_CHANNEL_BASE::ResumeChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
      DXGK_VIRTUAL_GPU_PARAV::ResumeDevices(this);
      break;
    default:
      WdLogSingleEntry2(2LL, v10, 628LL);
      v7 = pInputBuffer[2];
      v6 = L"Invalid escape type: 0x%I64x";
      v18 = 628LL;
      goto LABEL_4;
  }
  return v5;
}
