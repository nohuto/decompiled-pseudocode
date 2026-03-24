/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C006D7A0
 * Callers:
 *     xxxDispatchMessage @ 0x1C006ADB4 (xxxDispatchMessage.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D4C0 (xxxInternalDoSyncPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F5250 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRgn @ 0x1C010DC34 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C0117BC0 (xxxGetUpdateRect.c)
 * Callees:
 *     IsHungWindow @ 0x1C0041810 (IsHungWindow.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     ClearHungFlag @ 0x1C007BE28 (ClearHungFlag.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F4EA0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C0103FD4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C010F1C0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0240D14 (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  struct tagWND *v2; // rax
  __int64 v3; // rax
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  _DWORD *v7; // rax
  int v8; // r14d
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // ecx
  int v17; // edx
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rax
  HRGN v22; // rax

  v2 = a1;
  if ( !a1 )
  {
LABEL_4:
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 28);
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v3 + 232);
    *(_BYTE *)(v3 + 18) &= ~0x40u;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v7 = (_DWORD *)*((_QWORD *)a1 + 5);
      v8 = v7[7];
      v9 = v7[6];
      v10 = v7[58];
      if ( v4 != v8 )
      {
        v16 = (v4 ^ v8) & 0xB1CF0000;
        v17 = v16 != 0;
        v18 = -v17 & 0xFFFFFFF0;
LABEL_34:
        if ( !v16 )
          v8 = 0;
        if ( !v17 )
          goto LABEL_8;
        goto LABEL_40;
      }
      if ( v5 == v9 && v6 == v10 )
        goto LABEL_8;
      if ( v5 != v9 )
      {
        v8 = v7[6];
        v16 = (v5 ^ v9) & 0x4E27A9;
        v17 = v16 != 0;
        v18 = -v17 & 0xFFFFFFEC;
        goto LABEL_34;
      }
      if ( ((v6 ^ v10) & 0x2E00300) != 0 )
      {
        v18 = -268435456;
        v8 = v7[58];
LABEL_40:
        DirtyVisRgnTrackers(a1);
        v21 = (void *)ReferenceDwmApiPort(v20, v19);
        DwmAsyncChildStyleChange(v21, *(_QWORD *)a1, v18, v8);
      }
    }
LABEL_8:
    v11 = *((_QWORD *)a1 + 5);
    v12 = (*(unsigned __int8 *)(v11 + 17) >> 2) & 2 | 1;
    LOBYTE(v2) = *(_BYTE *)(v11 + 17) & 2;
    if ( !(_BYTE)v2 )
      v12 = (*(unsigned __int8 *)(v11 + 17) >> 2) & 2;
    if ( v12 )
    {
      if ( (*(_BYTE *)(v11 + 31) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(v11 + 136) )
        {
          SetOrClrWF(0, (__int64)a1, 0x102u, 1);
          SetOrClrWF(0, (__int64)a1, 0x104u, 1);
          LOBYTE(v12) = v12 & 0xFE;
        }
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn(a1, 1);
          v14 = NCUpdateRgn;
          if ( (v12 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
            xxxSendNCPaint(a1, NCUpdateRgn);
          if ( (v12 & 1) != 0 )
          {
            v15 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v15 + 17) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v14);
              v22 = GetNCUpdateRgn(a1, 0);
              v15 = *((_QWORD *)a1 + 5);
              v14 = v22;
            }
            if ( (*(_BYTE *)(v15 + 17) & 2) != 0 )
            {
              SetOrClrWF(0, (__int64)a1, 0x102u, 1);
              SetOrClrWF(0, (__int64)a1, 0x104u, 1);
              xxxSendEraseBkgnd(a1, 0LL, v14);
            }
            ClearHungFlag(a1);
          }
          LOBYTE(v2) = DeleteMaybeSpecialRgn(v14);
        }
        else
        {
          v2 = (struct tagWND *)*((_QWORD *)a1 + 5);
          if ( (*((_BYTE *)v2 + 31) & 0xC0) != 0x40 )
          {
            v2 = *(struct tagWND **)(grpdeskRitInput + 8LL);
            if ( a1 != *((struct tagWND **)v2 + 3) )
            {
              LODWORD(v2) = IsHungWindow((__int64)a1);
              if ( (_DWORD)v2 )
              {
                v2 = (struct tagWND *)*((_QWORD *)a1 + 5);
                if ( (*((_BYTE *)v2 + 19) & 8) != 0 )
                {
                  ClearHungFlag(a1);
                  LOBYTE(v2) = xxxRedrawHungWindow(a1);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0, (__int64)a1, 0x108u, 1);
        SetOrClrWF(0, (__int64)a1, 0x102u, 1);
        SetOrClrWF(0, (__int64)a1, 0x680u, 1);
        SetOrClrWF(0, (__int64)a1, 0x104u, 1);
        LOBYTE(v2) = ClearHungFlag(a1);
      }
    }
    return (char)v2;
  }
  while ( (*(_BYTE *)(*((_QWORD *)v2 + 5) + 27LL) & 2) == 0 )
  {
    v2 = (struct tagWND *)*((_QWORD *)v2 + 13);
    if ( !v2 )
      goto LABEL_4;
  }
  return (char)v2;
}
