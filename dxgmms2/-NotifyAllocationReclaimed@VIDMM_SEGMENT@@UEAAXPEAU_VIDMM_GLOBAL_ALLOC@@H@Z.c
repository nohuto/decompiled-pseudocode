/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00FE2E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002F1D8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1C00FCD98 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::NotifyAllocationReclaimed(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2, int a3)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rax
  __int64 v9; // rdx
  char **v10; // rcx
  char *v11; // rdi
  char **v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-38h]

  if ( a3 )
  {
    VIDMM_SEGMENT::DecrementBytesResident(
      this,
      **((struct VIDMM_PARTITION ***)a2 + 64),
      *((_QWORD *)a2 + 2),
      (*((_DWORD *)a2 + 17) & 0x200) != 0);
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    {
      v13 = *((_DWORD *)this + 4) + 1;
      McTemplateK0pqx_EtwWriteTransfer(
        v13,
        &TotalBytesResidentInSegment,
        v5,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v13,
        *((_QWORD *)this + 28));
    }
    if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
    {
      v6 = *((_QWORD *)a2 + 65);
      if ( (!v6 || _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 40), 0xFFFFFFFF) == 1)
        && (unsigned __int64)_InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(**((_QWORD **)a2 + 64) + 64LL),
                               -*((_QWORD *)a2 + 2)) < *((_QWORD *)a2 + 2) )
      {
        WdLogSingleEntry1(1LL, 2184LL);
        DxgkLogInternalTriageEvent(v7, 0x40000LL);
      }
      *(_QWORD *)(*((_QWORD *)this + 1) + 40208LL) -= *((_QWORD *)a2 + 2);
    }
  }
  v8 = (char *)a2 + 408;
  v9 = *((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v9 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408)
    || (v10 = (char **)*((_QWORD *)a2 + 52), *v10 != v8)
    || (*v10 = (char *)v9,
        v11 = (char *)this + 192,
        *(_QWORD *)(v9 + 8) = v10,
        v12 = (char **)*((_QWORD *)v11 + 1),
        *v12 != v11) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v8 = v11;
  *((_QWORD *)a2 + 52) = v12;
  *v12 = v8;
  *((_QWORD *)v11 + 1) = v8;
}
