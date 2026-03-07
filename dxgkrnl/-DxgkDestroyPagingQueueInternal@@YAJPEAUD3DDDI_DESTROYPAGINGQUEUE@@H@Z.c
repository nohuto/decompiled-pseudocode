__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rbx
  struct DXGPROCESS *Current; // rsi
  unsigned int v6; // ecx
  __int64 v7; // r9
  int v8; // edx
  DXGPAGINGQUEUE *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+58h] [rbp-40h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]
  char v21; // [rsp+68h] [rbp-30h]
  _BYTE v22[32]; // [rsp+70h] [rbp-28h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+A8h] [rbp+10h] BYREF

  p_hPagingQueue = a1;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2118);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2118);
  hPagingQueue = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v22, Current);
  v6 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)Current + 74) )
  {
    v7 = *((_QWORD *)Current + 35);
    if ( ((p_hPagingQueue->hPagingQueue >> 25) & 0x60) == (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x60)
      && (*(_DWORD *)(v7 + 16LL * v6 + 8) & 0x2000) == 0 )
    {
      v8 = *(_DWORD *)(v7 + 16LL * v6 + 8) & 0x1F;
      if ( v8 )
      {
        if ( v8 == 10 )
        {
          v9 = *(DXGPAGINGQUEUE **)(v7 + 16LL * v6);
          goto LABEL_15;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v9 = 0LL;
LABEL_15:
  v10 = p_hPagingQueue->hPagingQueue;
  if ( v9 )
  {
    v11 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v11 < *((_DWORD *)Current + 74) )
    {
      v12 = *((_QWORD *)Current + 35);
      v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
      if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
        && (v13 & 0x2000) == 0
        && (v13 & 0x1F) != 0 )
      {
        *(_DWORD *)(v12 + 16LL * (((unsigned int)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    DXGPAGINGQUEUE::ReleaseReference(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v19);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, v10, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v19);
    }
    return 3221225485LL;
  }
}
