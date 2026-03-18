/*
 * XREFs of xxxDoPaint @ 0x1C008BD2C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _IsChild @ 0x1C0016C4C (_IsChild.c)
 *     ExchangeW32ThreadLock @ 0x1C0062148 (ExchangeW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C008C110 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall xxxDoPaint(__int64 a1, __int64 a2)
{
  struct tagWND *v4; // rdi
  __int64 v5; // rax
  char v6; // cl
  __int64 v7; // rax
  int v8; // ebx
  int v9; // esi
  int v10; // r12d
  _DWORD *v11; // rax
  int v12; // r15d
  int v13; // ebp
  int v14; // eax
  int v15; // r15d
  __int64 v16; // rax
  int v17; // ebx
  int v18; // esi
  int v19; // r12d
  _DWORD *v20; // rax
  int v21; // r15d
  int v22; // ebp
  int v23; // eax
  int v24; // r15d
  struct tagWND *v25; // rdx
  __int64 v26; // rax
  int v27; // ebx
  int v28; // r15d
  int v29; // r12d
  _DWORD *v30; // rax
  int v31; // r14d
  int v32; // ebp
  int v33; // eax
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  int v39; // ebx
  int v40; // esi
  int v41; // r12d
  _DWORD *v42; // rax
  int v43; // r15d
  int v44; // ebp
  int v45; // eax
  int v46; // r15d
  __int64 v47; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  _QWORD *i; // rbx
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  void *v59; // rax
  __int128 v60; // [rsp+20h] [rbp-48h] BYREF
  __int64 v61; // [rsp+30h] [rbp-38h]

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    v49 = *(_QWORD *)(gptiCurrent + 616LL);
    if ( !v49 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v49 + 56) + 8LL);
    v50 = *((_QWORD *)v4 + 5);
    if ( !*(_QWORD *)(v50 + 136) && (*(_BYTE *)(v50 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      v61 = 0LL;
      v60 = 0LL;
      PushW32ThreadLock(0LL, &v60, UserDereferenceObject);
      for ( i = *(_QWORD **)(v49 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock((__int64)i, (__int64)&v60);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock((__int64)&v60);
    }
  }
  else
  {
    v4 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL),
           gptiCurrent);
  }
  if ( !v4 || a1 && (struct tagWND *)a1 != v4 && !(unsigned int)IsChild(a1, (__int64)v4) )
    return 0LL;
  v5 = *((_QWORD *)v4 + 5);
  v6 = *(_BYTE *)(v5 + 17);
  if ( (v6 & 0x10) != 0 )
  {
    v39 = *(_DWORD *)(v5 + 28);
    v40 = *(_DWORD *)(v5 + 24);
    v41 = *(_DWORD *)(v5 + 232);
    *(_BYTE *)(v5 + 17) = v6 & 0xEF;
    if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    {
LABEL_30:
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 136LL) )
      {
        v47 = *((_QWORD *)v4 + 2);
        if ( (*(_DWORD *)(v47 + 600))-- == 1 )
        {
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v47 + 448) + 8LL), 0xFFFFFFDF);
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v47 + 448) + 4LL), 0xFFFFFFDF);
        }
      }
      goto LABEL_6;
    }
    v42 = (_DWORD *)*((_QWORD *)v4 + 5);
    v43 = v42[7];
    v44 = v40 ^ v42[6];
    v45 = v41 ^ v42[58];
    v46 = v39 ^ v43;
    if ( !v46 )
    {
      if ( v44 )
      {
LABEL_48:
        if ( (v44 & 0x4E27A9) == 0 && (v45 & 0x12C0) == 0 )
        {
LABEL_51:
          if ( (v44 & 0x200A0381) != 0 || (v46 & 0xC40000) != 0 )
            WindowMargins::CheckForChanges(v4, 1LL);
          goto LABEL_30;
        }
LABEL_50:
        DirtyVisRgnTrackers(v4);
        v53 = (void *)ReferenceDwmApiPort(v52);
        DwmAsyncChildStyleChange(v53);
        goto LABEL_51;
      }
      if ( !v45 )
        goto LABEL_30;
    }
    if ( (v46 & 0xB1CF0000) != 0 )
      goto LABEL_50;
    goto LABEL_48;
  }
LABEL_6:
  v7 = *((_QWORD *)v4 + 5);
  v8 = *(_DWORD *)(v7 + 28);
  v9 = *(_DWORD *)(v7 + 24);
  v10 = *(_DWORD *)(v7 + 232);
  *(_BYTE *)(v7 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_10;
  v11 = (_DWORD *)*((_QWORD *)v4 + 5);
  v12 = v11[7];
  v13 = v9 ^ v11[6];
  v14 = v10 ^ v11[58];
  v15 = v8 ^ v12;
  if ( !v15 )
  {
    if ( v13 )
      goto LABEL_54;
    if ( !v14 )
      goto LABEL_10;
  }
  if ( (v15 & 0xB1CF0000) != 0 )
  {
LABEL_56:
    DirtyVisRgnTrackers(v4);
    v55 = (void *)ReferenceDwmApiPort(v54);
    DwmAsyncChildStyleChange(v55);
    goto LABEL_57;
  }
LABEL_54:
  if ( (v13 & 0x4E27A9) != 0 || (v14 & 0x12C0) != 0 )
    goto LABEL_56;
LABEL_57:
  if ( (v13 & 0x200A0381) != 0 || (v15 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(v4, 1LL);
LABEL_10:
  v16 = *((_QWORD *)v4 + 5);
  v17 = *(_DWORD *)(v16 + 28);
  v18 = *(_DWORD *)(v16 + 24);
  v19 = *(_DWORD *)(v16 + 232);
  *(_BYTE *)(v16 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_14;
  v20 = (_DWORD *)*((_QWORD *)v4 + 5);
  v21 = v20[7];
  v22 = v18 ^ v20[6];
  v23 = v19 ^ v20[58];
  v24 = v17 ^ v21;
  if ( !v24 )
  {
    if ( v22 )
      goto LABEL_60;
    if ( !v23 )
      goto LABEL_14;
  }
  if ( (v24 & 0xB1CF0000) != 0 )
  {
LABEL_62:
    DirtyVisRgnTrackers(v4);
    v57 = (void *)ReferenceDwmApiPort(v56);
    DwmAsyncChildStyleChange(v57);
    goto LABEL_63;
  }
LABEL_60:
  if ( (v22 & 0x4E27A9) != 0 || (v23 & 0x12C0) != 0 )
    goto LABEL_62;
LABEL_63:
  if ( (v22 & 0x200A0381) != 0 || (v24 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(v4, 1LL);
LABEL_14:
  v25 = v4;
  while ( (*(_WORD *)(*((_QWORD *)v25 + 5) + 42LL) & 0x2FFF) != 0x29D )
  {
    v25 = (struct tagWND *)*((_QWORD *)v25 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v25 + 5) + 31LL) & 2) == 0 )
    {
      v26 = *((_QWORD *)v4 + 5);
      v27 = *(_DWORD *)(v26 + 28);
      v28 = *(_DWORD *)(v26 + 24);
      v29 = *(_DWORD *)(v26 + 232);
      *(_BYTE *)(v26 + 20) |= 1u;
      if ( !(unsigned int)IsWindowDesktopComposed(v4) )
        break;
      v30 = (_DWORD *)*((_QWORD *)v4 + 5);
      v31 = v30[7];
      v32 = v28 ^ v30[6];
      v33 = v29 ^ v30[58];
      v34 = v27 ^ v31;
      if ( v34 )
        goto LABEL_65;
      if ( !v32 )
      {
        if ( !v33 )
          break;
LABEL_65:
        if ( (v34 & 0xB1CF0000) != 0 )
          goto LABEL_68;
      }
      if ( (v32 & 0x4E27A9) != 0 || (v33 & 0x12C0) != 0 )
      {
LABEL_68:
        DirtyVisRgnTrackers(v4);
        v59 = (void *)ReferenceDwmApiPort(v58);
        DwmAsyncChildStyleChange(v59);
      }
      if ( (v32 & 0x200A0381) != 0 || (v34 & 0xC40000) != 0 )
        WindowMargins::CheckForChanges(v4, 1LL);
      break;
    }
    if ( !v25 )
      break;
  }
  v35 = *(_QWORD *)v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v35;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
  v36 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v36 + 21) & 2) == 0 && (*(_BYTE *)(v36 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 17) + 80LL) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v37 = 38;
  }
  else
  {
    v37 = 15;
  }
  *(_DWORD *)(a2 + 8) = v37;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
