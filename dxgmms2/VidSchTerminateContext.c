/*
 * XREFs of VidSchTerminateContext @ 0x1C00A8F80
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C0013B3C (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0011CE0 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0011E64 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C002C828 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003DE9C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     VidSchFlushContext @ 0x1C00AB850 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v2; // r14
  int v3; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  __int128 v8; // xmm1
  int v9; // r10d
  int v10; // edx
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // rcx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  __int128 v17; // xmm1
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // r9
  int v21; // ecx
  __int128 v22; // [rsp+88h] [rbp+37h] BYREF
  __int128 v23; // [rsp+98h] [rbp+47h]

  if ( a1 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 2880), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 226, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v2 + 2880));
    v22 = 0LL;
    LODWORD(v22) = 15;
    VidSchFlushContext(a1, &v22);
    v3 = *((_DWORD *)a1 + 28);
    if ( (v3 & 1) != 0
      && (v14 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v2 + 8), v14);
      *((_QWORD *)a1 + 8) = 0LL;
      if ( bTracingEnabled )
      {
        v15 = *((_QWORD *)a1 + 13);
        v16 = *((_DWORD *)a1 + 231);
        v17 = *(_OWORD *)((char *)a1 + 964);
        v18 = *((unsigned int *)a1 + 230);
        v19 = *(_DWORD *)(v15 + 48) >> 4;
        v22 = *(_OWORD *)((char *)a1 + 948);
        v23 = v17;
        if ( v15 )
        {
          v20 = *(_QWORD *)(v15 + 8);
          if ( !v20 )
            v20 = v15;
        }
        else
        {
          v20 = 0LL;
        }
        v21 = (2 * (v19 & 1)) | 1;
        if ( (byte_1C00769C1 & 4) != 0 )
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            v21,
            &EventDestroyContext,
            v18,
            v20,
            v18,
            v16,
            v22,
            SBYTE4(v22),
            SBYTE8(v22),
            SBYTE12(v22),
            v23,
            v21,
            a1);
      }
    }
    else if ( (v3 & 4) != 0 && bTracingEnabled )
    {
      v5 = *((_QWORD *)a1 + 13);
      v6 = *((_DWORD *)a1 + 28) & 0x40;
      v7 = *((unsigned int *)a1 + 231);
      v8 = *(_OWORD *)((char *)a1 + 964);
      v9 = *((_DWORD *)a1 + 230);
      v10 = *(_DWORD *)(v5 + 48) >> 4;
      v22 = *(_OWORD *)((char *)a1 + 948);
      v23 = v8;
      if ( v5 )
      {
        v11 = *(_QWORD *)(v5 + 8);
        if ( !v11 )
          v11 = v5;
      }
      else
      {
        v11 = 0LL;
      }
      if ( (byte_1C00769C1 & 4) != 0 )
      {
        v12 = (2 * (v10 & 1 | (v6 != 0 ? 2 : 0))) | 1;
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v12,
          &EventDestroyContext,
          v7,
          v11,
          v9,
          v7,
          v22,
          SBYTE4(v22),
          SBYTE8(v22),
          SBYTE12(v22),
          v23,
          v12,
          a1);
      }
    }
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 3221225485LL;
  }
}
