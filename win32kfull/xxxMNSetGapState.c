/*
 * XREFs of xxxMNSetGapState @ 0x1C0234718
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01D76E0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0234910 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxInvalidateRect @ 0x1C0217D5C (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C02192F8 (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C02194AC (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 v18; // rcx
  int v19; // eax
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
  if ( (a3 & 3) != 0 )
  {
    LOBYTE(v8) = IsMFMWFPWindow((__int64)a1);
    if ( v8 )
    {
      v10 = safe_cast_fnid_to_PMENUWND(v9);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v24, v11);
          if ( *(_QWORD *)v24[0] )
          {
            v12 = MNGetpItem((__int64)v24, a2);
            if ( v12 )
            {
              LODWORD(v27) = *(_DWORD *)(*(_QWORD *)v12 + 64LL);
              DWORD2(v27) = *(_DWORD *)(*(_QWORD *)v12 + 64LL) + *(_DWORD *)(*(_QWORD *)v12 + 72LL);
              DWORD1(v27) = *(_DWORD *)(*(_QWORD *)v12 + 68LL);
              HIDWORD(v27) = *(_DWORD *)(*(_QWORD *)v12 + 68LL) + *(_DWORD *)(*(_QWORD *)v12 + 76LL);
              if ( (a3 & 1) == 0 )
              {
                v16 = MNGetpItem((__int64)v24, a2 + 1);
                v18 = *v17;
                if ( a4 )
                {
                  *(_DWORD *)(v18 + 4) |= 0x40000000u;
                  if ( !v16 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_QWORD *)v16 + 4LL) |= 0x80000000;
                }
                else
                {
                  *(_DWORD *)(v18 + 4) &= ~0x40000000u;
                  if ( !v16 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_QWORD *)v16 + 4LL) &= ~0x80000000;
                }
                HIDWORD(v27) += *(_DWORD *)(gpsi + 2172LL);
                goto LABEL_20;
              }
              v13 = MNGetpItem((__int64)v24, a2 - 1);
              v15 = *v14;
              if ( a4 )
              {
                *(_DWORD *)(v15 + 4) |= 0x80000000;
                if ( v13 )
                {
                  *(_DWORD *)(*(_QWORD *)v13 + 4LL) |= 0x40000000u;
LABEL_13:
                  DWORD1(v27) -= *(_DWORD *)(gpsi + 2172LL);
                }
              }
              else
              {
                *(_DWORD *)(v15 + 4) &= ~0x80000000;
                if ( v13 )
                {
                  *(_DWORD *)(*(_QWORD *)v13 + 4LL) &= ~0x40000000u;
                  goto LABEL_13;
                }
              }
LABEL_20:
              v19 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                             *(_QWORD *)(*(_QWORD *)v24[0] + 40LL),
                                             *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 116LL))
                              + 68LL);
              DWORD1(v27) -= v19;
              HIDWORD(v27) -= v19;
              ThreadLockAlways(a1, &v25);
              xxxInvalidateRect(a1, (int *)&v27, 1);
              ThreadUnlock1(v21, v20, v22);
            }
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24);
}
