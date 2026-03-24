/*
 * XREFs of UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F1404
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F12BC (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     OffsetChildren @ 0x1C004C97C (OffsetChildren.c)
 *     OffsetWindow @ 0x1C004CA70 (OffsetWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C007061C (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F14BC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F1500 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(__int64 *a1)
{
  __int64 *v1; // rbx
  struct tagWND *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (struct tagWND *)HMValidateHandleNoSecure(v1[1], 1);
      v3 = (__int64)v2;
      if ( v2 && (*((_DWORD *)v1 + 6) || (unsigned int)IsChildWindowDpiBoundary(v2)) )
      {
        v4 = *(_QWORD *)(v3 + 104);
        v9 = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v4, &v9, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v3, &v9, 0LL);
        v5 = *(_QWORD *)(v3 + 40);
        v6 = DWORD1(v9) + *((_DWORD *)v1 + 5) - *(_DWORD *)(v5 + 92);
        v7 = v9 + *((_DWORD *)v1 + 4) - *(_DWORD *)(v5 + 88);
        if ( v7 || v6 )
        {
          OffsetWindow(v3, v7, v6);
          OffsetChildren((struct tagWND *)v3, v7, v6, 0LL, v8);
        }
      }
      v1 = (__int64 *)*v1;
    }
    while ( v1 );
  }
}
