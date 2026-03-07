void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  LARGE_INTEGER v6; // rax
  __int64 v7; // r8
  LARGE_INTEGER v8; // rdi
  __int64 v9; // rcx
  LONGLONG v10; // rax
  LONGLONG v11; // rdx
  bool v12; // zf
  DXGPUSHLOCK *v13; // rcx
  __int64 v14; // r14
  int v15; // r15d
  __int64 v16; // r8
  struct DXGSWAPCHAIN **v17; // rcx
  struct DXGSWAPCHAIN *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-69h]
  __int64 v24; // [rsp+28h] [rbp-61h]
  __int64 v25; // [rsp+30h] [rbp-59h]
  __int64 v26; // [rsp+38h] [rbp-51h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-31h] BYREF
  DXGPUSHLOCK *v29; // [rsp+60h] [rbp-29h]
  int v30; // [rsp+68h] [rbp-21h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v31; // [rsp+70h] [rbp-19h] BYREF
  __int128 v32; // [rsp+98h] [rbp+Fh] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)this + 51, 0);
  DXGPUSHLOCK::AcquireExclusive(v29);
  v30 = 2;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *((unsigned int *)this + 92);
  v8 = v6;
  v9 = *((unsigned int *)this + 93);
  v10 = v6.QuadPart * v7 / v9 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 56) = v10;
  v11 = PerformanceFrequency.QuadPart * v9 * (unsigned int)v10 % v7;
  v12 = bTracingEnabled == 0;
  *((_QWORD *)this + 57) = PerformanceFrequency.QuadPart * v9 * (unsigned int)v10 / v7;
  if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qiiiq_EtwWriteTransfer(
      v9,
      v11,
      v7,
      1,
      *((_QWORD *)this + 56),
      *((_QWORD *)this + 55),
      *((_QWORD *)this + 57),
      *((_DWORD *)this + 99));
  v13 = v29;
  v14 = *((unsigned int *)a2 + 15);
  v15 = *((_DWORD *)this + 112);
  v30 = 0;
  *((_QWORD *)v29 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2720, Executive, 0, 0, 0LL);
  v17 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
  if ( v17 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v31.hNtSwapChain = 0LL;
      v31.bGlobalMetaData = 1;
      v31.bProducer = 1;
      *(_QWORD *)&v31.DataCopied = 0LL;
      v32 = 0LL;
      v18 = *v17;
      v31.bSetMetaData = 0;
      v31.pBuffer = &v32;
      v31.BufferSize = 16;
      if ( (int)SwapChainGetSetMetaDataInternal(v18, &v31, 0, 0) >= 0 && v31.DataCopied == 16 )
      {
        v19 = DWORD1(v32);
        if ( DWORD1(v32) )
        {
          *((_BYTE *)this + 352) = 1;
          if ( v8.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            WdLogSingleEntry2(3LL, v14, v19);
          }
          else if ( (unsigned int)v19 < (unsigned int)v14
                 || (v20 = *((unsigned int *)a2 + 17), (_DWORD)v20) && v20 > *((_QWORD *)this + 56) )
          {
            LODWORD(v14) = *((_DWORD *)this + 80);
            v15 = *((_DWORD *)this + 81);
            *(_DWORD *)a3 |= 2u;
          }
        }
      }
    }
  }
  v12 = bTracingEnabled == 0;
  v21 = *((unsigned int *)this + 112);
  v22 = *((_QWORD *)this + 57);
  *((_QWORD *)this + 42) = v22;
  *((_DWORD *)this + 80) = v14;
  *((_DWORD *)this + 81) = v15;
  *((_DWORD *)this + 82) = v21;
  *((_DWORD *)this + 714) = v21;
  if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v26) = v21;
    LODWORD(v25) = v15;
    LODWORD(v24) = v14;
    LODWORD(Timeout) = *((_DWORD *)this + 65);
    McTemplateK0xqdddi_EtwWriteTransfer(v21, v22, v16, *((_QWORD *)this + 31), Timeout, v24, v25, v26, v22);
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2720), 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
}
