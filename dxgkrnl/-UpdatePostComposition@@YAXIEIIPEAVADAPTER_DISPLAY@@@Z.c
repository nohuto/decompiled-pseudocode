/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0320500
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01CA148 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002997C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  __int64 v7; // r15
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // r9
  char v12; // cl
  __int64 v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a1;
  v9 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct ADAPTER_DISPLAY *)((char *)a5 + 464), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v10 = *((_QWORD *)a5 + 16);
  v11 = 4000 * v7;
  v12 = *(_BYTE *)(v10 + 4000 * v7 + 704);
  if ( a2 )
  {
    if ( !v12 || *(_DWORD *)(v10 + v11 + 708) != a3 || *(_DWORD *)(v10 + v11 + 712) != a4 )
    {
      *(_DWORD *)(v10 + v11 + 708) = a3;
      *(_DWORD *)(v11 + *((_QWORD *)a5 + 16) + 712) = a4;
      *(_BYTE *)(v11 + *((_QWORD *)a5 + 16) + 704) = a2;
LABEL_8:
      v9 = 1;
    }
  }
  else if ( v12 )
  {
    *(_DWORD *)(v10 + v11 + 708) = 0;
    *(_DWORD *)(v11 + *((_QWORD *)a5 + 16) + 712) = 0;
    *(_BYTE *)(v11 + *((_QWORD *)a5 + 16) + 704) = 0;
    goto LABEL_8;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( v9 )
  {
    v13 = operator new[](0x18uLL, 0x4B677844u, 256LL);
    v14 = (_DWORD *)v13;
    if ( v13 )
    {
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)v13 = 0LL;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v13, *((struct DXGADAPTER **)a5 + 2));
      v14[4] = v7;
      Current = DXGPROCESS::GetCurrent(v15);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
        (void (*)(void *))lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        v14);
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
