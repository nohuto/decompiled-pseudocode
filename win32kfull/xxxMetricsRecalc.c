void __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // bl
  __int64 v9; // r14
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // r15
  _QWORD *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  struct tagWND *v15; // rdi
  int v16; // r12d
  bool v17; // zf
  _QWORD *v18; // rbx
  unsigned int v19; // ebp
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r14
  _DWORD *Prop; // rax
  int v26; // ecx
  int v27; // r10d
  __int64 DesktopWindow; // rax
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  unsigned int v32; // r11d
  __int64 v33; // rax
  char v34; // al
  char v35; // dl
  int v36; // ecx
  int v37; // edx
  __int64 v38; // r9
  _QWORD *v39; // [rsp+50h] [rbp-78h]
  struct tagBWL *v40; // [rsp+60h] [rbp-68h]
  __int128 v41; // [rsp+68h] [rbp-60h]
  __int128 v42; // [rsp+78h] [rbp-50h] BYREF
  __int64 v43; // [rsp+88h] [rbp-40h]

  v7 = a1;
  v42 = 0LL;
  v43 = 0LL;
  v9 = gptiCurrent;
  v10 = BuildHwndList(
          *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL),
          3,
          0LL,
          1);
  v40 = v10;
  v11 = v10;
  if ( !v10 )
    return;
  v12 = (_QWORD *)((char *)v10 + 32);
  v39 = (_QWORD *)((char *)v10 + 32);
  v13 = (*((_QWORD *)v10 + 1) - (_QWORD)v10 - 32LL) >> 3;
  if ( (int)v13 <= 0 )
    goto LABEL_46;
  do
  {
    v14 = HMValidateHandleNoSecure(*v12, 1);
    v15 = (struct tagWND *)v14;
    if ( !v14
      || !IsNonImmersiveBand(v14)
      || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 424LL) + 812LL) & 0x30) == 0x10 )
    {
      goto LABEL_44;
    }
    *(_QWORD *)&v42 = *(_QWORD *)(v9 + 416);
    *(_QWORD *)(v9 + 416) = &v42;
    *((_QWORD *)&v42 + 1) = v15;
    HMLockObject(v15);
    v16 = 0;
    v17 = (v7 & 4) == 0;
    v18 = (_QWORD *)((char *)v15 + 40);
    if ( !v17 && (*(_BYTE *)(*v18 + 31LL) & 0x20) != 0 )
    {
      v19 = *(_OWORD *)(*v18 + 88LL);
LABEL_27:
      v24 = (_QWORD *)((char *)v15 + 40);
      v16 = 1;
      DesktopWindow = GetDesktopWindow((__int64)v15);
      if ( v29 != DesktopWindow )
      {
        v33 = *(_QWORD *)(v29 + 40);
        v30 -= *(_DWORD *)(v33 + 108);
        v19 -= *(_DWORD *)(v33 + 104);
        v31 -= *(_DWORD *)(v33 + 104);
        v32 -= *(_DWORD *)(v33 + 108);
      }
      xxxSetWindowPos(v15, 0LL, v19, v32, v31 - v19, v30 - v32, 316);
      v12 = v39;
      goto LABEL_30;
    }
    v20 = *v18;
    v21 = *(unsigned int *)(*v18 + 28LL);
    v23 = 0;
    if ( (*(_DWORD *)(*v18 + 28LL) & 0xC00000) == 12582912 || (v21 & 0x40000) != 0 )
    {
      v22 = *((_QWORD *)v15 + 2);
      if ( *(_DWORD *)(v22 + 632) > 0x9900u || (*(_DWORD *)(v22 + 648) & 0x30000000) == 0 )
        v23 = 1;
    }
    v24 = (_QWORD *)((char *)v15 + 40);
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v20 + 30) & 4) != 0 || (_DWORD)v23) )
    {
      Prop = (_DWORD *)GetProp((__int64)v15, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
      v26 = a6;
      if ( (*(_BYTE *)(*v18 + 30LL) & 4) == 0 )
        v26 = a7;
      v21 = (unsigned int)(v26 + a2);
      v27 = v26 + a3;
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v21;
        Prop[11] -= v27;
      }
      v23 = *v18;
      if ( (*(_BYTE *)(*v18 + 31LL) & 0x20) != 0 )
      {
        if ( Prop )
        {
          *Prop -= v21;
          Prop[2] += v21;
          Prop[1] -= v27;
          Prop[3] += v27;
        }
        v24 = (_QWORD *)((char *)v15 + 40);
        goto LABEL_30;
      }
      v19 = *(_DWORD *)(v23 + 88) - v21;
      goto LABEL_27;
    }
LABEL_30:
    v7 = a1;
    if ( (a1 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v15, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v23 = *v24;
      v34 = *(_BYTE *)(*v24 + 31LL);
      if ( (v34 & 0x20) == 0 && !v16 )
      {
        v35 = *(_BYTE *)(v23 + 16);
        v41 = *(_OWORD *)(v23 + 88);
        if ( (v35 & 1) != 0 )
          v36 = a5 + HIDWORD(v41);
        else
          v36 = HIDWORD(*(_OWORD *)(v23 + 88));
        if ( (v35 & 8) != 0
          && (v37 = v36 + a4, v36 += a4, (v34 & 0x41) == 0x41)
          && (v38 = *(_QWORD *)(*((_QWORD *)v15 + 13) + 40LL), (*(_WORD *)(v38 + 42) & 0x2FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            v15,
            0LL,
            (unsigned int)(v41 - *(_DWORD *)(v38 + 88)),
            (unsigned int)(DWORD1(v41) - *(_DWORD *)(v38 + 92) - a4),
            DWORD2(v41) - v41,
            v37 - DWORD1(v41),
            60);
        }
        else
        {
          xxxSetWindowPos(v15, 0LL, 0LL, 0LL, DWORD2(v41) - v41, v36 - DWORD1(v41), 318);
        }
      }
    }
    ThreadUnlock1(v23, v21, v20);
    v9 = gptiCurrent;
LABEL_44:
    ++v12;
    LODWORD(v13) = v13 - 1;
    v39 = v12;
  }
  while ( (int)v13 > 0 );
  v11 = v40;
LABEL_46:
  FreeHwndList(v11);
}
