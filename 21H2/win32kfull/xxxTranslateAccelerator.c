/*
 * XREFs of xxxTranslateAccelerator @ 0x1C00FBF34
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C00FBDD0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     SystoChar @ 0x1C00FC260 (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BD8 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014F628 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(unsigned __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // r13d
  int v6; // eax
  __int64 v7; // r15
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
  unsigned __int64 v19; // r15
  BOOL v20; // edi
  int v21; // ebx
  unsigned __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 SysDesktopMenu; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  char v31; // cl
  unsigned __int64 v32; // r8
  int v33; // eax
  __int64 *v34; // rcx
  int v35; // eax
  unsigned __int8 v36; // [rsp+50h] [rbp-39h]
  __int64 v37; // [rsp+60h] [rbp-29h]
  __int128 v38; // [rsp+68h] [rbp-21h] BYREF
  __int64 v39; // [rsp+78h] [rbp-11h]
  _QWORD v40[3]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v41[9]; // [rsp+98h] [rbp+Fh] BYREF

  v39 = 0LL;
  v38 = 0LL;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v4 = a2 + 28;
  v5 = 0;
  v6 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v6 )
  {
LABEL_3:
    v7 = 1LL;
    v37 = 1LL;
    goto LABEL_4;
  }
  v33 = v6 - 2;
  if ( v33 )
  {
    v35 = v33 - 2;
    if ( !v35 )
      goto LABEL_3;
    if ( v35 != 2 )
      return 0LL;
  }
  v7 = 0LL;
  v37 = 0LL;
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
  v36 = v15;
  do
  {
    v17 = *(_BYTE *)v4;
    if ( *(unsigned __int16 *)(v4 + 2) == *(_QWORD *)(v16 + 16)
      && (_DWORD)v7 == (v17 & 1)
      && (!v7 || (((unsigned __int8)v17 ^ v15) & 0xC) == 0)
      && (((unsigned __int8)v17 ^ v15) & 0x10) == 0 )
    {
      v19 = *(unsigned __int16 *)(v4 + 4);
      v5 = 1;
      v20 = 0;
      v21 = 0;
      if ( *(_WORD *)(v4 + 4) )
      {
        v22 = BugCheckParameter2[5];
        v23 = BugCheckParameter2[21];
        if ( (*(_BYTE *)(v22 + 31) & 0x40) != 0
          || (ThreadLock(BugCheckParameter2[21], (__int64 *)&v38),
              SmartObjStackRefBase<tagMENU>::Init(v40, v23),
              v40[2] = 0LL,
              v21 = xxxTA_AccelerateMenu((ULONG_PTR)BugCheckParameter2),
              SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v40),
              ThreadUnlock1(v25, v24, v26),
              v22 = BugCheckParameter2[5],
              (*(_BYTE *)(v22 + 31) & 0x40) != 0)
          || !v21 )
        {
          SysDesktopMenu = BugCheckParameter2[20];
          if ( SysDesktopMenu || (*(_BYTE *)(v22 + 30) & 8) == 0 )
          {
            ThreadLock(BugCheckParameter2[20], (__int64 *)&v38);
          }
          else
          {
            v34 = (__int64 *)(BugCheckParameter2[3] + 56);
            SysDesktopMenu = *v34;
            if ( !*v34 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v34, 16LL);
            ThreadLock(SysDesktopMenu, (__int64 *)&v38);
            xxxSetSysMenu(BugCheckParameter2);
          }
          SmartObjStackRefBase<tagMENU>::Init(v41, SysDesktopMenu);
          v41[2] = 0LL;
          v21 = xxxTA_AccelerateMenu((ULONG_PTR)BugCheckParameter2);
          v20 = v21 != 0;
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v41);
          ThreadUnlock1(v29, v28, v30);
        }
        v5 = 1;
      }
      v31 = *(_BYTE *)(BugCheckParameter2[5] + 31);
      if ( (v21 & 1) == 0
        && (!v21
         || ((v31 & 0x20) == 0 || v20) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) && (v31 & 8) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        v32 = v19;
        if ( !v20 )
          v32 = v19 | 0x10000;
        xxxSendTransformableMessageTimeout(
          BugCheckParameter2,
          v20 + 273,
          v32,
          (unsigned __int64)v20 << 16,
          0,
          0,
          0LL,
          1,
          !v20);
        v17 = 0x80;
      }
      v15 = v36;
      v16 = a3;
    }
    v4 += 6LL;
    if ( v17 < 0 )
      break;
    v7 = v37;
  }
  while ( !v5 );
  return v5;
}
