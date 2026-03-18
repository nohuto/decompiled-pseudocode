/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C01F2B00
 * Callers:
 *     xxxCancelTracking @ 0x1C005DB7C (xxxCancelTracking.c)
 * Callees:
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     IsInsideMenuLoop @ 0x1C00B4D20 (IsInsideMenuLoop.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     ChangeComposableCursor @ 0x1C01A8FC0 (ChangeComposableCursor.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 672);
    if ( v1 )
    {
      v3 = *(_DWORD *)(v1 + 200);
      if ( (v3 & 0x2000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v3 = *(_DWORD *)(v1 + 200) & 0xFDFFFFFF;
      }
      *(_DWORD *)(v1 + 200) = v3 | 8;
      if ( (*(_DWORD *)(a1 + 488) & 0x10) != 0 )
      {
        bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 200) & 0x20) == 0 )
          xxxDrawDragRectEx((struct MOVESIZEDATA *)v1, 0LL, 2LL, (struct tagRECT *)(v1 + 24));
      }
      *(_DWORD *)(a1 + 488) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 432) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v4 = *(_QWORD *)(a1 + 672);
        if ( v4 )
          PostMessage(*(struct tagWND **)(v4 + 16), 0x1Fu, 0LL, 0LL);
      }
      xxxCapture(a1, 0LL, 0);
    }
  }
}
