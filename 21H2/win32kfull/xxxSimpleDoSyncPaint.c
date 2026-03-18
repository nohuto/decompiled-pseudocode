/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C00720D0
 * Callers:
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C0071E00 (xxxInternalDoSyncPaint.c)
 *     xxxGetUpdateRect @ 0x1C01071D4 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x1C0149BA0 (xxxGetUpdateRgn.c)
 * Callees:
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C00F0318 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F4854 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F99D0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rdx
  int v3; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v5; // rsi
  __int64 v6; // rcx
  HRGN v7; // rax

  v1 = a1;
  while ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      return;
    a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
  }
  SetOrClrWF(0, v1, 0x240u, 1);
  v2 = *((_QWORD *)v1 + 5);
  v3 = (*(unsigned __int8 *)(v2 + 17) >> 2) & 2 | 1;
  if ( (*(_BYTE *)(v2 + 17) & 2) == 0 )
    v3 = (*(unsigned __int8 *)(v2 + 17) >> 2) & 2;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v2 + 31) & 0x10) != 0 )
    {
      if ( !*(_QWORD *)(v2 + 136) )
      {
        SetOrClrWF(0, v1, 0x102u, 1);
        SetOrClrWF(0, v1, 0x104u, 1);
        LOBYTE(v3) = v3 & 0xFE;
      }
      if ( *((_QWORD *)v1 + 2) == gptiCurrent )
      {
        NCUpdateRgn = GetNCUpdateRgn(v1, 1);
        v5 = NCUpdateRgn;
        if ( (v3 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)v1 + 5) + 17LL) & 8) != 0 )
          xxxSendNCPaint(v1, NCUpdateRgn);
        if ( (v3 & 1) != 0 )
        {
          v6 = *((_QWORD *)v1 + 5);
          if ( (*(_BYTE *)(v6 + 17) & 8) != 0 )
          {
            DeleteMaybeSpecialRgn(v5);
            v7 = GetNCUpdateRgn(v1, 0);
            v6 = *((_QWORD *)v1 + 5);
            v5 = v7;
          }
          if ( (*(_BYTE *)(v6 + 17) & 2) != 0 )
          {
            SetOrClrWF(0, v1, 0x102u, 1);
            SetOrClrWF(0, v1, 0x104u, 1);
            xxxSendEraseBkgnd(v1, 0LL, v5);
          }
          ClearHungFlag(v1, 0x308u);
        }
        DeleteMaybeSpecialRgn(v5);
      }
      else if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0xC0) != 0x40
             && v1 != *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL)
             && (unsigned int)IsHungWindow(v1)
             && (*(_BYTE *)(*((_QWORD *)v1 + 5) + 19LL) & 8) != 0 )
      {
        ClearHungFlag(v1, 0x308u);
        xxxRedrawHungWindow(v1, 0LL);
      }
    }
    else
    {
      SetOrClrWF(0, v1, 0x108u, 1);
      SetOrClrWF(0, v1, 0x102u, 1);
      SetOrClrWF(0, v1, 0x680u, 1);
      SetOrClrWF(0, v1, 0x104u, 1);
      ClearHungFlag(v1, 0x308u);
    }
  }
}
