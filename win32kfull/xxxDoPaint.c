/*
 * XREFs of xxxDoPaint @ 0x1C00C3298
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _IsChild @ 0x1C00164BC (_IsChild.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00A1ECC (ExchangeW32ThreadLock.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00C3680 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
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
  __int64 v11; // r8
  _DWORD *v12; // rax
  int v13; // r14d
  int v14; // ecx
  int v15; // edx
  int v16; // ebp
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rax
  int v20; // ebx
  int v21; // esi
  int v22; // r12d
  __int64 v23; // r8
  _DWORD *v24; // rax
  int v25; // r14d
  int v26; // ecx
  int v27; // edx
  int v28; // ebp
  int v29; // eax
  int v30; // r15d
  struct tagWND *v31; // rdx
  __int64 v32; // rax
  int v33; // ebx
  int v34; // r15d
  int v35; // r12d
  __int64 v36; // r8
  _DWORD *v37; // rax
  int v38; // esi
  int v39; // ecx
  int v40; // edx
  int v41; // ebp
  int v42; // eax
  int v43; // r14d
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  int v48; // ebx
  int v49; // esi
  int v50; // r12d
  __int64 v51; // r8
  _DWORD *v52; // rax
  int v53; // r14d
  int v54; // ecx
  int v55; // edx
  int v56; // ebp
  int v57; // eax
  int v58; // r15d
  __int64 v59; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  _QWORD *i; // rbx
  int v64; // esi
  __int64 v65; // rbx
  __int64 v66; // rcx
  void *v67; // rax
  int v68; // esi
  __int64 v69; // rbx
  __int64 v70; // rcx
  void *v71; // rax
  int v72; // esi
  __int64 v73; // rbx
  __int64 v74; // rcx
  void *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rcx
  void *v78; // rax
  __int128 v79; // [rsp+20h] [rbp-48h] BYREF
  __int64 v80; // [rsp+30h] [rbp-38h]
  int v81; // [rsp+80h] [rbp+18h]

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    v61 = *(_QWORD *)(gptiCurrent + 616LL);
    if ( !v61 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v61 + 56) + 8LL);
    v62 = *((_QWORD *)v4 + 5);
    if ( !*(_QWORD *)(v62 + 136) && (*(_BYTE *)(v62 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      v80 = 0LL;
      v79 = 0LL;
      PushW32ThreadLock(0LL, &v79, UserDereferenceObject);
      for ( i = *(_QWORD **)(v61 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock((__int64)i, (__int64)&v79);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock((__int64)&v79);
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
  v81 = -16;
  v6 = *(_BYTE *)(v5 + 17);
  if ( (v6 & 0x10) != 0 )
  {
    v48 = *(_DWORD *)(v5 + 28);
    v49 = *(_DWORD *)(v5 + 24);
    v50 = *(_DWORD *)(v5 + 232);
    *(_BYTE *)(v5 + 17) = v6 & 0xEF;
    if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    {
LABEL_30:
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 136LL) )
      {
        v59 = *((_QWORD *)v4 + 2);
        if ( (*(_DWORD *)(v59 + 600))-- == 1 )
        {
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v59 + 448) + 8LL), 0xFFFFFFDF);
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v59 + 448) + 4LL), 0xFFFFFFDF);
        }
      }
      goto LABEL_6;
    }
    v52 = (_DWORD *)*((_QWORD *)v4 + 5);
    v53 = v52[7];
    v54 = v52[6];
    v55 = v52[58];
    v56 = v49 ^ v54;
    v57 = v50 ^ v55;
    v58 = v48 ^ v53;
    if ( v48 == v53 )
    {
      if ( v56 )
        goto LABEL_49;
      if ( !v57 )
        goto LABEL_30;
    }
    if ( (v58 & 0xB1CF0000) != 0 )
    {
      v64 = -16;
      goto LABEL_53;
    }
LABEL_49:
    if ( (v56 & 0x4E27A9) != 0 )
    {
      v64 = -20;
      v53 = v54;
    }
    else
    {
      if ( (v57 & 0x12C0) == 0 )
        goto LABEL_54;
      v64 = -268435456;
      v53 = v55;
    }
LABEL_53:
    DirtyVisRgnTrackers((__int64)v4);
    v65 = *(_QWORD *)v4;
    v67 = (void *)ReferenceDwmApiPort(v66);
    DwmAsyncChildStyleChange(v67, v65, v64, v53);
LABEL_54:
    if ( (v56 & 0x200A0381) != 0 || (v58 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(v4, 1LL, v51);
    goto LABEL_30;
  }
LABEL_6:
  v7 = *((_QWORD *)v4 + 5);
  v8 = *(_DWORD *)(v7 + 28);
  v9 = *(_DWORD *)(v7 + 24);
  v10 = *(_DWORD *)(v7 + 232);
  *(_BYTE *)(v7 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_10;
  v12 = (_DWORD *)*((_QWORD *)v4 + 5);
  v13 = v12[7];
  v14 = v12[6];
  v15 = v12[58];
  v16 = v9 ^ v14;
  v17 = v10 ^ v15;
  v18 = v8 ^ v13;
  if ( v8 == v13 )
  {
    if ( v16 )
      goto LABEL_58;
    if ( !v17 )
      goto LABEL_10;
  }
  if ( (v18 & 0xB1CF0000) != 0 )
  {
    v68 = -16;
    goto LABEL_62;
  }
LABEL_58:
  if ( (v16 & 0x4E27A9) != 0 )
  {
    v68 = -20;
    v13 = v14;
  }
  else
  {
    if ( (v17 & 0x12C0) == 0 )
      goto LABEL_63;
    v68 = -268435456;
    v13 = v15;
  }
LABEL_62:
  DirtyVisRgnTrackers((__int64)v4);
  v69 = *(_QWORD *)v4;
  v71 = (void *)ReferenceDwmApiPort(v70);
  DwmAsyncChildStyleChange(v71, v69, v68, v13);
LABEL_63:
  if ( (v16 & 0x200A0381) != 0 || (v18 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(v4, 1LL, v11);
LABEL_10:
  v19 = *((_QWORD *)v4 + 5);
  v20 = *(_DWORD *)(v19 + 28);
  v21 = *(_DWORD *)(v19 + 24);
  v22 = *(_DWORD *)(v19 + 232);
  *(_BYTE *)(v19 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_14;
  v24 = (_DWORD *)*((_QWORD *)v4 + 5);
  v25 = v24[7];
  v26 = v24[6];
  v27 = v24[58];
  v28 = v21 ^ v26;
  v29 = v22 ^ v27;
  v30 = v20 ^ v25;
  if ( v20 == v25 )
  {
    if ( v28 )
      goto LABEL_67;
    if ( !v29 )
      goto LABEL_14;
  }
  if ( (v30 & 0xB1CF0000) != 0 )
  {
    v72 = -16;
    goto LABEL_71;
  }
LABEL_67:
  if ( (v28 & 0x4E27A9) != 0 )
  {
    v72 = -20;
    v25 = v26;
  }
  else
  {
    if ( (v29 & 0x12C0) == 0 )
      goto LABEL_72;
    v72 = -268435456;
    v25 = v27;
  }
LABEL_71:
  DirtyVisRgnTrackers((__int64)v4);
  v73 = *(_QWORD *)v4;
  v75 = (void *)ReferenceDwmApiPort(v74);
  DwmAsyncChildStyleChange(v75, v73, v72, v25);
LABEL_72:
  if ( (v28 & 0x200A0381) != 0 || (v30 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(v4, 1LL, v23);
LABEL_14:
  v31 = v4;
  while ( (*(_WORD *)(*((_QWORD *)v31 + 5) + 42LL) & 0x2FFF) != 0x29D )
  {
    v31 = (struct tagWND *)*((_QWORD *)v31 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v31 + 5) + 31LL) & 2) == 0 )
    {
      v32 = *((_QWORD *)v4 + 5);
      v33 = *(_DWORD *)(v32 + 28);
      v34 = *(_DWORD *)(v32 + 24);
      v35 = *(_DWORD *)(v32 + 232);
      *(_BYTE *)(v32 + 20) |= 1u;
      if ( !(unsigned int)IsWindowDesktopComposed(v4) )
        break;
      v37 = (_DWORD *)*((_QWORD *)v4 + 5);
      v38 = v37[7];
      v39 = v37[6];
      v40 = v37[58];
      v41 = v34 ^ v39;
      v42 = v35 ^ v40;
      v43 = v33 ^ v38;
      if ( v33 != v38 )
        goto LABEL_74;
      if ( v41 )
        goto LABEL_75;
      if ( !v42 )
        break;
LABEL_74:
      if ( (v43 & 0xB1CF0000) != 0 )
      {
LABEL_79:
        DirtyVisRgnTrackers((__int64)v4);
        v76 = *(_QWORD *)v4;
        v78 = (void *)ReferenceDwmApiPort(v77);
        DwmAsyncChildStyleChange(v78, v76, v81, v38);
      }
      else
      {
LABEL_75:
        if ( (v41 & 0x4E27A9) != 0 )
        {
          v81 = -20;
          v38 = v39;
          goto LABEL_79;
        }
        if ( (v42 & 0x12C0) != 0 )
        {
          v81 = -268435456;
          v38 = v40;
          goto LABEL_79;
        }
      }
      if ( (v41 & 0x200A0381) != 0 || (v43 & 0xC40000) != 0 )
        WindowMargins::CheckForChanges(v4, 1LL, v36);
      break;
    }
    if ( !v31 )
      break;
  }
  v44 = *(_QWORD *)v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v44;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
  v45 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v45 + 21) & 2) == 0 && (*(_BYTE *)(v45 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 17) + 80LL) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v46 = 38;
  }
  else
  {
    v46 = 15;
  }
  *(_DWORD *)(a2 + 8) = v46;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
