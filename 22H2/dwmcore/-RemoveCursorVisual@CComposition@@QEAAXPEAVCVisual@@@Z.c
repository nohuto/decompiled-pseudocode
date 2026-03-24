/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180155B78
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800E0628 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D5AE0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E4DDC (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E5388 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  CCursorVisualReference *v5; // rdi
  CExcludeVisualReference *v6; // rcx
  unsigned int v7; // r8d

  v2 = *((_DWORD *)this + 210);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 816);
    do
    {
      v5 = *(CCursorVisualReference **)(*v4 + 8LL * (unsigned int)(v2 - 1));
      if ( !CExcludeVisualReference::GetVisual(v5) || CExcludeVisualReference::GetVisual(v6) == a2 )
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt((__int64)v4, v7);
        if ( v5 )
          CCursorVisualReference::`scalar deleting destructor'(v5);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
