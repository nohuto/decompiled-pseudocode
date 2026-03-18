/*
 * XREFs of ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00FD5BC
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     OffsetChildren @ 0x1C00848F0 (OffsetChildren.c)
 *     OffsetWindow @ 0x1C0084A28 (OffsetWindow.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00FD674 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1)
{
  struct tagWLDBI *v1; // rbx
  const struct tagWND *v2; // rax
  tagWND *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v1 + 1), 1);
      v3 = v2;
      if ( v2 && (*((_DWORD *)v1 + 6) || IsChildWindowDpiBoundary(v2)) )
      {
        v4 = *((_QWORD *)v3 + 13);
        v8 = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v4, &v8, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v3, &v8, 0LL);
        v5 = *((_QWORD *)v3 + 5);
        v6 = DWORD1(v8) + *((_DWORD *)v1 + 5) - *(_DWORD *)(v5 + 92);
        v7 = v8 + *((_DWORD *)v1 + 4) - *(_DWORD *)(v5 + 88);
        if ( v7 || v6 )
        {
          OffsetWindow(v3, v7, v6);
          OffsetChildren(v3, v7, v6, 0LL);
        }
      }
      v1 = *(struct tagWLDBI **)v1;
    }
    while ( v1 );
  }
}
