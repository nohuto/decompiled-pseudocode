/*
 * XREFs of ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002997C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0320500 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C03CC4E4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGWORKQUEUE::QueueWork(PLIST_ENTRY ListHead, void (*a2)(void *), void *a3)
{
  __int64 v6; // rax

  v6 = operator new[](0x20uLL, 0x4B677844u, 64LL);
  if ( !v6 )
    return 3221225495LL;
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 16) = a2;
  *(_QWORD *)(v6 + 24) = a3;
  ExInterlockedInsertTailList(ListHead, (PLIST_ENTRY)v6, (PKSPIN_LOCK)&ListHead[1]);
  return 0LL;
}
