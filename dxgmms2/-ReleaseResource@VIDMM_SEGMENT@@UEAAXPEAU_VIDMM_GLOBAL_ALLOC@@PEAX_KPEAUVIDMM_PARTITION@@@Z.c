/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1C00B0480
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002E0E0 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002F1D8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C00866A0 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00B06A8 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_POOL_BLOCK *a3,
        unsigned __int64 a4,
        struct VIDMM_PARTITION *a5)
{
  VIDMM_SEGMENT *v8; // rbx
  int v9; // ebp
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-38h]

  v8 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v16[3] = a2;
    v16[4] = a3;
    v16[5] = a4;
  }
  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 28) != 1 )
    {
      VIDMM_SEGMENT::DecrementBytesCommitted(v8, **((struct VIDMM_PARTITION ***)a2 + 64), *((_QWORD *)a2 + 2));
      --*((_DWORD *)v8 + 80);
      if ( (*((_DWORD *)v8 + 20) & 0x1001) != 0 )
      {
        this = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 65);
        if ( !this || _InterlockedExchangeAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF) == 1 )
        {
          this = (VIDMM_SEGMENT *)**((_QWORD **)a2 + 64);
          if ( (unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 7, -*((_QWORD *)a2 + 2)) < *((_QWORD *)a2 + 2) )
          {
            WdLogSingleEntry1(1LL, 2092LL);
            HIDWORD(v25) = 0;
            DxgkLogInternalTriageEvent(v17, 0x40000LL);
          }
        }
      }
    }
  }
  if ( !a3 )
  {
    *((_DWORD *)a2 + 18) &= ~0x200u;
    return;
  }
  if ( (*((_DWORD *)v8 + 20) & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v8 + 19), a3);
  --*((_DWORD *)v8 + 81);
  if ( !a2 || (*((_DWORD *)a2 + 18) & 0x200) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
      v18[3] = a4;
      v18[4] = *((_QWORD *)v8 + 55);
      v18[5] = a2;
    }
    *((_QWORD *)v8 + 55) -= a4;
    if ( !a2 )
    {
      *((_BYTE *)v8 + 448) = 0;
      LOBYTE(v9) = 0;
      goto LABEL_11;
    }
    *((_DWORD *)a2 + 18) &= ~0x200u;
    *((_BYTE *)v8 + 448) = 0;
  }
  v9 = (*((_DWORD *)a2 + 17) >> 9) & 1;
LABEL_11:
  if ( *((_QWORD *)v8 + 28) < *((_QWORD *)v8 + 28) - a4 )
  {
    WdLogSingleEntry1(1LL, 380LL);
    HIDWORD(v25) = 0;
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
  }
  *((_QWORD *)v8 + 28) -= a4;
  if ( *((_DWORD *)v8 + 92) != -1 && !(_BYTE)v9 )
  {
    v20 = *((_QWORD *)v8 + 29);
    if ( v20 < v20 - a4 )
    {
      WdLogSingleEntry1(1LL, 391LL);
      HIDWORD(v25) = 0;
      DxgkLogInternalTriageEvent(v21, 0x40000LL);
    }
    v22 = *((_QWORD *)v8 + 29) - a4;
    *((_QWORD *)v8 + 29) = v22;
    if ( v20 > qword_1C0076548 && v22 <= qword_1C0076548 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v8 + 1) + 40104LL))(
        *(_QWORD *)(*((_QWORD *)v8 + 1) + 40152LL),
        *((unsigned int *)v8 + 92));
    if ( !*((_QWORD *)v8 + 29) )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)v8 + 1), v8);
  }
  v10 = *((unsigned int *)v8 + 95);
  v11 = *((_QWORD *)v8 + 1);
  v12 = *((int *)v8 + 119);
  v13 = *(_QWORD *)(v11 + 40224);
  if ( (*(_BYTE *)(1616 * v10 + 24 * v12 + v13 + 520) & 1) != 0 )
    v14 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v11 + 24) + 240LL) + *((_QWORD *)a5 + 5) + 24) + 344 * v10;
  else
    v14 = 1616 * v10 + 344 * v12 + v13 + 552;
  if ( *(_QWORD *)(v14 + 128) < *(_QWORD *)(v14 + 128) - a4 )
  {
    WdLogSingleEntry1(1LL, 418LL);
    HIDWORD(v25) = 0;
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
  }
  *(_QWORD *)(v14 + 128) -= a4;
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
  {
    LODWORD(v25) = *((_DWORD *)v8 + 4) + 1;
    McTemplateK0pqx_EtwWriteTransfer(
      (unsigned int)v25,
      &TotalBytesResidentInSegment,
      v11,
      *(_QWORD *)(*((_QWORD *)v8 + 1) + 24LL),
      v25,
      *((_QWORD *)v8 + 28));
  }
  if ( (*((_DWORD *)v8 + 20) & 0x1001) != 0 )
  {
    v15 = *((_QWORD *)a2 + 65);
    if ( (!v15 || _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 40), 0xFFFFFFFF) == 1)
      && _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 64) + 64LL), -(__int64)a4) < a4 )
    {
      WdLogSingleEntry1(1LL, 2154LL);
      DxgkLogInternalTriageEvent(v24, 0x40000LL);
    }
    *(_QWORD *)(*((_QWORD *)v8 + 1) + 40208LL) -= a4;
  }
}
