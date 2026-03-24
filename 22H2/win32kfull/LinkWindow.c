/*
 * XREFs of LinkWindow @ 0x1C006FC60
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ImeSetTopmost @ 0x1C00358C8 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C0036648 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C0038C48 (GetLastTopMostWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     GetBandOrdinal @ 0x1C00701AC (GetBandOrdinal.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     TrackLayeredZorder @ 0x1C00BD408 (TrackLayeredZorder.c)
 *     DwmAsyncChildLink @ 0x1C00E9C00 (DwmAsyncChildLink.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0108CAC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C010CFA4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     HWInsertAfter @ 0x1C010FB28 (HWInsertAfter.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0222A1C (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, struct tagWND *a2, _QWORD *a3)
{
  struct tagWND **v3; // rbx
  struct tagWND *LastTopMostWindow; // rsi
  unsigned int BandOrdinal; // edi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  struct tagWND *v12; // r8
  _QWORD *v13; // r8
  struct tagWND *v14; // rdx
  __int128 *v15; // rcx
  int v16; // ecx
  struct tagWND *i; // rax
  __int64 v18; // rcx
  struct tagWND *v19; // rax
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rbx
  __int64 j; // rsi
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r8
  struct tagWND *v33; // r8
  __int64 v34; // rdx
  __int128 *v35; // rax
  __int64 DesktopWindow; // rax
  __int64 v37; // rdx
  struct tagWND *v38; // r8
  unsigned int v39; // edx
  int v40; // ecx
  _DWORD *v41; // rax
  int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // rcx
  void *v45; // rax
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v47; // [rsp+34h] [rbp-CCh]
  __int64 v48; // [rsp+36h] [rbp-CAh]
  __int64 v49; // [rsp+3Eh] [rbp-C2h]
  __int64 v50; // [rsp+46h] [rbp-BAh]
  __int64 v51; // [rsp+4Eh] [rbp-B2h]
  __int16 v52; // [rsp+56h] [rbp-AAh]
  int v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+5Ch] [rbp-A4h]
  __int64 v55; // [rsp+64h] [rbp-9Ch]
  __int64 v56; // [rsp+6Ch] [rbp-94h]
  int v57; // [rsp+74h] [rbp-8Ch]
  _QWORD v58[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v59[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v60[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v62; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v64; // [rsp+E0h] [rbp-20h] BYREF
  char v65[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v66[16]; // [rsp+100h] [rbp+0h] BYREF
  char v67[16]; // [rsp+110h] [rbp+10h] BYREF
  char v68[16]; // [rsp+120h] [rbp+20h] BYREF

  v3 = (struct tagWND **)(a3 + 14);
  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v37 )
    {
      if ( a3 == (_QWORD *)GetDesktopWindow(a1) )
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow((__int64)a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, LastTopMostWindow, a3);
  v8 = a3[3];
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      v9 = *(_QWORD **)(v10 + 24);
  }
  if ( a3 == v9 )
    BandOrdinal = GetBandOrdinal(*(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL));
  else
    v11 = 0;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (struct tagWND *)1 )
    {
      LastTopMostWindow = *v3;
      if ( !*v3 || (*(_BYTE *)(*((_QWORD *)LastTopMostWindow + 5) + 20LL) & 0x20) != 0 )
        goto LABEL_11;
      while ( 1 )
      {
        v38 = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        if ( !v38 || v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)v38 + 5) + 236LL)) < BandOrdinal )
          break;
        if ( (*(_BYTE *)(*((_QWORD *)v38 + 5) + 20LL) & 0x20) != 0 )
          break;
        LastTopMostWindow = v38;
      }
      if ( v11
        && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) < BandOrdinal )
      {
        goto LABEL_11;
      }
    }
    else if ( v11 )
    {
      if ( BandOrdinal > (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) )
      {
        while ( 1 )
        {
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 12);
          if ( !LastTopMostWindow )
            goto LABEL_11;
          if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) )
            goto LABEL_47;
        }
      }
      while ( 1 )
      {
        v32 = *((_QWORD *)LastTopMostWindow + 11);
        if ( !v32 || (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v32 + 40) + 236LL)) <= BandOrdinal )
          break;
        LastTopMostWindow = v33;
      }
    }
LABEL_47:
    v34 = *((_QWORD *)LastTopMostWindow + 11);
    if ( v34 )
    {
      v61 = *(_OWORD *)LockPointer(v65, v34 + 96, a1);
      HMAssignmentLock(&v61);
      v62 = *(_OWORD *)LockPointer(v66, (char *)a1 + 88, *((_QWORD *)LastTopMostWindow + 11));
      HMAssignmentLock(&v62);
    }
    v63 = *(_OWORD *)LockPointer(v67, (char *)a1 + 96, LastTopMostWindow);
    HMAssignmentLock(&v63);
    v35 = (__int128 *)LockPointer(v68, (char *)LastTopMostWindow + 88, a1);
    v15 = &v64;
    v64 = *v35;
    goto LABEL_21;
  }
LABEL_11:
  v12 = *v3;
  if ( *v3 )
  {
    if ( v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)v12 + 5) + 236LL)) > BandOrdinal )
    {
      do
      {
        LastTopMostWindow = v12;
        v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
        if ( !v12 )
          break;
        v39 = 0;
        v40 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 236LL);
        v41 = &gazbidOrder;
        while ( *v41 != v40 )
        {
          if ( v41[1] == v40 )
          {
            ++v39;
            break;
          }
          if ( v41[2] == v40 )
          {
            v39 += 2;
            break;
          }
          if ( v41[3] == v40 )
          {
            v39 += 3;
            break;
          }
          if ( v41[4] == v40 )
          {
            v39 += 4;
            break;
          }
          if ( v41[5] == v40 )
          {
            v39 += 5;
            break;
          }
          v41 += 6;
          v39 += 6;
          if ( v39 >= 0x12 )
            break;
        }
      }
      while ( v39 > BandOrdinal );
      goto LABEL_47;
    }
    v13 = (_QWORD *)((char *)v12 + 96);
    if ( a1 )
      *(_QWORD *)(*(v13 - 7) + 80LL) = *((_QWORD *)a1 + 6);
    else
      *(_QWORD *)(*(v13 - 7) + 80LL) = 0LL;
    v58[0] = v13;
    v58[1] = a1;
    HMAssignmentLock(v58);
    v14 = *v3;
    if ( *v3 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v14 + 6);
    else
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    v59[0] = (char *)a1 + 88;
    v59[1] = v14;
    HMAssignmentLock(v59);
  }
  if ( a1 )
    *((_QWORD *)*(v3 - 9) + 7) = *((_QWORD *)a1 + 6);
  else
    *((_QWORD *)*(v3 - 9) + 7) = 0LL;
  v60[0] = v3;
  v15 = (__int128 *)v60;
  v60[1] = a1;
LABEL_21:
  HMAssignmentLock(v15);
  v16 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 8u;
  for ( i = *v3; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( i == a1 )
      v16 = 1;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^ (16 * v16)) & 0x10;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1) )
  {
    v18 = *((_QWORD *)a1 + 3);
    v19 = 0LL;
    if ( v18 )
      v19 = *(struct tagWND **)(v18 + 104);
    if ( a1 != v19 && a3 != (_QWORD *)gTermIO[1] )
    {
      DirtyVisRgnTrackers(a1);
      v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
      v21 = HWInsertAfter(LastTopMostWindow);
      v22 = *a3;
      v23 = v21;
      v24 = *(_QWORD *)a1;
      v27 = ReferenceDwmApiPort(v26, v25);
      v28 = (void *)v27;
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v27 )
      {
        v46 = 4718624;
        v48 = 0LL;
        v49 = 0LL;
        v50 = 0LL;
        v51 = 0LL;
        v52 = 0;
        v47 = 0x8000;
        v53 = 1073741842;
        v54 = v24;
        v55 = v22;
        v56 = v23;
        v57 = v20;
        LpcRequestPort(v27, &v46);
        ObfDereferenceObject(v28);
      }
      for ( j = *((_QWORD *)a1 + 11); j; j = *(_QWORD *)(j + 88) )
      {
        v30 = *(_QWORD *)(j + 40);
        v31 = *(_DWORD *)(v30 + 232);
        if ( (v31 & 0x10) == 0 )
        {
          *(_DWORD *)(v30 + 232) = v31 | 0x10;
          DirtyVisRgnTrackers((struct tagWND *)j);
          v42 = *(_DWORD *)(*(_QWORD *)(j + 40) + 236LL);
          HWInsertAfter(*(_QWORD *)(j + 96));
          v45 = (void *)ReferenceDwmApiPort(v44, v43);
          DwmAsyncChildLink(v45, v42);
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
