/*
 * XREFs of xxxMetricsRecalc @ 0x1C015823C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00C8AD0 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01580A8 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 */

struct tagBWL *__fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // si
  __int64 v9; // r14
  struct tagBWL *result; // rax
  struct tagBWL *v11; // rbp
  _QWORD *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  struct tagWND *v15; // rbx
  int v16; // r15d
  bool v17; // zf
  _QWORD *v18; // rsi
  __int64 v19; // r8
  _DWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // al
  char v24; // dl
  int v25; // ecx
  _DWORD *Prop; // rax
  int v27; // ecx
  int v28; // r9d
  __int64 DesktopWindow; // rax
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r9d
  unsigned int v33; // r10d
  unsigned int v34; // r11d
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // r10
  struct tagBWL *v38; // [rsp+58h] [rbp-70h]
  __int128 v39; // [rsp+60h] [rbp-68h]
  __int128 v40; // [rsp+70h] [rbp-58h] BYREF
  __int64 v41; // [rsp+80h] [rbp-48h]

  v7 = a1;
  v40 = 0LL;
  v41 = 0LL;
  v9 = gptiCurrent;
  result = BuildHwndList(
             *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL),
             (const struct tagWND *)3,
             0LL,
             1);
  v38 = result;
  v11 = result;
  if ( !result )
    return result;
  v12 = (_QWORD *)((char *)result + 32);
  v13 = (*((_QWORD *)result + 1) - (_QWORD)result - 32LL) >> 3;
  if ( (int)v13 <= 0 )
    return (struct tagBWL *)FreeHwndList(v11);
  do
  {
    v14 = HMValidateHandleNoSecure(*v12, 1);
    v15 = (struct tagWND *)v14;
    if ( !v14
      || !IsNonImmersiveBand(v14)
      || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 424LL) + 820LL) & 0x30) == 0x10 )
    {
      goto LABEL_24;
    }
    *(_QWORD *)&v40 = *(_QWORD *)(v9 + 416);
    *(_QWORD *)(v9 + 416) = &v40;
    *((_QWORD *)&v40 + 1) = v15;
    HMLockObject(v15);
    v16 = 0;
    v17 = (v7 & 4) == 0;
    v18 = (_QWORD *)((char *)v15 + 40);
    if ( !v17 && (*(_BYTE *)(*v18 + 31LL) & 0x20) != 0 )
      goto LABEL_35;
    v19 = *v18;
    v20 = (_DWORD *)*(unsigned int *)(*v18 + 28LL);
    v22 = 0;
    if ( (*(_DWORD *)(*v18 + 28LL) & 0xC00000) == 12582912 || ((unsigned int)v20 & 0x40000) != 0 )
    {
      v21 = *((_QWORD *)v15 + 2);
      if ( *(_DWORD *)(v21 + 632) > 0x9900u || (*(_DWORD *)(v21 + 648) & 0x30000000) == 0 )
        v22 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v19 + 30) & 4) != 0 || (_DWORD)v22) )
    {
      Prop = (_DWORD *)GetProp((__int64)v15, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
      v19 = *v18;
      v20 = Prop;
      v27 = a6;
      if ( (*(_BYTE *)(*v18 + 30LL) & 4) == 0 )
        v27 = a7;
      v28 = v27 + a2;
      v22 = (unsigned int)(a3 + v27);
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v28;
        Prop[11] -= v22;
        v19 = *((_QWORD *)v15 + 5);
      }
      if ( (*(_BYTE *)(v19 + 31) & 0x20) != 0 )
      {
        if ( Prop )
        {
          *Prop -= v28;
          Prop[2] += v28;
          Prop[1] -= v22;
          Prop[3] += v22;
        }
        goto LABEL_14;
      }
LABEL_35:
      v16 = 1;
      DesktopWindow = GetDesktopWindow((__int64)v15);
      if ( v30 != DesktopWindow )
      {
        v35 = *(_QWORD *)(v30 + 40);
        v31 -= *(_DWORD *)(v35 + 108);
        v34 -= *(_DWORD *)(v35 + 104);
        v32 -= *(_DWORD *)(v35 + 104);
        v33 -= *(_DWORD *)(v35 + 108);
      }
      xxxSetWindowPos(v15, 0LL, v34, v33, v32 - v34, v31 - v33, 316);
    }
LABEL_14:
    if ( (a1 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((unsigned __int64 *)v15, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v22 = *v18;
      v23 = *(_BYTE *)(*v18 + 31LL);
      if ( (v23 & 0x20) == 0 && !v16 )
      {
        v24 = *(_BYTE *)(v22 + 16);
        v39 = *(_OWORD *)(v22 + 88);
        if ( (v24 & 1) != 0 )
          v25 = a5 + HIDWORD(v39);
        else
          v25 = HIDWORD(*(_OWORD *)(v22 + 88));
        if ( (v24 & 8) != 0
          && (v36 = v25 + a4, v25 += a4, (v23 & 0x41) == 0x41)
          && (v37 = *(_QWORD *)(*((_QWORD *)v15 + 13) + 40LL), (*(_WORD *)(v37 + 42) & 0x2FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            v15,
            0LL,
            (unsigned int)(v39 - *(_DWORD *)(v37 + 88)),
            (unsigned int)(DWORD1(v39) - *(_DWORD *)(v37 + 92) - a4),
            DWORD2(v39) - v39,
            v36 - DWORD1(v39),
            60);
        }
        else
        {
          xxxSetWindowPos(v15, 0LL, 0LL, 0LL, DWORD2(v39) - v39, v25 - DWORD1(v39), 318);
        }
      }
    }
    ThreadUnlock1(v22, v20, v19);
    v7 = a1;
    v9 = gptiCurrent;
LABEL_24:
    LODWORD(v13) = v13 - 1;
    ++v12;
  }
  while ( (int)v13 > 0 );
  v11 = v38;
  return (struct tagBWL *)FreeHwndList(v11);
}
