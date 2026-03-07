// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxInternalDoSyncPaint(__int64 *a1, unsigned int a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rax
  int v6; // ebx
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // r8
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // r14d
  int v13; // r12d
  int v14; // eax
  int v15; // r15d
  __int64 v16; // rdx
  int v17; // ebx
  __int64 *v18; // rax
  __int64 *v19; // rbx
  struct tagBWL *v20; // rdi
  __int64 v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 *ThreadWin32Thread; // rax
  char *v25; // r14
  __int64 i; // rbx
  struct tagBWL *v27; // r8
  struct tagBWL *v28; // rdx
  struct tagBWL *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 *v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  HRGN NCUpdateRgn; // rax
  HRGN v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rsi
  int v46; // r13d
  __int64 v47; // rbx
  __int64 v48; // rcx
  void *v49; // rax
  __int128 v50; // [rsp+20h] [rbp-48h] BYREF
  __int64 v51; // [rsp+30h] [rbp-38h]
  int v52; // [rsp+78h] [rbp+10h]

  v3 = a1;
  v4 = a1;
  if ( !a1 )
  {
LABEL_4:
    v5 = a1[5];
    v6 = *(_DWORD *)(v5 + 28);
    v7 = *(_DWORD *)(v5 + 24);
    v8 = *(_DWORD *)(v5 + 232);
    *(_BYTE *)(v5 + 18) &= ~0x40u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_8:
      v16 = v3[5];
      a1 = (__int64 *)((*(unsigned __int8 *)(v16 + 17) >> 2) & 2);
      v17 = (*(unsigned __int8 *)(v16 + 17) >> 2) & 2 | 1;
      v18 = v3 + 5;
      if ( (*(_BYTE *)(v16 + 17) & 2) == 0 )
        v17 = (*(unsigned __int8 *)(v16 + 17) >> 2) & 2;
      if ( v17 )
      {
        if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0 )
        {
          if ( !*(_QWORD *)(v16 + 136) )
          {
            SetOrClrWF(0, v3, 0x102u, 1);
            SetOrClrWF(0, v3, 0x104u, 1);
            LOBYTE(v17) = v17 & 0xFE;
          }
          v18 = v3 + 5;
          if ( v3[2] == gptiCurrent )
          {
            NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v3, 1);
            v42 = NCUpdateRgn;
            if ( (v17 & 2) != 0 && (*(_BYTE *)(v3[5] + 17) & 8) != 0 )
              xxxSendNCPaint((struct tagWND *)v3, NCUpdateRgn);
            if ( (v17 & 1) != 0 )
            {
              if ( (*(_BYTE *)(v3[5] + 17) & 8) != 0 )
              {
                DeleteMaybeSpecialRgn(v42);
                v42 = GetNCUpdateRgn((struct tagWND *)v3, 0);
              }
              if ( (*(_BYTE *)(v3[5] + 17) & 2) != 0 )
              {
                SetOrClrWF(0, v3, 0x102u, 1);
                SetOrClrWF(0, v3, 0x104u, 1);
                xxxSendEraseBkgnd(v3, 0LL, v42);
              }
            }
            DeleteMaybeSpecialRgn(v42);
            v18 = v3 + 5;
          }
        }
        else
        {
          SetOrClrWF(0, v3, 0x108u, 1);
          SetOrClrWF(0, v3, 0x102u, 1);
          SetOrClrWF(0, v3, 0x680u, 1);
          SetOrClrWF(0, v3, 0x104u, 1);
          v18 = v3 + 5;
        }
      }
      goto LABEL_11;
    }
    v10 = (_DWORD *)v3[5];
    v52 = v10[7];
    v11 = v10[6];
    v12 = v7 ^ v11;
    v13 = v10[58];
    v14 = v8 ^ v13;
    v15 = v6 ^ v52;
    if ( v6 == v52 )
    {
      if ( v12 )
        goto LABEL_71;
      if ( !v14 )
        goto LABEL_8;
    }
    if ( (v15 & 0xB1CF0000) != 0 )
    {
      v13 = v52;
      v46 = -16;
      goto LABEL_75;
    }
LABEL_71:
    if ( (v12 & 0x4E27A9) != 0 )
    {
      v46 = -20;
      v13 = v11;
    }
    else
    {
      if ( (v14 & 0x12C0) == 0 )
        goto LABEL_76;
      v46 = -268435456;
    }
LABEL_75:
    DirtyVisRgnTrackers((__int64)v3);
    v47 = *v3;
    v49 = (void *)ReferenceDwmApiPort(v48);
    DwmAsyncChildStyleChange(v49, v47, v46, v13);
LABEL_76:
    if ( (v12 & 0x200A0381) != 0 || (v15 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges((struct tagWND *)v3, 1LL, v9);
    goto LABEL_8;
  }
  while ( (*(_BYTE *)(v4[5] + 27) & 2) == 0 )
  {
    v4 = (__int64 *)v4[13];
    if ( !v4 )
      goto LABEL_4;
  }
  v18 = a1 + 5;
LABEL_11:
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(*v18 + 31) & 2) != 0 )
  {
    v19 = (__int64 *)v3[14];
    v20 = pbwlCache;
    v21 = 0LL;
    v51 = 0LL;
    v50 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v40 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v20 = (struct tagBWL *)v40;
      if ( !v40 )
        return;
      *(_QWORD *)(v40 + 16) = v40 + 280;
    }
    *((_QWORD *)v20 + 3) = 0LL;
    for ( *((_QWORD *)v20 + 1) = (char *)v20 + 32; v19; v19 = (__int64 *)v19[11] )
    {
      v30 = *((_QWORD *)v20 + 3);
      if ( !v30 || v30 == v19[2] )
      {
        a1 = (__int64 *)*((_QWORD *)v20 + 1);
        *a1 = *v19;
        v31 = *((_QWORD *)v20 + 1) + 8LL;
        *((_QWORD *)v20 + 1) = v31;
        if ( v31 == *((_QWORD *)v20 + 2) )
        {
          v43 = v31 - (_QWORD)v20;
          v44 = UserReAllocPool(v20, (unsigned int)v43 + 8LL, (unsigned int)v43 + 72LL, 1819767637LL);
          if ( !v44 )
            break;
          v45 = v44 + v43;
          v20 = (struct tagBWL *)v44;
          *(_QWORD *)(v44 + 8) = v45;
          a1 = (__int64 *)(v45 + 64);
          *(_QWORD *)(v44 + 16) = v45 + 64;
        }
      }
    }
    v22 = (_QWORD *)*((_QWORD *)v20 + 1);
    if ( (unsigned __int64)v22 < *((_QWORD *)v20 + 2) )
    {
      *v22 = 1LL;
      v23 = SGDGetUserSessionState(a1);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 8)) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
      *((_QWORD *)v20 + 3) = v21;
      v25 = (char *)v20 + 32;
      *((_QWORD *)v20 + 3) = gptiCurrent;
      *(_QWORD *)v20 = gpbwlList;
      gpbwlList = v20;
      for ( i = *((_QWORD *)v20 + 4); i != 1; v25 += 8 )
      {
        if ( i )
        {
          PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
          {
            v32 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)i;
            v34 = (__int64 *)HMPkheFromPhe(v32);
            LOWORD(i) = WORD1(i) & 0x7FFF;
            if ( ((WORD1(i) & 0x7FFF) == *(_WORD *)(v32 + 26)
               || (_WORD)i == 0x7FFF
               || !(_WORD)i && PsGetCurrentProcessWow64Process(v33))
              && (*(_BYTE *)(v32 + 25) & 1) == 0
              && *(_BYTE *)(v32 + 24) == 1 )
            {
              v35 = *v34;
              if ( *v34 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v35 + 16) )
                {
                  v36 = *v34;
                  *(_QWORD *)&v50 = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = &v50;
                  *((_QWORD *)&v50 + 1) = v35;
                  HMLockObject(v36);
                  xxxInternalDoSyncPaint(v35, a2);
                  ThreadUnlock1(v38, v37, v39);
                }
              }
            }
          }
        }
        i = *((_QWORD *)v25 + 1);
      }
      if ( *(_QWORD *)v20 != 3LL )
      {
        v27 = (struct tagBWL *)gpbwlList;
        v28 = (struct tagBWL *)gpbwlList;
        if ( !gpbwlList )
          return;
        while ( v28 != v20 )
        {
          v27 = v28;
          v28 = *(struct tagBWL **)v28;
          if ( !v28 )
            return;
        }
        *(_QWORD *)v27 = *(_QWORD *)v20;
        v29 = pbwlCache;
        if ( !pbwlCache )
        {
          pbwlCache = v20;
          return;
        }
        if ( (__int64)((*((_QWORD *)v20 + 2) - (_QWORD)v20 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
        {
          pbwlCache = v20;
          Win32FreePool(v29);
          return;
        }
      }
    }
    Win32FreePool(v20);
  }
}
