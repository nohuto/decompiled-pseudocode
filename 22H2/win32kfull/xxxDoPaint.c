/*
 * XREFs of xxxDoPaint @ 0x1C0053408
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C003EC8C (ExchangeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0053750 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     _IsChild @ 0x1C012B78C (_IsChild.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax
  int v9; // r15d
  int v10; // esi
  int v11; // r12d
  unsigned int v12; // ebp
  _DWORD *v13; // rax
  int v14; // r9d
  int v15; // r8d
  int v16; // edi
  __int64 v17; // rax
  int v18; // r15d
  int v19; // esi
  int v20; // r12d
  _DWORD *v21; // rax
  int v22; // r9d
  int v23; // r8d
  int v24; // edi
  struct tagWND *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  _QWORD *i; // rdi
  int v33; // ecx
  int v34; // edx
  unsigned int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rax
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  void *v42; // rax
  __int128 v43; // [rsp+20h] [rbp-38h] BYREF
  __int64 v44; // [rsp+30h] [rbp-28h]

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    v30 = *(_QWORD *)(gptiCurrent + 616LL);
    if ( !v30 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v30 + 56) + 8LL);
    v31 = *((_QWORD *)v4 + 5);
    if ( !*(_QWORD *)(v31 + 136) && (*(_BYTE *)(v31 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      v44 = 0LL;
      v43 = 0LL;
      PushW32ThreadLock(0LL, &v43, UserDereferenceObject);
      for ( i = *(_QWORD **)(v30 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock((__int64)i, (__int64)&v43);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock(&v43);
    }
  }
  else
  {
    v4 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL),
           gptiCurrent);
  }
  if ( !v4 )
    return 0LL;
  if ( !(!a1 || a1 == v4 ? 1 : IsChild(a1, v4)) )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0, (__int64)v4, 0x110u, 1);
    if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 136LL) )
    {
      v6 = *((_QWORD *)v4 + 2);
      if ( (*(_DWORD *)(v6 + 600))-- == 1 )
      {
        *(_WORD *)(*(_QWORD *)(v6 + 448) + 6LL) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(v6 + 448) + 4LL) &= ~0x20u;
      }
    }
  }
  v8 = *((_QWORD *)v4 + 5);
  v9 = *(_DWORD *)(v8 + 28);
  v10 = *(_DWORD *)(v8 + 24);
  v11 = *(_DWORD *)(v8 + 232);
  *(_BYTE *)(v8 + 20) &= ~4u;
  v12 = -268435456;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_15;
  v13 = (_DWORD *)*((_QWORD *)v4 + 5);
  v14 = v13[7];
  v15 = v13[6];
  v16 = v13[58];
  if ( v9 != v14 )
    goto LABEL_44;
  if ( v10 == v15 && v11 == v16 )
    goto LABEL_15;
  if ( v9 != v14 )
  {
LABEL_44:
    v34 = ((v9 ^ v14) & 0xB1CF0000) != 0;
    v35 = -v34 & 0xFFFFFFF0;
    v16 = v14 & -v34;
    goto LABEL_47;
  }
  if ( v10 != v15 )
  {
    v33 = (v10 ^ v15) & 0x4E27A9;
    v34 = v33 != 0;
    v35 = -v34 & 0xFFFFFFEC;
    v16 = v15 & -v34;
    goto LABEL_47;
  }
  if ( ((v11 ^ v16) & 0x2E00300) != 0 )
  {
    v34 = 1;
    v35 = -268435456;
LABEL_47:
    if ( v34 )
    {
      DirtyVisRgnTrackers(v4);
      v38 = (void *)ReferenceDwmApiPort(v37, v36);
      DwmAsyncChildStyleChange(v38, *(_QWORD *)v4, v35, v16);
    }
  }
LABEL_15:
  v17 = *((_QWORD *)v4 + 5);
  v18 = *(_DWORD *)(v17 + 28);
  v19 = *(_DWORD *)(v17 + 24);
  v20 = *(_DWORD *)(v17 + 232);
  *(_BYTE *)(v17 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_19;
  v21 = (_DWORD *)*((_QWORD *)v4 + 5);
  v22 = v21[7];
  v23 = v21[6];
  v24 = v21[58];
  if ( v18 != v22 )
    goto LABEL_52;
  if ( v19 == v23 && v20 == v24 )
    goto LABEL_19;
  if ( v18 == v22 )
  {
    if ( v19 == v23 )
    {
      if ( ((v20 ^ v24) & 0x2E00300) == 0 )
        goto LABEL_19;
      v39 = 1;
    }
    else
    {
      v39 = ((v19 ^ v23) & 0x4E27A9) != 0;
      v12 = -v39 & 0xFFFFFFEC;
      v24 = v23 & -v39;
    }
  }
  else
  {
LABEL_52:
    v39 = ((v18 ^ v22) & 0xB1CF0000) != 0;
    v12 = -v39 & 0xFFFFFFF0;
    v24 = v22 & -v39;
  }
  if ( v39 )
  {
    DirtyVisRgnTrackers(v4);
    v42 = (void *)ReferenceDwmApiPort(v41, v40);
    DwmAsyncChildStyleChange(v42, *(_QWORD *)v4, v12, v24);
  }
LABEL_19:
  v25 = v4;
  while ( (*(_WORD *)(*((_QWORD *)v25 + 5) + 42LL) & 0x2FFF) != 0x29D )
  {
    v25 = (struct tagWND *)*((_QWORD *)v25 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v25 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1, (__int64)v4, 0x401u, 1);
      break;
    }
    if ( !v25 )
      break;
  }
  v26 = *(_QWORD *)v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v26;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
  v27 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v27 + 21) & 2) == 0 && (*(_BYTE *)(v27 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 17) + 80LL) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v28 = 38;
  }
  else
  {
    v28 = 15;
  }
  *(_DWORD *)(a2 + 8) = v28;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
