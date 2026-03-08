/*
 * XREFs of ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00B2C58
 * Callers:
 *     VidMmEndCPUAccess @ 0x1C0017130 (VidMmEndCPUAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C002EAFC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8520 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EndCPUAccess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC ***a2,
        __int64 a3,
        unsigned int a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v4; // rbx
  __int64 v5; // rbp
  __int64 v7; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdi
  struct _VIDMM_GLOBAL_ALLOC **v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+28h] [rbp-30h]

  v4 = 0LL;
  v5 = a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = v5;
  }
  if ( (v5 & 0xFFFFFFFE) != 0 )
  {
    WdLogSingleEntry1(1LL, 8688LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225712LL;
  }
  v7 = (__int64)**a2;
  if ( !*(_DWORD *)(v7 + 360) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225485LL;
  }
  v8 = **a2;
  if ( *((_BYTE *)v8 + 80) )
  {
    WdLogSingleEntry1(1LL, 8704LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v8 + 18) & 0x2000) != 0 )
    UnlockParavirtualizedAllocationOnHost(**a2);
  _InterlockedDecrement((volatile signed __int32 *)v8 + 90);
  if ( bTracingEnabled )
  {
    v9 = a2[1];
    if ( v9 )
      v4 = v9[3];
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      v14 = v5;
      McTemplateK0ppq_EtwWriteTransfer(v7, &EventUnlock, a3, v4, a2, v14);
    }
  }
  return 0LL;
}
