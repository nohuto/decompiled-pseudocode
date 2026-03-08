/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C0353634
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C0353838 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        struct _KTHREAD **this,
        const void **a2,
        unsigned int a3,
        char *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v8; // rdi
  size_t v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  const void *v15; // r12
  size_t v16; // r8
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax

  v8 = a3;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3201LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3201LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = *((unsigned int *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 > (unsigned int)v10 )
      v8 = (unsigned int)v10;
    v15 = *a2;
    *((_QWORD *)a5 + 1) = a2;
    v16 = 16LL;
    if ( (unsigned int)v10 <= 0x10 )
      v16 = v10;
    memmove((char *)a5 + 24, v15, v16);
    if ( a6 == 1 )
    {
      v17 = (unsigned int)v8;
      if ( (unsigned __int64)&a4[v8] > MmUserProbeAddress || &a4[v8] <= a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v15, (unsigned int)v8);
    }
    else
    {
      v17 = (unsigned int)v8;
      memmove(a4, v15, (unsigned int)v8);
    }
    *((_DWORD *)a5 + 5) = v8;
    *a7 = v8;
    if ( (unsigned int)v10 <= (unsigned int)v8 )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(3LL, CurrentProcess, v17);
    return 2147483653LL;
  }
  else
  {
    if ( !a4 )
    {
      *a7 = v10;
      return 0LL;
    }
    v12 = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, v12);
    v14 = PsGetCurrentProcess(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetSetMetadata caller (0x%I64x) passed in buffer size of zero",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
