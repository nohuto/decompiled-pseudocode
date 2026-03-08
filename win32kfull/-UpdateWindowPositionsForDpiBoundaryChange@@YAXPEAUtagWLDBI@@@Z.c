/*
 * XREFs of ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00A397C
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C00991CC (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 * Callees:
 *     OffsetWindow @ 0x1C004C918 (OffsetWindow.c)
 *     OffsetChildren @ 0x1C004CB34 (OffsetChildren.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00647C8 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00A35E4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00A3628 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1, __int64 a2)
{
  struct tagWLDBI *v2; // rbx
  const struct tagWND *v3; // rax
  const struct tagWND *v4; // rdi
  const struct tagWND *v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v3 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v2 + 1), a2);
      v4 = v3;
      if ( v3 && (*((_DWORD *)v2 + 6) || IsChildWindowDpiBoundary(v3)) )
      {
        v5 = (const struct tagWND *)*((_QWORD *)v4 + 13);
        *(_OWORD *)v9 = *(_OWORD *)(*((_QWORD *)v5 + 5) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v5, v9, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, v9, 0LL);
        v6 = *((_QWORD *)v4 + 5);
        v7 = v9[1] + *((_DWORD *)v2 + 5) - *(_DWORD *)(v6 + 92);
        v8 = v9[0] + *((_DWORD *)v2 + 4) - *(_DWORD *)(v6 + 88);
        if ( v8 || v7 )
        {
          OffsetWindow(v4, v8, v7);
          OffsetChildren(v4, v8, v7, 0LL);
        }
      }
      v2 = *(struct tagWLDBI **)v2;
    }
    while ( v2 );
  }
}
