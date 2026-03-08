/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01433FC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0143940 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01439F8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01B6DDC (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  _DWORD *v9; // rax
  __int128 v10; // xmm0
  int NextFrameId; // eax
  _DWORD *v12; // rsi
  __int64 v13; // r8
  int PointerFlagsFromMouse; // eax
  struct tagPOINT v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rcx
  _DWORD *v21; // rax
  __int128 v22; // [rsp+38h] [rbp-31h] BYREF
  __int128 v23; // [rsp+48h] [rbp-21h]
  struct tagPOINT v24[2]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v25; // [rsp+68h] [rbp-1h]
  __int128 v26; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v27; // [rsp+88h] [rbp+1Fh] BYREF

  memset_0(&v22, 0, 0x60uLL);
  v9 = *(_DWORD **)(gptiCurrent + 1352LL);
  if ( !v9 )
  {
    v9 = (_DWORD *)Win32AllocPoolZInit(384LL, 1347253077LL);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(gptiCurrent + 1352LL) = v9;
  }
  if ( a5 && (*v9 & 0x10) != 0 )
  {
    *v9 &= ~0x10u;
    **(_DWORD **)(gptiCurrent + 1352LL) &= ~4u;
  }
  if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)a3 + 6)) )
  {
    v10 = *(_OWORD *)a3;
    *(_QWORD *)&v22 = 0x100000004LL;
    *(_OWORD *)a1 = v10;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *((_OWORD *)a1 + 7) = *((_OWORD *)a3 + 7);
    *((_OWORD *)a1 + 8) = *((_OWORD *)a3 + 8);
    *((_OWORD *)a1 + 9) = *((_OWORD *)a3 + 9);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    NextFrameId = GetNextFrameId();
    *(_QWORD *)&v23 = -1LL;
    DWORD2(v22) = NextFrameId;
    *((_QWORD *)&v23 + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v12 = (_DWORD *)((char *)a1 + 24);
    v13 = *((_QWORD *)a3 + 4);
    LODWORD(v26) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v27 = *((_QWORD *)a3 + 16);
    DWORD1(v26) = 1;
    PointerFlagsFromMouse = GetPointerFlagsFromMouse((char *)a1 + 24, a2, v13, (char *)&v26 + 12, (char *)&v27 + 8);
    HIDWORD(v22) = PointerFlagsFromMouse;
    if ( PointerFlagsFromMouse )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1352LL) & 4) == 0 )
      {
        PointerFlagsFromMouse |= 0x2000u;
        HIDWORD(v22) = PointerFlagsFromMouse;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x1000) != 0 )
        HIDWORD(v22) = PointerFlagsFromMouse | 0x400000;
      v24[0].x = *((__int16 *)a3 + 20);
      v24[0].y = *((__int16 *)a3 + 21);
      v15 = MiPConvertPoint(v24);
      v16 = (HIDWORD(v22) & 0x180000) == 0;
      *(struct tagPOINT *)&v25 = v24[0];
      v24[1] = v15;
      *((struct tagPOINT *)&v25 + 1) = v15;
      *((_QWORD *)a1 + 13) = gptiCurrent;
      if ( v16 )
      {
        v17 = WORD6(v22) & 0xE1F7;
      }
      else
      {
        DWORD2(v26) = *((__int16 *)a3 + 17);
        v17 = WORD4(v26);
      }
      *((_QWORD *)a1 + 4) = (unsigned int)(v17 << 16) | 1LL;
      v18 = *(_QWORD *)(gptiCurrent + 1352LL);
      *(_OWORD *)(v18 + 24) = v22;
      *(_OWORD *)(v18 + 40) = v23;
      *(_OWORD *)(v18 + 56) = *(_OWORD *)&v24[0].x;
      *(_OWORD *)(v18 + 72) = v25;
      *(_OWORD *)(v18 + 88) = v26;
      *(_OWORD *)(v18 + 104) = v27;
      **(_DWORD **)(gptiCurrent + 1352LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v12 - 579) & 0xFFFFFFFB) == 0 )
        {
          v19 = *(_DWORD **)(gptiCurrent + 1352LL);
          if ( (*v19 & 4) != 0 )
          {
            *v19 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1352LL) &= ~2u;
          }
        }
      }
      if ( *v12 == 577 || *v12 == 578 || (unsigned int)(*v12 - 581) < 2 )
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1352LL) + 376LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      else
      {
        StopMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_29:
  v21 = *(_DWORD **)(gptiCurrent + 1352LL);
  if ( v21 )
    *v21 &= ~1u;
  return 0LL;
}
