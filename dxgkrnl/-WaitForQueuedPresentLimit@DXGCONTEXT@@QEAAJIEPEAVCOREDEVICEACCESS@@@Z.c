/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C033C7CC
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0190200 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C019ECA0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // ebp
  char *v12; // rdx

  if ( *((_BYTE *)this + 442) )
    return 0LL;
  LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 736LL)
                                                                              + 8LL)
                                                                  + 184LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
                  a2,
                  0LL);
  if ( (_DWORD)v9 == -1071775486 )
  {
    if ( !a3 )
    {
LABEL_8:
      WdLogSingleEntry2(4LL, (int)v9, this);
      if ( (_DWORD)v9 != -1071775486 && (_DWORD)v9 != -1073741130 && (_DWORD)v9 != -1071775232 )
      {
        WdLogSingleEntry1(1LL, 3638LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(STATUS_GRAPHICS_ALLOCATION_BUSY == ntStatus) || (STATUS_DEVICE_REMOVED == ntStatus) || (STATUS_GRAPH"
                    "ICS_GPU_EXCEPTION_ON_DEVICE == ntStatus)",
          3638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)v9;
    }
    COREDEVICEACCESS::Release(a4);
    LOBYTE(v10) = 1;
    v9 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 736LL)
                                                                    + 8LL)
                                                        + 184LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
           a2,
           v10);
    v11 = COREDEVICEACCESS::AcquireShared(a4, 0LL);
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(4LL, v9);
      COREDEVICEACCESS::AcquireSharedUncheck(a4, v12);
      return (unsigned int)v11;
    }
  }
  if ( (int)v9 < 0 )
    goto LABEL_8;
  return (unsigned int)v9;
}
