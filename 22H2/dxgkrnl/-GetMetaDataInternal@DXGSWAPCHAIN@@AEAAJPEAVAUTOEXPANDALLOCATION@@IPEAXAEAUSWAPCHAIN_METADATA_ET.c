/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C02AB158
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C02AB304 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        unsigned int a3,
        char *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const void *v18; // r15
  size_t v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9

  v8 = a3;
  if ( this[2] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 3137LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_DWORD *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 > v11 )
      v8 = v11;
    v18 = *(const void **)a2;
    v19 = 16LL;
    if ( v11 <= 0x10 )
      v19 = *((unsigned int *)a2 + 2);
    memmove((char *)a5 + 12, *(const void **)a2, v19);
    if ( a6 == 1 )
    {
      v20 = (unsigned int)v8;
      if ( (unsigned __int64)&a4[v8] > MmUserProbeAddress || &a4[v8] <= a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v18, (unsigned int)v8);
    }
    else
    {
      v20 = (unsigned int)v8;
      memmove(a4, v18, (unsigned int)v8);
    }
    *((_DWORD *)a5 + 2) = v8;
    *a7 = v8;
    if ( v11 <= (unsigned int)v8 )
      return 0LL;
    v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = PsGetCurrentProcess(v26, v25, v27, v28);
    *(_QWORD *)(v24 + 32) = v20;
    WdLogEvent5_WdWarning(v24);
    return 2147483653LL;
  }
  else
  {
    if ( !a4 )
    {
      *a7 = v11;
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14, v16, v17);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
