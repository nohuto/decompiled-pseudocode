/*
 * XREFs of ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800C1370
 * Callers:
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x1800158A4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180035320 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180035C0C (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180058F14 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006E530 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009C0F0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18009F990 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009FAF8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800A1940 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800A1A70 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801AD2F0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18023686C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800C13A8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

unsigned __int64 __fastcall CPtrArrayBase::operator[](CPtrArrayBase *a1)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rdx
  __int64 *v3; // rcx
  bool v4; // zf
  __int64 v5; // rax

  Count = CPtrArrayBase::GetCount(a1);
  if ( v2 >= Count )
    return 0LL;
  v4 = Count == 1;
  v5 = *v3;
  if ( v4 )
    return v5 & 0xFFFFFFFFFFFFFFFCuLL;
  else
    return *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v2 + 16);
}
