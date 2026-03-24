/*
 * XREFs of xxxMetricsRecalc @ 0x1C01D76D4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0131DDC (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D6F68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

void __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // r15
  __int64 v8; // rbx
  struct tagBWL *v9; // rax
  struct tagBWL *v10; // r13
  unsigned __int64 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // r12d
  unsigned __int64 v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  _DWORD *Prop; // rax
  __int64 v22; // r9
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  char v26; // dl
  char v27; // r8
  int v28; // ecx
  __int64 DesktopWindow; // rax
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r10d
  unsigned int v33; // r11d
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // r10
  unsigned __int64 *v37; // [rsp+58h] [rbp-41h]
  struct tagBWL *v38; // [rsp+68h] [rbp-31h]
  __int128 v39; // [rsp+70h] [rbp-29h]
  __int128 v40; // [rsp+80h] [rbp-19h] BYREF
  __int64 v41; // [rsp+90h] [rbp-9h]

  v41 = 0LL;
  v7 = a1;
  v40 = 0LL;
  v8 = gptiCurrent;
  v9 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL), 3, 0LL);
  v38 = v9;
  v10 = v9;
  if ( !v9 )
    return;
  v11 = (unsigned __int64 *)((char *)v9 + 32);
  v37 = (unsigned __int64 *)((char *)v9 + 32);
  v12 = (*((_QWORD *)v9 + 1) - (_QWORD)v9 - 32LL) >> 3;
  if ( (int)v12 <= 0 )
    goto LABEL_49;
  do
  {
    v13 = HMValidateHandleNoSecure(*v11, 1);
    v14 = v13;
    if ( !v13
      || !IsNonImmersiveBand(v13)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) + 820LL) & 0x30) == 0x10 )
    {
      goto LABEL_47;
    }
    *(_QWORD *)&v40 = *(_QWORD *)(v8 + 416);
    *(_QWORD *)(v8 + 416) = &v40;
    *((_QWORD *)&v40 + 1) = v14;
    HMLockObject(v14);
    v15 = 0;
    v16 = v14 + 40;
    if ( (v7 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)v16 + 31LL) & 0x20) != 0 )
    {
      v17 = *(_OWORD *)(*(_QWORD *)v16 + 88LL);
LABEL_36:
      v15 = 1;
      DesktopWindow = GetDesktopWindow(v14);
      if ( v30 != DesktopWindow )
      {
        v34 = *(_QWORD *)(v30 + 40);
        v31 -= *(_DWORD *)(v34 + 108);
        v17 -= *(_DWORD *)(v34 + 104);
        v33 -= *(_DWORD *)(v34 + 108);
        v32 -= *(_DWORD *)(v34 + 104);
      }
      xxxSetWindowPos((struct tagWND *)v14, 0LL, v17, v33, v32 - v17, v31 - v33, 316);
      v11 = v37;
      goto LABEL_28;
    }
    v20 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)v16 + 28LL) & 0xC00000) == 12582912
      || (*(_DWORD *)(*(_QWORD *)v16 + 28LL) & 0x40000) != 0 )
    {
      v18 = *(_QWORD *)(v14 + 16);
      v19 = *(_DWORD *)(v18 + 632) <= 0x9900u ? *(_DWORD *)(v18 + 648) : 0;
      if ( (v19 & 0x30000000) == 0 )
        v20 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(*(_QWORD *)v16 + 30LL) & 4) != 0 || (_DWORD)v20) )
    {
      Prop = (_DWORD *)GetProp(v14, WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
      v22 = *(_QWORD *)v16;
      v23 = a6;
      if ( (*(_BYTE *)(*(_QWORD *)v16 + 30LL) & 4) == 0 )
        v23 = a7;
      v24 = v23 + a2;
      v20 = (unsigned int)(a3 + v23);
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v24;
        Prop[11] -= v20;
        v22 = *(_QWORD *)(v14 + 40);
      }
      if ( (*(_BYTE *)(v22 + 31) & 0x20) == 0 )
      {
        v17 = *(_DWORD *)(v22 + 88) - v24;
        v7 = a1;
        goto LABEL_36;
      }
      if ( Prop )
      {
        *Prop -= v24;
        Prop[2] += v24;
        Prop[1] -= v20;
        Prop[3] += v20;
      }
    }
    v7 = a1;
LABEL_28:
    if ( (v7 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v14, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v25 = *(_QWORD *)v16;
      v26 = *(_BYTE *)(*(_QWORD *)v16 + 31LL);
      if ( (v26 & 0x20) == 0 && !v15 )
      {
        v27 = *(_BYTE *)(v25 + 16);
        v39 = *(_OWORD *)(v25 + 88);
        if ( (v27 & 1) != 0 )
          v28 = a5 + HIDWORD(v39);
        else
          v28 = HIDWORD(*(_OWORD *)(v25 + 88));
        if ( (v27 & 8) != 0
          && (v35 = v28 + a4, v28 += a4, (v26 & 0x41) == 0x41)
          && (v36 = *(_QWORD *)(*(_QWORD *)(v14 + 104) + 40LL), (*(_WORD *)(v36 + 42) & 0x2FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            (struct tagWND *)v14,
            0LL,
            (unsigned int)(v39 - *(_DWORD *)(v36 + 88)),
            (unsigned int)(DWORD1(v39) - *(_DWORD *)(v36 + 92) - a4),
            DWORD2(v39) - v39,
            v35 - DWORD1(v39),
            60);
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v14, 0LL, 0LL, 0LL, DWORD2(v39) - v39, v28 - DWORD1(v39), 318);
        }
      }
      v7 = a1;
    }
    ThreadUnlock1(v20);
    v8 = gptiCurrent;
LABEL_47:
    ++v11;
    LODWORD(v12) = v12 - 1;
    v37 = v11;
  }
  while ( (int)v12 > 0 );
  v10 = v38;
LABEL_49:
  FreeHwndList(v10);
}
