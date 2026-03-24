/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C03007D4
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C015D654 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0dddi_EtwWriteTransfer @ 0x1C005F3F0 (McTemplateK0dddi_EtwWriteTransfer.c)
 *     McTemplateK0qiii_EtwWriteTransfer @ 0x1C005F6A0 (McTemplateK0qiii_EtwWriteTransfer.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02ACF48 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  LARGE_INTEGER v6; // rax
  __int64 v7; // r8
  LARGE_INTEGER v8; // rdi
  __int64 v9; // rcx
  LONGLONG v10; // r9
  int v11; // r14d
  LONGLONG v12; // rax
  LONGLONG v13; // rdx
  bool v14; // zf
  DXGPUSHLOCK *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r8
  struct DXGSWAPCHAIN **v18; // rcx
  struct DXGSWAPCHAIN *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v26[8]; // [rsp+48h] [rbp-31h] BYREF
  DXGPUSHLOCK *v27; // [rsp+50h] [rbp-29h]
  int v28; // [rsp+58h] [rbp-21h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v29; // [rsp+60h] [rbp-19h] BYREF
  __int128 v30; // [rsp+88h] [rbp+Fh] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, (struct _KTHREAD **)this + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v27);
  v28 = 2;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *((unsigned int *)this + 90);
  v8 = v6;
  v9 = *((unsigned int *)this + 91);
  v10 = v6.QuadPart * v7 / v9 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 55) = v10;
  v11 = v10;
  v12 = PerformanceFrequency.QuadPart * v9 * (unsigned int)v10 / v7;
  v13 = PerformanceFrequency.QuadPart * v9 * (unsigned int)v10 % v7;
  v14 = bTracingEnabled == 0;
  *((_QWORD *)this + 56) = v12;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qiii_EtwWriteTransfer(v9, v13, v7, 1, v10, *((_QWORD *)this + 54), v12);
    v11 = *((_DWORD *)this + 110);
  }
  v15 = v27;
  v16 = *((unsigned int *)a2 + 15);
  v28 = 0;
  *((_QWORD *)v27 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2704, Executive, 0, 0, 0LL);
  v18 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 337);
  if ( v18 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v29.hNtSwapChain = 0LL;
      v29.bGlobalMetaData = 1;
      v29.bProducer = 1;
      *(_QWORD *)&v29.DataCopied = 0LL;
      v30 = 0LL;
      v19 = *v18;
      v29.bSetMetaData = 0;
      v29.pBuffer = &v30;
      v29.BufferSize = 16;
      if ( (int)SwapChainGetSetMetaDataInternal(v19, &v29, 0, 0) >= 0 && v29.DataCopied == 16 )
      {
        v20 = DWORD1(v30);
        if ( DWORD1(v30) )
        {
          *((_BYTE *)this + 344) = 1;
          if ( v8.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            v22 = WdLogNewEntry5_WdWarning(v20, PerformanceFrequency.QuadPart / 10, v17);
            *(_QWORD *)(v22 + 24) = v16;
            *(_QWORD *)(v22 + 32) = DWORD1(v30);
            WdLogEvent5_WdWarning(v22);
          }
          else if ( (unsigned int)v20 < (unsigned int)v16
                 || (v21 = *((unsigned int *)a2 + 17), (_DWORD)v21) && v21 > *((_QWORD *)this + 55) )
          {
            LODWORD(v16) = *((_DWORD *)this + 78);
            v11 = *((_DWORD *)this + 79);
            *(_DWORD *)a3 |= 2u;
          }
        }
      }
    }
  }
  v14 = bTracingEnabled == 0;
  v23 = *((unsigned int *)this + 110);
  v24 = *((_QWORD *)this + 56);
  *((_QWORD *)this + 41) = v24;
  *((_DWORD *)this + 78) = v16;
  *((_DWORD *)this + 79) = v11;
  *((_DWORD *)this + 80) = v23;
  *((_DWORD *)this + 710) = v23;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0dddi_EtwWriteTransfer(v23, v24, v17, v16, v11, v23, v24);
  KeReleaseMutex((PRKMUTEX)((char *)this + 2704), 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
}
