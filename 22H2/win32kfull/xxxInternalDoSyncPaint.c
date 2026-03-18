/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C00CE0C0
 * Callers:
 *     xxxDoSyncPaint @ 0x1C00CDF44 (xxxDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00CE0C0 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     xxxInternalDoSyncPaint @ 0x1C00CE0C0 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00CE6B0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00CE7E4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00CE8F8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxInternalDoSyncPaint(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 *v4; // rsi
  __int64 *v5; // r9
  __int64 v6; // rax
  int v7; // ebx
  int v8; // r15d
  int v9; // r13d
  _DWORD *v10; // rax
  int v11; // r12d
  int v12; // ecx
  int v13; // edx
  int v14; // ebp
  int v15; // eax
  int v16; // r14d
  int v17; // r15d
  _QWORD *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  void *v21; // rax
  int v22; // ebx
  HRGN NCUpdateRgn; // rax
  HRGN v24; // rbp
  struct tagBWL *v25; // rbx
  __int64 *v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rax
  PERESOURCE *v35; // rax
  __int64 *ThreadWin32Thread; // rax
  char *v37; // r14
  __int64 i; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 *v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct tagBWL *v49; // rdx
  struct tagBWL *v50; // rcx
  struct tagBWL *v51; // rcx
  __int128 v52; // [rsp+20h] [rbp-48h] BYREF
  __int64 v53; // [rsp+30h] [rbp-38h]
  unsigned int v54; // [rsp+78h] [rbp+10h]

  v54 = a2;
  v3 = a2;
  v4 = a1;
  v5 = a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(v5[5] + 27) & 2) == 0 )
    {
      v5 = (__int64 *)v5[13];
      if ( !v5 )
        goto LABEL_4;
    }
    v18 = a1 + 5;
    goto LABEL_38;
  }
LABEL_4:
  v6 = a1[5];
  v7 = *(_DWORD *)(v6 + 28);
  v8 = *(_DWORD *)(v6 + 24);
  v9 = *(_DWORD *)(v6 + 232);
  *(_BYTE *)(v6 + 18) &= ~0x40u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = (_DWORD *)v4[5];
    v11 = v10[7];
    v12 = v10[6];
    v13 = v10[58];
    v14 = v8 ^ v12;
    v15 = v9 ^ v13;
    v16 = v7 ^ v11;
    if ( v7 == v11 )
    {
      if ( v14 )
        goto LABEL_11;
      if ( !v15 )
      {
LABEL_19:
        v3 = v54;
        goto LABEL_20;
      }
    }
    if ( (v16 & 0xB1CF0000) != 0 )
    {
      v17 = -16;
      goto LABEL_15;
    }
LABEL_11:
    if ( (v14 & 0x4E27A9) != 0 )
    {
      v17 = -20;
      v11 = v12;
    }
    else
    {
      if ( (v15 & 0x12C0) == 0 )
      {
LABEL_16:
        if ( (v16 & 0xC40000) != 0 || (v14 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v4, 1LL);
        goto LABEL_19;
      }
      v17 = -268435456;
      v11 = v13;
    }
LABEL_15:
    DirtyVisRgnTrackers(v4);
    v19 = *v4;
    v21 = (void *)ReferenceDwmApiPort(v20);
    DwmAsyncChildStyleChange(v21, v19, v17, v11);
    goto LABEL_16;
  }
LABEL_20:
  a2 = v4[5];
  a1 = (__int64 *)((*(unsigned __int8 *)(a2 + 17) >> 2) & 2);
  v22 = (*(unsigned __int8 *)(a2 + 17) >> 2) & 2 | 1;
  v18 = v4 + 5;
  if ( (*(_BYTE *)(a2 + 17) & 2) == 0 )
    v22 = (*(unsigned __int8 *)(a2 + 17) >> 2) & 2;
  if ( v22 )
  {
    if ( (*(_BYTE *)(a2 + 31) & 0x10) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) )
      {
        SetOrClrWF(0LL, v4, 258LL, 1LL);
        SetOrClrWF(0LL, v4, 260LL, 1LL);
        LOBYTE(v22) = v22 & 0xFE;
      }
      v18 = v4 + 5;
      if ( v4[2] != gptiCurrent )
        goto LABEL_38;
      NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v4, 1);
      v24 = NCUpdateRgn;
      if ( (v22 & 2) != 0 && (*(_BYTE *)(v4[5] + 17) & 8) != 0 )
        xxxSendNCPaint((struct tagWND *)v4, NCUpdateRgn);
      if ( (v22 & 1) != 0 )
      {
        if ( (*(_BYTE *)(v4[5] + 17) & 8) != 0 )
        {
          DeleteMaybeSpecialRgn(v24);
          v24 = GetNCUpdateRgn((struct tagWND *)v4, 0);
        }
        if ( (*(_BYTE *)(v4[5] + 17) & 2) != 0 )
        {
          SetOrClrWF(0LL, v4, 258LL, 1LL);
          SetOrClrWF(0LL, v4, 260LL, 1LL);
          xxxSendEraseBkgnd(v4, 0LL, v24);
        }
      }
      DeleteMaybeSpecialRgn(v24);
    }
    else
    {
      SetOrClrWF(0LL, v4, 264LL, 1LL);
      SetOrClrWF(0LL, v4, 258LL, 1LL);
      SetOrClrWF(0LL, v4, 1664LL, 1LL);
      SetOrClrWF(0LL, v4, 260LL, 1LL);
    }
    v18 = v4 + 5;
  }
LABEL_38:
  if ( (v3 & 0x20) != 0 || (v3 & 4) != 0 && (*(_BYTE *)(*v18 + 31LL) & 2) != 0 )
  {
    v25 = pbwlCache;
    v26 = (__int64 *)v4[14];
    v27 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v28 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v25 = (struct tagBWL *)v28;
      if ( !v28 )
        return;
      *(_QWORD *)(v28 + 16) = v28 + 280;
    }
    *((_QWORD *)v25 + 3) = 0LL;
    for ( *((_QWORD *)v25 + 1) = (char *)v25 + 32; v26; v26 = (__int64 *)v26[11] )
    {
      v29 = *((_QWORD *)v25 + 3);
      if ( !v29 || v29 == v26[2] )
      {
        a1 = (__int64 *)*((_QWORD *)v25 + 1);
        *a1 = *v26;
        v30 = *((_QWORD *)v25 + 1) + 8LL;
        *((_QWORD *)v25 + 1) = v30;
        if ( v30 == *((_QWORD *)v25 + 2) )
        {
          v31 = v30 - (_QWORD)v25;
          v32 = UserReAllocPool(v25, (unsigned int)v31 + 8LL, (unsigned int)v31 + 72LL, 1819767637LL);
          if ( !v32 )
            break;
          v33 = v32 + v31;
          v25 = (struct tagBWL *)v32;
          *(_QWORD *)(v32 + 8) = v33;
          a1 = (__int64 *)(v33 + 64);
          *(_QWORD *)(v32 + 16) = v33 + 64;
        }
      }
    }
    v34 = (_QWORD *)*((_QWORD *)v25 + 1);
    if ( (unsigned __int64)v34 >= *((_QWORD *)v25 + 2) )
      goto LABEL_80;
    *v34 = 1LL;
    v35 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, v5);
    if ( !ExIsResourceAcquiredSharedLite(*v35) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v27 = *ThreadWin32Thread;
    v37 = (char *)v25 + 32;
    *((_QWORD *)v25 + 3) = v27;
    *((_QWORD *)v25 + 3) = gptiCurrent;
    *(_QWORD *)v25 = gpbwlList;
    gpbwlList = v25;
    for ( i = *((_QWORD *)v25 + 4); i != 1; v37 += 8 )
    {
      if ( i )
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
        {
          v39 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)i;
          v43 = (__int64 *)HMPkheFromPhe(v39);
          LOWORD(i) = WORD1(i) & 0x7FFF;
          if ( ((WORD1(i) & 0x7FFF) == *(_WORD *)(v39 + 26)
             || (_WORD)i == 0x7FFF
             || !(_WORD)i && PsGetCurrentProcessWow64Process(v41, v40, v42))
            && (*(_BYTE *)(v39 + 25) & 1) == 0
            && *(_BYTE *)(v39 + 24) == 1 )
          {
            v44 = *v43;
            if ( *v43 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v44 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v44 + 16) )
              {
                v45 = *v43;
                *(_QWORD *)&v52 = *(_QWORD *)(gptiCurrent + 416LL);
                *(_QWORD *)(gptiCurrent + 416LL) = &v52;
                *((_QWORD *)&v52 + 1) = v44;
                HMLockObject(v45);
                xxxInternalDoSyncPaint(v44, v3);
                ThreadUnlock1(v47, v46, v48);
              }
            }
          }
        }
      }
      i = *((_QWORD *)v37 + 1);
    }
    if ( *(_QWORD *)v25 == 3LL )
      goto LABEL_80;
    v49 = (struct tagBWL *)gpbwlList;
    v50 = (struct tagBWL *)gpbwlList;
    if ( !gpbwlList )
      return;
    while ( v50 != v25 )
    {
      v49 = v50;
      v50 = *(struct tagBWL **)v50;
      if ( !v50 )
        return;
    }
    *(_QWORD *)v49 = *(_QWORD *)v25;
    v51 = pbwlCache;
    if ( !pbwlCache )
    {
      pbwlCache = v25;
      return;
    }
    if ( (__int64)((*((_QWORD *)v25 + 2) - (_QWORD)v25 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
LABEL_80:
      v51 = v25;
    else
      pbwlCache = v25;
    Win32FreePool(v51);
  }
}
