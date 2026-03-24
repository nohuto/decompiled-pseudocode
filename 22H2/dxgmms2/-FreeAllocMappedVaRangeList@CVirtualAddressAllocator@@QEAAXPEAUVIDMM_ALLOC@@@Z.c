/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00689C0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A8D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002020 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C00260D4 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005F094 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0065A9C (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0067F6C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(struct _KTHREAD **this, struct VIDMM_ALLOC *a2)
{
  char v2; // bp
  volatile signed __int32 **v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax
  volatile signed __int32 **v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  __int64 VidMmAllocFromOwner; // rax
  __int64 v12; // r8
  __int64 v13; // [rsp+50h] [rbp-38h]
  _QWORD *v14; // [rsp+70h] [rbp-18h] BYREF
  volatile signed __int32 *v15; // [rsp+78h] [rbp-10h]

  v2 = 0;
  v15 = (volatile signed __int32 *)&v14;
  v14 = &v14;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v2 = 1;
  }
  v5 = (volatile signed __int32 **)((char *)a2 + 128);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (volatile signed __int32 *)v5 )
      break;
    if ( *((volatile signed __int32 ***)v6 + 1) != v5 )
      goto LABEL_19;
    v7 = *(_QWORD *)v6;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_19;
    *v5 = (volatile signed __int32 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    _InterlockedIncrement(v6 + 26);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)v6 + 10) << 28) >> 28, *((_QWORD *)v6 + 4));
      LODWORD(v13) = v12;
      McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
        *((_QWORD *)v6 + 6),
        &EndGpuVirtualAddressRangeMapping,
        v12,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)v6 + 6),
        *((_QWORD *)v6 + 9),
        *((_QWORD *)v6 + 10),
        *((_QWORD *)v6 + 8),
        *((_QWORD *)v6 + 7),
        v13,
        *((_QWORD *)v6 + 11),
        *((_QWORD *)v6 + 12));
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, (struct _LIST_ENTRY *)v6 - 1, 1, 1);
    v8 = (volatile signed __int32 **)v15;
    if ( *(_QWORD ***)v15 != &v14 )
LABEL_19:
      __fastfail(3u);
    *((_QWORD *)v6 + 1) = v15;
    *(_QWORD *)v6 = &v14;
    *v8 = v6;
    v15 = v6;
  }
  if ( v2 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  v9 = v14;
  while ( v9 != &v14 )
  {
    v10 = v9 - 3;
    if ( (v9[5] & 0xC00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        this[11],
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v9 - 3),
        KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[11] + 8LL),
        0LL);
      *((_DWORD *)v10 + 16) &= 0xFFFFF3FF;
    }
    v9 = (_QWORD *)*v9;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
      (volatile signed __int32 *)v10,
      (struct CVirtualAddressAllocator *)this);
  }
}
