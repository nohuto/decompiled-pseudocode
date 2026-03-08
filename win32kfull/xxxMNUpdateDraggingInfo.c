/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C0234910
 * Callers:
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     IsMFMWFPWindow @ 0x1C02192F8 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C021931C (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C02194AC (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // r14
  __int64 v6; // rcx
  struct tagWND *v8; // r15
  unsigned int v9; // r12d
  int v10; // ebp
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // r9
  int v23; // r9d
  int v24; // r8d
  int v25; // r10d
  unsigned int v26; // eax
  BOOL v27; // eax
  bool v28; // zf
  _QWORD v30[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v31; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+40h] [rbp-28h]

  v3 = (__int64 *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 80);
  v31 = 0LL;
  v32 = 0LL;
  ThreadLock(v6, &v31);
  v8 = (struct tagWND *)*v3;
  v9 = *(_DWORD *)(a1 + 88);
  v10 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v11 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  LOBYTE(v12) = IsMFMWFPWindow(v11);
  if ( v12 )
  {
    v16 = safe_cast_fnid_to_PMENUWND(v14);
    if ( v16 )
    {
      v13 = *(_QWORD *)(v16 + 8);
      if ( v13 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, v13);
        v17 = MNGetpItem((__int64)v30, *(_DWORD *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
        if ( v17 )
        {
          v21 = MNGetpItemFromIndex(
                  *(_QWORD *)(*(_QWORD *)v30[0] + 40LL),
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 116LL));
          v18 = *v22;
          v23 = *(_DWORD *)(*v22 + 68);
          v20 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v21 + 68LL) + v24);
          v19 = gpsi;
          v25 = *(_DWORD *)(gpsi + 2172LL);
          if ( (int)v20 > v23 + v25 )
          {
            if ( (int)v20 >= v23 + *(_DWORD *)(v18 + 76) - v25 )
              *(_DWORD *)(a1 + 92) = 2;
          }
          else
          {
            *(_DWORD *)(a1 + 92) = 1;
          }
        }
        if ( v8 != (struct tagWND *)*v3 )
          goto LABEL_21;
        v26 = *(_DWORD *)(a1 + 88) - v9;
        if ( v26 == -1 )
        {
          if ( *(_DWORD *)(a1 + 92) != 2 )
            goto LABEL_21;
          v28 = v10 == 1;
        }
        else
        {
          if ( v26 )
          {
            if ( v26 != 1 )
              goto LABEL_21;
            if ( *(_DWORD *)(a1 + 92) == 1 && v10 == 2 )
              goto LABEL_22;
            v27 = 1;
          }
          else
          {
            v27 = v10 != *(_DWORD *)(a1 + 92);
          }
          v28 = !v27;
        }
        if ( v28 )
        {
LABEL_22:
          ThreadUnlock1(v19, v18, v20);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30);
        }
LABEL_21:
        *(_DWORD *)(a1 + 92) |= 4u;
        xxxMNSetGapState(v8, v9, v10, 0);
        xxxMNSetGapState((struct tagWND *)*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
        goto LABEL_22;
      }
    }
  }
  *v3 = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return (_QWORD *)ThreadUnlock1(v14, v13, v15);
}
