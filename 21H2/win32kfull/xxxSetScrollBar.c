/*
 * XREFs of xxxSetScrollBar @ 0x1C00F6058
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C00F5F00 (NtUserSetScrollInfo.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E0F0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     _InitPwSB @ 0x1C0063EC0 (_InitPwSB.c)
 *     IsVisible @ 0x1C0068164 (IsVisible.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00F6430 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00F6740 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244B74 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v5; // r12d
  __int64 v6; // r9
  BOOL v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  char v11; // r15
  __int64 inited; // rcx
  int v13; // esi
  _DWORD *v14; // rcx
  char v15; // si
  int v16; // r14d
  int v17; // r15d
  unsigned int v18; // r13d
  _DWORD *v19; // rax
  int v20; // r9d
  int v21; // r8d
  int v22; // esi
  unsigned int v23; // ecx
  int v24; // edx
  unsigned int v25; // r14d
  int v26; // r14d
  __int64 v27; // rax
  int v28; // r12d
  int v29; // r15d
  _DWORD *v30; // rax
  int v31; // r9d
  int v32; // r8d
  int v33; // esi
  int v34; // edx
  _DWORD *v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  char v44; // cl
  struct tagSBCALC *v46; // rdx
  __int64 v47; // rcx
  int v48; // [rsp+50h] [rbp-68h]
  int v49; // [rsp+50h] [rbp-68h]
  int v50; // [rsp+54h] [rbp-64h] BYREF
  int v51; // [rsp+58h] [rbp-60h] BYREF
  int v52; // [rsp+5Ch] [rbp-5Ch]
  BOOL v53; // [rsp+60h] [rbp-58h]
  unsigned __int64 v54; // [rsp+68h] [rbp-50h]
  unsigned __int64 v55; // [rsp+70h] [rbp-48h]
  char v58; // [rsp+D8h] [rbp+20h]

  v5 = a2;
  v6 = a3;
  v50 = 0;
  if ( a4 )
    a4 = IsVisible((__int64)a1);
  if ( v5 == 2 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(
             (unsigned __int64)a1,
             0xE9u,
             a4,
             (struct _LARGE_STRING *)v6,
             0,
             0,
             0LL,
             1,
             1);
  }
  v8 = v5 != 0;
  v9 = *((_QWORD *)a1 + 5);
  v53 = v8;
  v54 = (unsigned __int16)(v5 != 0 ? 3616 : 3600);
  v10 = v54 >> 8;
  v55 = v54 >> 8;
  v11 = (v5 != 0 ? 32 : 16) & *(_BYTE *)(v9 + (v54 >> 8) + 16);
  v58 = v11;
  v52 = v11 != 0;
  v51 = v52;
  if ( (*(_DWORD *)(v6 + 4) & 1) != 0 || v11 || *((_QWORD *)a1 + 19) )
  {
    inited = *((_QWORD *)a1 + 19);
    if ( inited )
    {
      v13 = 0;
    }
    else
    {
      v13 = 1;
      inited = InitPwSB((__int64)a1);
      if ( !inited )
        return 0LL;
    }
    if ( !(unsigned int)SBSetParms(
                          (struct tagSBDATA *)(16LL * (v5 != 0) + 4 + inited),
                          (struct tagSCROLLINFO *)a3,
                          &v51,
                          &v50)
      && !v13 )
    {
      if ( v11 && a4 )
      {
LABEL_67:
        xxxWindowEvent(0x800Eu, a1, v8 - 6, 0, 1u);
        v47 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
        if ( !v47
          || a1 != *(struct tagWND **)(v47 + 8)
          || ((*(_DWORD *)v47 >> 1) & 1) != v8
          || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v47 + 48) != xxxTrackThumb )
        {
          xxxDrawThumb(a1, v46, v8);
        }
        return (unsigned int)v50;
      }
      return (unsigned int)v50;
    }
    v14 = (_DWORD *)*((_QWORD *)a1 + 5);
    v15 = v54;
    v16 = v14[7];
    v17 = v14[6];
    v48 = v14[58];
    *((_BYTE *)v14 + v10 + 16) &= ~(_BYTE)v54;
    v18 = -268435456;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_14;
    v19 = (_DWORD *)*((_QWORD *)a1 + 5);
    v20 = v19[7];
    v21 = v19[6];
    v22 = v19[58];
    if ( v16 != v20 )
      goto LABEL_10;
    if ( v17 != v21 || v48 != v22 )
    {
      if ( v16 != v20 )
      {
LABEL_10:
        v23 = (v16 ^ v20) & 0xB1CF0000;
        v24 = v23 != 0;
        v25 = -v24 & 0xFFFFFFF0;
        v22 = v20 & -v24;
        goto LABEL_11;
      }
      if ( v17 != v21 )
      {
        v24 = ((v17 ^ v21) & 0x4E27A9) != 0;
        v25 = -v24 & 0xFFFFFFEC;
        v22 = v21 & -v24;
        goto LABEL_11;
      }
      if ( ((v48 ^ v22) & 0x2E00300) != 0 )
      {
        v24 = 1;
        v25 = -268435456;
LABEL_11:
        if ( v24 )
        {
          DirtyVisRgnTrackers(a1);
          v40 = (void *)ReferenceDwmApiPort(v39, v38);
          DwmAsyncChildStyleChange(v40, *(_QWORD *)a1, v25, v22);
        }
      }
    }
    v15 = v54;
LABEL_14:
    v26 = v51;
    v27 = *((_QWORD *)a1 + 5);
    if ( !v51 )
    {
      if ( (*(_BYTE *)(v27 + 30) & 0x30) == 0 )
      {
        v36 = (_DWORD *)*((_QWORD *)a1 + 19);
        if ( v36[1] == v36[2] && v36[5] == v36[6] )
        {
          RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v36);
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
          *((_QWORD *)a1 + 19) = 0LL;
        }
      }
LABEL_21:
      if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
      {
        if ( v58 )
        {
          SetOrClrWF(1, (__int64)a1, v54, 1);
          xxxEnableWndSBArrows(a1, v5, v26 == 0 ? 3 : 0);
        }
      }
      else
      {
        v52 ^= v26;
        if ( v52 )
        {
          v37 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
          if ( v37 && a1 == *(struct tagWND **)(v37 + 8) )
            *(_DWORD *)v37 |= 8u;
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
          return (unsigned int)v50;
        }
      }
      if ( v26 && a4 )
      {
        v44 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
        if ( v5 ? v44 & 2 : v44 & 4 )
        {
          v8 = v53;
          goto LABEL_67;
        }
      }
      return (unsigned int)v50;
    }
    v28 = *(_DWORD *)(v27 + 28);
    v29 = *(_DWORD *)(v27 + 24);
    v49 = *(_DWORD *)(v27 + 232);
    *(_BYTE *)(v55 + v27 + 16) |= v15;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v30 = (_DWORD *)*((_QWORD *)a1 + 5);
      v31 = v30[7];
      v32 = v30[6];
      v33 = v30[58];
      if ( v28 != v31 )
      {
LABEL_17:
        v34 = ((v28 ^ v31) & 0xB1CF0000) != 0;
        v18 = -v34 & 0xFFFFFFF0;
        v33 = v31 & -v34;
        goto LABEL_18;
      }
      if ( v29 != v32 || v49 != v33 )
      {
        if ( v28 != v31 )
          goto LABEL_17;
        if ( v29 != v32 )
        {
          v34 = ((v29 ^ v32) & 0x4E27A9) != 0;
          v18 = -v34 & 0xFFFFFFEC;
          v33 = v32 & -v34;
          goto LABEL_18;
        }
        if ( ((v49 ^ v33) & 0x2E00300) != 0 )
        {
          v34 = 1;
LABEL_18:
          if ( v34 )
          {
            DirtyVisRgnTrackers(a1);
            v43 = (void *)ReferenceDwmApiPort(v42, v41);
            DwmAsyncChildStyleChange(v43, *(_QWORD *)a1, v18, v33);
          }
        }
      }
    }
    v5 = a2;
    goto LABEL_21;
  }
  UserSetLastError(1447LL, 0LL, a3);
  return 0LL;
}
