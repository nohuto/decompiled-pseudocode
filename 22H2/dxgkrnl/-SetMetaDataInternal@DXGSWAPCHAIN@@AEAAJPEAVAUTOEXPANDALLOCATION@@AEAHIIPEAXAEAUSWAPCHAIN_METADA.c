/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C02ACC74
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C02AB304 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02AC574 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ?RtlUIntAdd@@YAJIIPEAI@Z @ 0x1C0008E50 (-RtlUIntAdd@@YAJIIPEAI@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016D17C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02AB9C8 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t a5,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // edi
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // ebx
  char *Buffer; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char *v42; // rbx
  __int64 v43; // rax
  char *v44; // rbx
  size_t v45; // rdi
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a4;
  if ( this[2] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 3226LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !(_DWORD)a5 )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14, v16, v17);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  LODWORD(Size[0]) = 0;
  if ( (int)RtlUIntAdd(v8, a5, (unsigned int *)Size) < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = PsGetCurrentProcess(v23, v22, v24, v25);
    WdLogEvent5_WdError(v21);
    DXGSWAPCHAIN::MarkAbandoned(this, v26, v27);
    return 3221225485LL;
  }
  v28 = *((_DWORD *)a2 + 2);
  if ( LODWORD(Size[0]) > v28 )
    v28 = Size[0];
  if ( v28 > 0x2000 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v29[3] = PsGetCurrentProcess(v31, v30, v32, v33);
    v29[4] = v28;
    v29[5] = 0x2000LL;
    WdLogEvent5_WdError(v29);
    v36 = -1073741811;
LABEL_14:
    DXGSWAPCHAIN::MarkAbandoned(this, v34, v35);
    return v36;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a2, v28, *a3);
  v42 = Buffer;
  if ( !Buffer )
  {
    v43 = WdLogNewEntry5_WdLowResource(v39, v38, v40, v41);
    *(_QWORD *)(v43 + 24) = v28;
    WdLogEvent5_WdLowResource(v43);
    v36 = -1073741801;
    goto LABEL_14;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v28);
  v44 = &v42[v8];
  if ( a8 == 1 )
  {
    v45 = (unsigned int)a5;
    if ( &Src[(unsigned int)a5] < Src || (unsigned __int64)&Src[(unsigned int)a5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v44, Src, (unsigned int)a5);
  }
  else
  {
    v45 = (unsigned int)a5;
    memmove(v44, Src, (unsigned int)a5);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = a5;
  if ( (unsigned int)a5 > 0x10 )
    v45 = 16LL;
  memmove((char *)a7 + 12, v44, v45);
  return 0LL;
}
