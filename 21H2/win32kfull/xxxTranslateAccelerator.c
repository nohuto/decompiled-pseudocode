/*
 * XREFs of xxxTranslateAccelerator @ 0x1C010B478
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C010B310 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C0046D10 (xxxSetSysMenu.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     SystoChar @ 0x1C010B830 (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0129584 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015C5BC (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // r15d
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ebx
  __int16 KeyState; // ax
  unsigned __int8 v13; // di
  __int16 v14; // ax
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  char v17; // r14
  int v19; // eax
  unsigned __int64 v20; // r15
  BOOL v21; // edi
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rcx
  __int64 SysDesktopMenu; // rbx
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  char v31; // cl
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  int v34; // eax
  unsigned __int8 v35; // [rsp+50h] [rbp-39h]
  __int128 v36; // [rsp+60h] [rbp-29h] BYREF
  __int64 v37; // [rsp+70h] [rbp-19h]
  _QWORD v38[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v39[10]; // [rsp+90h] [rbp+7h] BYREF

  v37 = 0LL;
  v36 = 0LL;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v4 = a2 + 28;
  v5 = 0;
  v6 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v6 )
  {
LABEL_3:
    v7 = 1LL;
    goto LABEL_4;
  }
  v19 = v6 - 2;
  if ( v19 )
  {
    v34 = v19 - 2;
    if ( !v34 )
      goto LABEL_3;
    if ( v34 != 2 )
      return 0LL;
  }
  v7 = 0LL;
LABEL_4:
  v8 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( v8
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL) + 80LL) & 1) != 0
    && (_GetKeyState(165LL) & 0x8000) != 0 )
  {
    v10 = 163LL;
    v9 = 164;
  }
  else
  {
    v9 = 18;
    v10 = 17LL;
  }
  v11 = ((unsigned __int16)_GetKeyState(v10) >> 12) & 8;
  KeyState = _GetKeyState(v9);
  v13 = v11 | 0x10;
  if ( (KeyState & 0x8000) == 0 )
    v13 = v11;
  v14 = _GetKeyState(16LL);
  v15 = v13 | 4;
  v16 = a3;
  if ( (v14 & 0x8000) == 0 )
    v15 = v13;
  v35 = v15;
  do
  {
    v17 = *(_BYTE *)v4;
    if ( *(unsigned __int16 *)(v4 + 2) == *(_QWORD *)(v16 + 16)
      && (_DWORD)v7 == (v17 & 1)
      && (!v7 || (((unsigned __int8)v17 ^ v15) & 0xC) == 0)
      && (((unsigned __int8)v17 ^ v15) & 0x10) == 0 )
    {
      v20 = *(unsigned __int16 *)(v4 + 4);
      v21 = 0;
      v22 = 0;
      if ( *(_WORD *)(v4 + 4) )
      {
        v23 = *(_QWORD *)(a1 + 40);
        if ( (*(_BYTE *)(v23 + 31) & 0x40) != 0 )
          goto LABEL_28;
        v24 = *(_QWORD *)(a1 + 168);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v36 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v36;
        *((_QWORD *)&v36 + 1) = v24;
        if ( v24 )
          HMLockObject(v24);
        SmartObjStackRefBase<tagMENU>::Init(v38, v24);
        v38[2] = 0LL;
        v22 = xxxTA_AccelerateMenu(a1);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v38);
        ThreadUnlock1(v26);
        v23 = *(_QWORD *)(a1 + 40);
        if ( (*(_BYTE *)(v23 + 31) & 0x40) != 0 || !v22 )
        {
LABEL_28:
          SysDesktopMenu = *(_QWORD *)(a1 + 160);
          if ( SysDesktopMenu || (*(_BYTE *)(v23 + 30) & 8) == 0 )
          {
            v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v36 = *(_QWORD *)(v33 + 416);
            *(_QWORD *)(v33 + 416) = &v36;
            *((_QWORD *)&v36 + 1) = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
          }
          else
          {
            v28 = (__int64 *)(*(_QWORD *)(a1 + 24) + 56LL);
            SysDesktopMenu = *v28;
            if ( !*v28 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v28, 16LL);
            v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v36 = *(_QWORD *)(v29 + 416);
            *(_QWORD *)(v29 + 416) = &v36;
            *((_QWORD *)&v36 + 1) = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
            xxxSetSysMenu((struct tagWND *)a1);
          }
          SmartObjStackRefBase<tagMENU>::Init(v39, SysDesktopMenu);
          v39[2] = 0LL;
          v22 = xxxTA_AccelerateMenu(a1);
          v21 = v22 != 0;
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v39);
          ThreadUnlock1(v30);
        }
      }
      v31 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      if ( (v22 & 1) == 0
        && (!v22
         || ((v31 & 0x20) == 0 || v21) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) && (v31 & 8) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        v32 = v20;
        if ( !v21 )
          v32 = v20 | 0x10000;
        xxxSendTransformableMessageTimeout(
          a1,
          v21 + 273,
          v32,
          (struct _LARGE_STRING *)((unsigned __int64)v21 << 16),
          0,
          0,
          0LL,
          1,
          !v21);
        v17 = 0x80;
      }
      v15 = v35;
      v16 = a3;
      v5 = 1;
    }
    v4 += 6LL;
  }
  while ( v17 >= 0 && !v5 );
  return v5;
}
