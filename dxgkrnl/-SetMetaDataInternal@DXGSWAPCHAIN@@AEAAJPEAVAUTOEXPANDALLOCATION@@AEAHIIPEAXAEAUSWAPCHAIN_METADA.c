/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C03555B8
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C0353838 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0353F54 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t Size,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r12
  struct AUTOEXPANDALLOCATION *v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // ebx
  char *Buffer; // rax
  char *v29; // rsi
  char *v30; // rsi
  size_t v31; // rbx
  int *v33; // [rsp+A0h] [rbp+18h]

  v33 = a3;
  v8 = a4;
  v9 = a2;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3291LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3291LL, 0LL, 0LL, 0LL, 0LL);
    a3 = v33;
    v9 = a2;
  }
  if ( !(_DWORD)Size )
  {
    CurrentProcess = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, CurrentProcess);
    v13 = PsGetCurrentProcess(v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) passed in buffer size of zero",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (int)v8 + (int)Size < (unsigned int)v8 )
  {
    v16 = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, v16);
    v18 = PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) overflow when calc used size",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v19, v20);
    return 3221225485LL;
  }
  v15 = (unsigned int)(v8 + Size);
  v21 = *((_DWORD *)v9 + 2);
  if ( (unsigned int)v15 <= v21 )
    v15 = v21;
  if ( (unsigned int)v15 > 0x2000 )
  {
    v22 = PsGetCurrentProcess(this);
    WdLogSingleEntry3(2LL, v22, (unsigned int)v15, 0x2000LL);
    v24 = PsGetCurrentProcess(v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) provided metadata of size 0x%I64x which is bigger than max 0x%I64x",
      v24,
      v15,
      0x2000LL,
      0LL,
      0LL);
    v27 = -1073741811;
LABEL_15:
    DXGSWAPCHAIN::MarkAbandoned(this, v25, v26);
    return v27;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer((const void **)v9, v15, *a3);
  v29 = Buffer;
  if ( !Buffer )
  {
    WdLogSingleEntry1(6LL, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to expand metadata buffer size to 0x%lx",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    v27 = -1073741801;
    goto LABEL_15;
  }
  if ( !*v33 && (_DWORD)v8 )
    memset(Buffer, 0, (unsigned int)v15);
  v30 = &v29[v8];
  if ( a8 == 1 )
  {
    v31 = (unsigned int)Size;
    if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v30, Src, (unsigned int)Size);
  }
  else
  {
    v31 = (unsigned int)Size;
    memmove(v30, Src, (unsigned int)Size);
  }
  *v33 = 1;
  *((_DWORD *)a7 + 5) = Size;
  *((_QWORD *)a7 + 1) = a2;
  *((_DWORD *)a7 + 4) = v8;
  if ( (unsigned int)Size > 0x10 )
    v31 = 16LL;
  memmove((char *)a7 + 24, v30, v31);
  return 0LL;
}
