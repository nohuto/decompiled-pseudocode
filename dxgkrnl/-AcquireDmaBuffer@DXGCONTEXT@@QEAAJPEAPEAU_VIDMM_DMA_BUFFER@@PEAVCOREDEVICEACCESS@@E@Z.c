/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0336740
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164230 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0336940 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03373A8 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C033B770 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C03480D0 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C01DCC7C (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  int v9; // edx
  __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ebp
  char *v17; // rdx

  if ( *((_BYTE *)this + 442) )
  {
    *a2 = 0LL;
    return 0LL;
  }
  v9 = 3;
  if ( *((_DWORD *)this + 18) > 3u )
    v9 = *((_DWORD *)this + 18);
  v11 = DXGCONTEXT::EnsurePriviledgedDmaPool(this, v9, *((_DWORD *)this + 26));
  if ( v11 >= 0 )
  {
    v12 = *((_QWORD *)this + 29);
    LOBYTE(v10) = 1;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                           + 488LL))(
            v12,
            v10,
            0LL,
            a2);
    v11 = v13;
    if ( v13 == -1071775486 )
    {
      if ( a3 )
      {
        COREDEVICEACCESS::Release(a3);
        LOBYTE(v14) = a4;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                               + 488LL))(
                v12,
                0LL,
                v14,
                a2);
        v15 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
        v16 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry2(4LL, this, v15);
          COREDEVICEACCESS::AcquireSharedUncheck(a3, v17);
          return v16;
        }
      }
    }
    else if ( v13 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v13);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
  }
  return (unsigned int)v11;
}
