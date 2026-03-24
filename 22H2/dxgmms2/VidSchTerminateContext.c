/*
 * XREFs of VidSchTerminateContext @ 0x1C0080050
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C00106CC (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00D1620 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0011630 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00117B4 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00224B4 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C0033618 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     VidSchFlushContext @ 0x1C00801A0 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // r8
  __int128 v11; // xmm1
  int v12; // r10d
  int v13; // edx
  int v14; // edx
  __int64 v15; // rax
  void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  __int128 v20; // xmm1
  __int64 v21; // r8
  int v22; // ecx
  int v23; // ecx
  __int128 v24; // [rsp+88h] [rbp+37h] BYREF
  __int128 v25; // [rsp+98h] [rbp+47h]

  if ( a1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2784), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 224, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v4 + 2784));
    v24 = 0LL;
    LODWORD(v24) = 13;
    VidSchFlushContext(a1, &v24);
    v5 = *((_DWORD *)a1 + 28);
    if ( (v5 & 1) != 0 && (v16 = (void *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v4 + 8), v16);
      *((_QWORD *)a1 + 8) = 0LL;
      if ( bTracingEnabled )
      {
        v17 = *((_QWORD *)a1 + 13);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          if ( !v18 )
            v18 = *((_QWORD *)a1 + 13);
        }
        else
        {
          v18 = 0LL;
        }
        v19 = *((_DWORD *)a1 + 229);
        v20 = *(_OWORD *)((char *)a1 + 956);
        v21 = *((unsigned int *)a1 + 228);
        v22 = (*(_DWORD *)(v17 + 48) >> 4) & 1;
        v24 = *(_OWORD *)((char *)a1 + 940);
        v25 = v20;
        v23 = (2 * v22) | 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            v23,
            &EventDestroyContext,
            v21,
            v18,
            v21,
            v19,
            v24,
            SBYTE4(v24),
            SBYTE8(v24),
            SBYTE12(v24),
            v25,
            v23,
            a1);
      }
    }
    else if ( (v5 & 4) != 0 && bTracingEnabled )
    {
      v7 = *((_QWORD *)a1 + 13);
      v8 = *((_DWORD *)a1 + 28) & 0x40;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( !v9 )
          v9 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = *((unsigned int *)a1 + 229);
      v11 = *(_OWORD *)((char *)a1 + 956);
      v12 = *((_DWORD *)a1 + 228);
      v13 = (*(_DWORD *)(v7 + 48) >> 4) & 1;
      v24 = *(_OWORD *)((char *)a1 + 940);
      v25 = v11;
      v14 = (2 * ((v8 != 0 ? 2 : 0) | v13)) | 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v7,
          &EventDestroyContext,
          v10,
          v9,
          v12,
          v10,
          v24,
          SBYTE4(v24),
          SBYTE8(v24),
          SBYTE12(v24),
          v25,
          v14,
          a1);
    }
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
}
