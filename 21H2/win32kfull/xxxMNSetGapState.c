/*
 * XREFs of xxxMNSetGapState @ 0x1C024568C
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01F91D0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02458A8 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C022EAE0 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C023021C (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v24[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h]
  __int128 v27; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, 0LL);
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( (a3 & 3) != 0 && IsMFMWFPWindow((__int64)a1) )
  {
    v9 = safe_cast_fnid_to_PMENUWND(v8);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v24, v10);
        if ( *(_QWORD *)v24[0] )
        {
          v11 = MNGetpItem((__int64)v24, a2);
          if ( v11 )
          {
            LODWORD(v27) = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
            DWORD2(v27) = *(_DWORD *)(*(_QWORD *)v11 + 64LL) + *(_DWORD *)(*(_QWORD *)v11 + 72LL);
            DWORD1(v27) = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
            HIDWORD(v27) = *(_DWORD *)(*(_QWORD *)v11 + 68LL) + *(_DWORD *)(*(_QWORD *)v11 + 76LL);
            if ( (a3 & 1) == 0 )
            {
              v15 = MNGetpItem((__int64)v24, a2 + 1);
              v17 = *v16;
              if ( a4 )
              {
                *(_DWORD *)(v17 + 4) |= 0x40000000u;
                if ( !v15 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v15 + 4LL) |= 0x80000000;
              }
              else
              {
                *(_DWORD *)(v17 + 4) &= ~0x40000000u;
                if ( !v15 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v15 + 4LL) &= ~0x80000000;
              }
              HIDWORD(v27) += *(_DWORD *)(gpsi + 2172LL);
              goto LABEL_20;
            }
            v12 = MNGetpItem((__int64)v24, a2 - 1);
            v14 = *v13;
            if ( a4 )
            {
              *(_DWORD *)(v14 + 4) |= 0x80000000;
              if ( v12 )
              {
                *(_DWORD *)(*(_QWORD *)v12 + 4LL) |= 0x40000000u;
LABEL_13:
                DWORD1(v27) -= *(_DWORD *)(gpsi + 2172LL);
              }
            }
            else
            {
              *(_DWORD *)(v14 + 4) &= ~0x80000000;
              if ( v12 )
              {
                *(_DWORD *)(*(_QWORD *)v12 + 4LL) &= ~0x40000000u;
                goto LABEL_13;
              }
            }
LABEL_20:
            v18 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                           *(_QWORD *)(*(_QWORD *)v24[0] + 40LL),
                                           *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 116LL))
                            + 68LL);
            DWORD1(v27) -= v18;
            HIDWORD(v27) -= v18;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v25 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v25;
            *((_QWORD *)&v25 + 1) = a1;
            HMLockObject(a1);
            xxxInvalidateRect(a1, (int *)&v27, 1);
            ThreadUnlock1(v21, v20, v22);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24);
}
