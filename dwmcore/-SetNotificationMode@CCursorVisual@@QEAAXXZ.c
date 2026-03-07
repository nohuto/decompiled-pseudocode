void __fastcall CCursorVisual::SetNotificationMode(CCursorVisual *this)
{
  bool v2; // di
  struct _LIST_ENTRY *TreeDataListHead; // rax
  CDesktopTree *DesktopTree; // rax
  __int64 v5; // rbx

  if ( *((_QWORD *)this + 90) )
  {
    if ( *((_QWORD *)this + 91) == *(_QWORD *)(*((_QWORD *)this + 2) + 496LL)
      || (v2 = 0, (TreeDataListHead = CVisual::GetTreeDataListHead(this)) != 0LL)
      && TreeDataListHead->Flink != TreeDataListHead )
    {
      v2 = 1;
    }
    else
    {
      DesktopTree = CVisual::GetDesktopTree(this);
      if ( DesktopTree )
        v2 = CDesktopTree::NeedsCursorPositionUpdates(DesktopTree, this) != 0;
    }
    v5 = *((_QWORD *)this + 90);
    EnterCriticalSection(&g_CursorManager);
    *(_BYTE *)(v5 + 73) = v2;
    LeaveCriticalSection(&g_CursorManager);
  }
}
