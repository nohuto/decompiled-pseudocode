/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01E6484
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0166FE8 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00146EC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     PtiKbdFromQ @ 0x1C004FB88 (PtiKbdFromQ.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C00551A0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BD10 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstGlobalValid @ 0x1C006668C (PhkFirstGlobalValid.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(struct tagQMSG *a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  __int64 v3; // rdi
  __int64 GlobalValid; // rsi
  __int64 v6; // rcx
  int v7; // r15d
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // rcx
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // esi
  unsigned int v25; // r15d
  __int64 v26; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  unsigned int v30[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  _QWORD v32[29]; // [rsp+88h] [rbp-78h] BYREF
  int v33; // [rsp+188h] [rbp+88h] BYREF
  __int64 v34; // [rsp+190h] [rbp+90h] BYREF

  v31 = 0LL;
  v1 = 0LL;
  v33 = 0;
  v2 = 0LL;
  v32[2] = 0LL;
  v34 = 0LL;
  v3 = 0LL;
  *(_OWORD *)v30 = 0LL;
  while ( 1 )
  {
    v30[3] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v32[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v32;
    v32[1] = GlobalValid;
    if ( GlobalValid )
      HMLockObject(GlobalValid);
    v7 = xxxCallHook2((struct tagHOOK *)GlobalValid, 1u, 0LL, (__int64)v30, &v33, 0);
    if ( v7 == -1 )
    {
LABEL_41:
      ThreadUnlock1(v6);
      return 0xFFFFFFFFLL;
    }
    memset(&v32[3], 0, 0xA0uLL);
    v6 = v30[0];
    v8 = *(_OWORD *)&v32[5];
    *(_OWORD *)a1 = *(_OWORD *)&v32[3];
    v9 = *(_OWORD *)&v32[7];
    *((_OWORD *)a1 + 1) = v8;
    v10 = *(_OWORD *)&v32[9];
    *((_OWORD *)a1 + 2) = v9;
    v11 = *(_OWORD *)&v32[11];
    *((_OWORD *)a1 + 3) = v10;
    v12 = *(_OWORD *)&v32[13];
    *((_OWORD *)a1 + 4) = v11;
    v13 = *(_OWORD *)&v32[15];
    *((_OWORD *)a1 + 5) = v12;
    v14 = *(_OWORD *)&v32[17];
    *((_OWORD *)a1 + 6) = v13;
    v15 = *(_OWORD *)&v32[19];
    *((_OWORD *)a1 + 7) = v14;
    v16 = *(_OWORD *)&v32[21];
    *((_OWORD *)a1 + 8) = v15;
    *((_OWORD *)a1 + 9) = v16;
    *((_DWORD *)a1 + 6) = v6;
    if ( v7 > 0 )
    {
      v17 = *(_DWORD *)(gptiCurrent + 488LL);
      if ( (v17 & 0x200000) == 0 )
      {
        ThreadUnlock1(v6);
        return (unsigned int)v7;
      }
      *(_DWORD *)(gptiCurrent + 488LL) = v17 & 0xFFDFFFFF;
      v6 = v30[0];
    }
    if ( (unsigned int)(v6 - 512) <= 0xE )
      break;
    if ( (unsigned int)(v6 - 256) <= 8 )
    {
      v20 = 0;
      if ( (((_DWORD)v6 - 257) & 0xFFFFFFFB) == 0 && (v20 = 0x8000, (_DWORD)v6 == 261) || (_DWORD)v6 == 260 )
        v20 |= 0x2000u;
      v21 = v20 | 0x100;
      if ( (v30[2] & 0x8000) == 0 )
        v21 = v20;
      v22 = v21 | 0x4000;
      if ( ((unsigned __int8)(1 << (2 * (v30[1] & 3))) & *(_BYTE *)(((unsigned __int64)LOBYTE(v30[1]) >> 2)
                                                                  + *(_QWORD *)(gptiCurrent + 432LL)
                                                                  + 228)) == 0 )
        v22 = v21;
      v2 = ((LOBYTE(v30[2]) | v22) << 16) | 1;
      if ( LOWORD(v30[1]) != 231 || LOBYTE(v30[2]) )
      {
        v23 = 255;
        if ( (!v33 || (*gpsi & 2) != 0) && (v30[0] & 2) != 0 )
          v23 = 0xFFFF;
        v1 = v23 & v30[1];
      }
      else
      {
        *(_WORD *)(gptiCurrent + 874LL) = HIWORD(v30[1]);
      }
      goto LABEL_37;
    }
    if ( (_DWORD)v6 == 35 )
    {
      if ( !v30[1] || (v3 = HMValidateHandleNoSecure((int)v30[1], 1)) == 0 )
        v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      goto LABEL_37;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
      goto LABEL_41;
    xxxCallHook(2, 0LL, 0LL, 1);
    ThreadUnlock1(v18);
  }
  v24 = v30[2];
  v25 = v30[1];
  v26 = LOWORD(v30[1]) | (LOWORD(v30[2]) << 16);
  v2 = (int)v26;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v26);
  if ( __PAIR64__(v24, v25) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
    zzzInternalSetCursorPos(v25, v24, 1, 0);
LABEL_37:
  SetHardwareInputSource(&v34);
  if ( v3 )
    v28 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL);
  else
    v28 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(gptiCurrent + 432LL)) + 424) + 280LL);
  StoreQMessage(
    a1,
    (struct tagWND *)v3,
    v30[0],
    v1,
    v2,
    0,
    0LL,
    0,
    0LL,
    0,
    (struct tagINPUT_MESSAGE_SOURCE *)&v34,
    v28,
    0LL,
    0LL);
  ThreadUnlock1(v29);
  return 0LL;
}
